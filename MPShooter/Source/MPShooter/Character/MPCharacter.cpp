// Fill out your copyright notice in the Description page of Project Settings.

#include "MPCharacter.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "InputActionValue.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/DecalComponent.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Sound/SoundCue.h"
#include "TimerManager.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "MPShooter/MPShooter.h"
#include "MPShooter/Input/MPInputConfigData.h"
#include "MPShooter/Item/Weapon/Weapon.h"
#include "MPShooter/MPTypes/WeaponTypes.h"
#include "MPShooter/MPTypes/CombatState.h"
#include "MPShooter/MPTypes/Team.h"
#include "MPShooter/MPComponents/CombatComponent.h"
#include "MPShooter/MPComponents/BuffComponent.h"
#include "MPShooter/MPComponents/LagComponent.h"
#include "MPShooter/PlayerController/MPPlayerController.h"
#include "MPShooter/PlayerState/MPPlayerState.h"
#include "MPShooter/GameMode/MPShooterGameMode.h"
#include "MPShooter/GameState/MPGameState.h"
#include "MPAnimInstance.h"
#include "DrawDebugHelpers.h"

#pragma region Constructor
AMPCharacter::AMPCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	// Set to the mesh instead of root due to capsule size changing when we crouch
	CameraBoom->SetupAttachment(GetMesh());
	CameraBoom->TargetArmLength = 600.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// Makes sure player always spawns, even if colliding with an object
	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 0.f, 850.f);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	GetMesh()->SetCollisionObjectType(ECC_SkeletalMesh);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
	// Issue in Unreal 5.1
	// Bone shift isnt' updated when client characters aren't in the server's view, so muzzle position is incorrect
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;

	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;
	TurningInPlace = ETurningInPlace::ETIP_NotTurning;

	OverheadWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverheadWidget"));
	OverheadWidget->SetupAttachment(RootComponent);

	Combat = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat"));
	Combat->SetIsReplicated(true);

	Buff = CreateDefaultSubobject<UBuffComponent>(TEXT("Buff"));
	Buff->SetIsReplicated(true);

	LagCompensation = CreateDefaultSubobject<ULagComponent>(TEXT("LagCompensation"));

	DissolveTimeline = CreateDefaultSubobject<UTimelineComponent>("DissolveTimelineComponent");

	AttachedThrowable = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Attached Throwable"));
	AttachedThrowable->SetupAttachment(GetMesh(), FName("ThrowableSocket"));
	AttachedThrowable->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	AimRangeGridSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Aim Range Grid Sphere"));
	AimRangeGridSphere->SetupAttachment(GetMesh(), FName("HeadSocket"));
	AimRangeGridSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	AimDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("Aim Decal"));
	AimDecal->SetupAttachment(AimRangeGridSphere);

	AimPathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("Aim Path Spline"));
	AimPathSpline->SetupAttachment(GetMesh(), FName("HeadSocket"));
	AimPathSpline->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	NetUpdateFrequency = 66.f;
	MinNetUpdateFrequency = 33.f;
}
#pragma endregion

#pragma region Engine Overrides
void AMPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	UpdateHUDHealth();
	UpdateHUDShield();

	if (HasAuthority())
	{
		OnTakeAnyDamage.AddDynamic(this, &AMPCharacter::ReceiveDamage);
	}

	if (AttachedThrowable)
	{
		AttachedThrowable->SetVisibility(false);
	}
	if (AimRangeGridSphere)
	{
		AimRangeGridSphere->SetVisibility(false);
	}
	if (AimDecal)
	{
		AimDecal->SetVisibility(false);
	}
	if (AimPathSpline)
	{
		AimPathSpline->SetVisibility(false);
	}

	HitPhysAssetConstruction();
}

void AMPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotateInPlace(DeltaTime);
	HideCameraIfCharacterIsClose();
	PollInit();
	DrawHitPhysAsset();
}

void AMPCharacter::Destroyed()
{
	Super::Destroyed();

	if (EliminateComponent)
	{
		EliminateComponent->DestroyComponent();
	}

	AMPShooterGameMode* MPGameMode = Cast<AMPShooterGameMode>(UGameplayStatics::GetGameMode(this));
	bool bMatchNotInProgress = MPGameMode && MPGameMode->GetMatchState() != MatchState::InProgress;

	if (Combat && Combat->EquippedWeapon && bMatchNotInProgress)
	{
		Combat->EquippedWeapon->Destroy();
	}
}

#pragma region Initialization
void AMPCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (Combat)
	{
		Combat->Character = this;
	}
	if (Buff)
	{
		Buff->Character = this;

		Buff->SetInitialSpeeds(
			GetCharacterMovement()->MaxWalkSpeed,
			GetCharacterMovement()->MaxWalkSpeedCrouched
		);
		Buff->SetInitialJumpVelocity(GetCharacterMovement()->JumpZVelocity);
	}
	if (LagCompensation)
	{
		LagCompensation->Character = this;
		if (Controller)
		{
			LagCompensation->Controller = Cast<AMPPlayerController>(Controller);
		}
	}
}
#pragma endregion

#pragma region Replication
void AMPCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AMPCharacter, OverlappingWeapon, COND_OwnerOnly);
	DOREPLIFETIME(AMPCharacter, Health);
	DOREPLIFETIME(AMPCharacter, Shield);
	DOREPLIFETIME(AMPCharacter, bDisableGameplay)
}

void AMPCharacter::OnRep_ReplicatedMovement()
{
	Super::OnRep_ReplicatedMovement();

	SimProxiesTurn();
	TimeSincePrevMovementReplication = 0.f;
}
#pragma endregion

#pragma region Input
void AMPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (Subsystem)
		{
			Subsystem->ClearAllMappings();
			Subsystem->AddMappingContext(InputMapping, 0);

			UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
			if (EnhancedInputComponent)
			{
				EnhancedInputComponent->BindAction(InputActions->InputMove, ETriggerEvent::Triggered, this, &AMPCharacter::Move);
				EnhancedInputComponent->BindAction(InputActions->InputLook, ETriggerEvent::Triggered, this, &AMPCharacter::Look);

				EnhancedInputComponent->BindAction(InputActions->InputJump, ETriggerEvent::Triggered, this, &AMPCharacter::Jump);
				EnhancedInputComponent->BindAction(InputActions->InputEquip, ETriggerEvent::Triggered, this, &AMPCharacter::EquipButtonPressed);
				EnhancedInputComponent->BindAction(InputActions->InputUnequip, ETriggerEvent::Triggered, this, &AMPCharacter::UnequipButtonPressed);
				EnhancedInputComponent->BindAction(InputActions->InputCrouch, ETriggerEvent::Triggered, this, &AMPCharacter::CrouchButtonPressed);
				EnhancedInputComponent->BindAction(InputActions->InputFire, ETriggerEvent::Triggered, this, &AMPCharacter::FireButtonPressed);
				EnhancedInputComponent->BindAction(InputActions->InputFire, ETriggerEvent::Completed, this, &AMPCharacter::FireButtonReleased);
				EnhancedInputComponent->BindAction(InputActions->InputReload, ETriggerEvent::Triggered, this, &AMPCharacter::ReloadButtonPressed);
				EnhancedInputComponent->BindAction(InputActions->InputAim, ETriggerEvent::Triggered, this, &AMPCharacter::AimButtonPressed);
				EnhancedInputComponent->BindAction(InputActions->InputAim, ETriggerEvent::Completed, this, &AMPCharacter::AimButtonReleased);
				EnhancedInputComponent->BindAction(InputActions->InputThrow, ETriggerEvent::Triggered, this, &AMPCharacter::ThrowButtonPressed);
				EnhancedInputComponent->BindAction(InputActions->InputThrow, ETriggerEvent::Completed, this, &AMPCharacter::ThrowButtonReleased);
				EnhancedInputComponent->BindAction(InputActions->InputQuit, ETriggerEvent::Triggered, this, &AMPCharacter::QuitButtonPressed);
				EnhancedInputComponent->BindAction(InputActions->InputViewChatBox, ETriggerEvent::Triggered, this, &AMPCharacter::ViewChatBoxButtonPressed);
				EnhancedInputComponent->BindAction(InputActions->InputWeaponWheel, ETriggerEvent::Triggered, this, &AMPCharacter::WeaponWheelButtonPressed);
				EnhancedInputComponent->BindAction(InputActions->InputWeaponWheel, ETriggerEvent::Completed, this, &AMPCharacter::WeaponWheelButtonReleased);
			}
		}
	}
}
#pragma endregion

#pragma endregion

#pragma region Initialization
void AMPCharacter::PollInit()
{
	// Polls for any classes not existing during the 1st couple of frames
	if (MPPlayerState == nullptr)
	{
		MPPlayerState = GetPlayerState<AMPPlayerState>();
		if (MPPlayerState)
		{
			MPPlayerState->AddToScore(0.f);
			MPPlayerState->AddToDefeat(0);
			SetTeamColor(MPPlayerState->GetTeam());

			AMPGameState* MPGameState = Cast<AMPGameState>(UGameplayStatics::GetGameState(this));
			if (MPGameState && MPGameState->TopScoringPlayers.Contains(MPPlayerState))
			{
				MulticastGainedTheLead();
			}
		}
	}
	if (MPPlayerController == nullptr)
	{
		MPPlayerController = MPPlayerController == nullptr ? Cast<AMPPlayerController>(Controller) : MPPlayerController;
		if (MPPlayerController)
		{
			SpawnDefaultWeapon();
			UpdateHUDAmmo();
			UpdateHUDHealth();
			UpdateHUDShield();
		}
	}
}

#pragma region Physics Assets
void AMPCharacter::HitPhysAssetConstruction()
{
	if (GetMesh() == nullptr)
	{
		return;
	}

	for (auto x : GetMesh()->GetPhysicsAsset()->SkeletalBodySetups)
	{
		auto BName = x->BoneName;
		auto BoneWorldTransform = GetMesh()->GetBoneTransform(GetMesh()->GetBoneIndex(BName));
		for (auto y : x->AggGeom.SphylElems)
		{
			auto LocTransform = y.GetTransform();
			auto WorldTransform = LocTransform * BoneWorldTransform;

			FPhysAssetInformation assetInfo;
			assetInfo.CollisionType = EPhysAssetCollision::EPAC_Sphere;
			assetInfo.BoneName = BName;
			assetInfo.HalfHeight = y.Length / 2 + y.Radius;
			assetInfo.Radius = y.Radius;
			assetInfo.BoneLocalTransform = LocTransform;
			assetInfo.BoneWorldTransform = WorldTransform;
			PhysAssetInfo.Add(assetInfo);
		}
		for (auto y : x->AggGeom.BoxElems)
		{
			auto LocTransform = y.GetTransform();
			auto WorldTransform = LocTransform * BoneWorldTransform;

			FPhysAssetInformation assetInfo;
			assetInfo.CollisionType = EPhysAssetCollision::EPAC_Box;
			assetInfo.BoneName = BName;
			assetInfo.Extent = FVector(y.X, y.Y, y.Z);
			assetInfo.BoneLocalTransform = LocTransform;
			assetInfo.BoneWorldTransform = WorldTransform;
			PhysAssetInfo.Add(assetInfo);
		}
	}

	for (int i = 0; i < PhysAssetInfo.Num(); i++)
	{
		SetupHitPhysAsset(PhysAssetInfo[i]);
	}
}

void AMPCharacter::SetupHitPhysAsset(FPhysAssetInformation physicsAssetInfo)
{
	switch (physicsAssetInfo.CollisionType)
	{
	case EPhysAssetCollision::EPAC_Sphere:
		UCapsuleComponent* HitCapsule;
		HitCapsule = NewObject<UCapsuleComponent>(this, UCapsuleComponent::StaticClass(), physicsAssetInfo.BoneName, RF_Transient);
		HitCapsule->SetupAttachment(GetMesh(), physicsAssetInfo.BoneName);

		HitCapsule->SetCollisionObjectType(ECC_HitBox);
		HitCapsule->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		HitCapsule->SetCollisionResponseToChannel(ECC_HitBox, ECollisionResponse::ECR_Block);
		HitCapsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		HitCapsule->SetWorldTransform(physicsAssetInfo.BoneWorldTransform);
		HitCapsule->SetCapsuleHalfHeight(physicsAssetInfo.HalfHeight);
		HitCapsule->SetCapsuleRadius(physicsAssetInfo.Radius);
		HitCapsule->RegisterComponent();

		hitCapsuleBones.Add(HitCapsule);
		HitCollisionCapsules.Add(physicsAssetInfo.BoneName, HitCapsule);
		break;
	case EPhysAssetCollision::EPAC_Box:
		UBoxComponent* HitBox;
		HitBox = NewObject<UBoxComponent>(this, UBoxComponent::StaticClass(), physicsAssetInfo.BoneName, RF_Transient);
		HitBox->SetupAttachment(GetMesh(), physicsAssetInfo.BoneName);

		HitBox->SetCollisionObjectType(ECC_HitBox);
		HitBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		HitBox->SetCollisionResponseToChannel(ECC_HitBox, ECollisionResponse::ECR_Block);
		HitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		HitBox->SetWorldTransform(physicsAssetInfo.BoneWorldTransform);
		HitBox->SetBoxExtent(physicsAssetInfo.Extent);
		HitBox->RegisterComponent();

		hitBoxBones.Add(HitBox);
		HitCollisionBoxes.Add(physicsAssetInfo.BoneName, HitBox);
		break;
	default:
		break;
	}
}

void AMPCharacter::DrawHitPhysAsset()
{
	if (!bDrawPhysAssets)
	{
		return;
	}

	for (auto x : GetMesh()->GetPhysicsAsset()->SkeletalBodySetups)
	{
		auto BName = x->BoneName;
		auto BoneWorldTransform = GetMesh()->GetBoneTransform(GetMesh()->GetBoneIndex(BName));
		for (auto y : x->AggGeom.SphylElems)
		{
			auto LocTransform = y.GetTransform();
			auto WorldTransform = LocTransform * BoneWorldTransform;
			DrawDebugCapsule(
				GetWorld(),
				WorldTransform.GetLocation(),
				y.Length / 2 + y.Radius,
				y.Radius, WorldTransform.GetRotation(),
				FColor::Red
			);
		}
	}
}
#pragma endregion

#pragma endregion

#pragma region Surfaces
UPARAM(DisplayName = "Physical Surface")
EPhysicalSurface AMPCharacter::GetSurfaceType()
{
	FHitResult HitResult;
	const FVector Start{ GetActorLocation() };
	const FVector End{ Start + FVector(0.f, 0.f, -400.f) };
	FCollisionQueryParams QueryParams;
	QueryParams.bReturnPhysicalMaterial = true;
	QueryParams.AddIgnoredActor(this);

	// Since our players ignore the Visibility channel, we have to use another channel
	//		such as the ECC_SkeletalMesh
	GetWorld()->LineTraceSingleByChannel(
		HitResult,
		Start,
		End,
		ECollisionChannel::ECC_Visibility,
		QueryParams);
	return UPhysicalMaterial::DetermineSurfaceType(HitResult.PhysMaterial.Get());
}
#pragma endregion

#pragma region Input
#pragma region Mouse and Stick
void AMPCharacter::Move(const FInputActionValue& Value)
{
	if (bDisableGameplay)
	{
		return;
	}

	if (Controller != nullptr)
	{
		const FVector2D MoveValue = Value.Get<FVector2D>();
		const FRotator MovementRotation(0, Controller->GetControlRotation().Yaw, 0);
		// Forward/Backward direction
		if (MoveValue.Y != 0.f)
		{
			const FVector Direction = MovementRotation.RotateVector(FVector::ForwardVector);
			AddMovementInput(Direction, MoveValue.Y);
		}
		// Right/Left direction
		if (MoveValue.X != 0.f)
		{
			const FVector Direction = MovementRotation.RotateVector(FVector::RightVector);
			AddMovementInput(Direction, MoveValue.X);
		}
	}
}

void AMPCharacter::Look(const FInputActionValue& Value)
{
	if (bDisableGameplay)
	{
		return;
	}

	if (Controller != nullptr)
	{
		const FVector2D LookValue = Value.Get<FVector2D>();
		if (LookValue.X != 0.f)
		{
			AddControllerYawInput(LookValue.X);
		}
		if (LookValue.Y != 0.f)
		{
			AddControllerPitchInput(LookValue.Y);
		}
	}
}
#pragma endregion

#pragma region Button Presses
#pragma region Jump
void AMPCharacter::Jump()
{
	if (bDisableGameplay)
	{
		return;
	}

	if (bIsCrouched)
	{
		UnCrouch();
	}
	else
	{
		Super::Jump();
	}
}
#pragma endregion

#pragma region Equip
void AMPCharacter::EquipButtonPressed()
{
	if (bDisableGameplay)
	{
		return;
	}

	if (Combat)
	{
		if (Combat->CombatState == ECombatState::ECS_Unoccupied)
		{
			ServerEquipButtonPressed();
		}

		bool bSwap = Combat->ShouldSwapWeapons() &&
			!HasAuthority() &&
			Combat->CombatState == ECombatState::ECS_Unoccupied &&
			OverlappingWeapon == nullptr;
		if (bSwap)
		{
			PlaySwapMontage();
			Combat->CombatState = ECombatState::ECS_SwappingWeapons;
			bFinishedSwapping = false;
		}
	}
}

#pragma region Server
void AMPCharacter::ServerEquipButtonPressed_Implementation()
{
	if (Combat)
	{
		// allows us to swap weapons using the Equip button
		if (OverlappingWeapon)
		{
			Combat->EquipWeapon(OverlappingWeapon);
		}
		else if (Combat->ShouldSwapWeapons())
		{
			Combat->SwapWeapons();
		}
		else if (Combat->ShouldReequipWeapon())
		{
			Combat->EquipWeapon(Combat->EquippedWeapon);
		}
	}
}
#pragma endregion

#pragma endregion

#pragma region Unequip
void AMPCharacter::UnequipButtonPressed()
{
	if (bDisableGameplay)
	{
		return;
	}

	if (Combat)
	{
		if (Combat->CombatState == ECombatState::ECS_Unoccupied)
		{
			ServerUnequipButtonPressed();
		}

		bool bUnequip = Combat->IsWeaponEquipped() &&
			!HasAuthority() &&
			Combat->CombatState == ECombatState::ECS_Unoccupied &&
			Combat->EquippedWeapon;
		if (bUnequip)
		{
			if (Combat->EquippedWeapon->GetUnequippedWeaponSocket() == EWeaponAttachmentSocket::EWAS_BackSpine)
			{
				PlayEquipMontage(FName("UnequipBackSpine"));
			}
			else if (Combat->EquippedWeapon->GetUnequippedWeaponSocket() == EWeaponAttachmentSocket::EWAS_Hips)
			{
				PlayEquipMontage(FName("UnequipHips"));
			}

			Combat->CombatState = ECombatState::ECS_Equipping;
			bFinishedEquipping = false;
		}
	}
}

#pragma region Server
void AMPCharacter::ServerUnequipButtonPressed_Implementation()
{
	if (Combat)
	{
		if (Combat->IsWeaponEquipped())
		{
			Combat->UnequipWeapon();
		}
	}
}
#pragma endregion

#pragma endregion

#pragma region Crouch
void AMPCharacter::CrouchButtonPressed()
{
	if (bDisableGameplay)
	{
		return;
	}

	if (bIsCrouched)
	{
		UnCrouch();
	}
	else
	{
		Crouch();
	}
}
#pragma endregion

#pragma region Fire
void AMPCharacter::FireButtonPressed()
{
	if (bDisableGameplay)
	{
		return;
	}

	if (Combat)
	{
		Combat->FireButtonPressed(true);
	}
}

void AMPCharacter::FireButtonReleased()
{
	if (bDisableGameplay)
	{
		return;
	}

	if (Combat)
	{
		Combat->FireButtonPressed(false);
	}
}
#pragma endregion

#pragma region Reload
void AMPCharacter::ReloadButtonPressed()
{
	if (bDisableGameplay)
	{
		return;
	}

	if (Combat)
	{
		Combat->Reload();
	}
}
#pragma endregion

#pragma region Aim
void AMPCharacter::AimButtonPressed()
{
	if (bDisableGameplay)
	{
		return;
	}

	if (Combat)
	{
		Combat->SetAiming(true);
	}
}

void AMPCharacter::AimButtonReleased()
{
	if (bDisableGameplay)
	{
		return;
	}

	if (Combat)
	{
		Combat->SetAiming(false);
	}
}
#pragma endregion

#pragma region Throw
void AMPCharacter::ThrowButtonPressed()
{
	if (Combat)
	{
		Combat->ShowPredictPath(true);
	}
}

void AMPCharacter::ThrowButtonReleased()
{
	if (Combat)
	{
		Combat->ShowPredictPath(false);
		Combat->Throw();
	}
}
#pragma endregion

#pragma region View Chat Box
void AMPCharacter::ViewChatBoxButtonPressed()
{
	if (MPPlayerController == nullptr)
	{
		return;
	}

	MPPlayerController->ToggleChatBox();
}
#pragma endregion

#pragma region Quit
void AMPCharacter::QuitButtonPressed()
{
	if (bDisableGameplay || MPPlayerController == nullptr)
	{
		return;
	}

	MPPlayerController->ShowReturnToMainMenu();
}
#pragma endregion

#pragma region Weapon Wheel
void AMPCharacter::WeaponWheelButtonPressed()
{
	if (bDisableGameplay || MPPlayerController == nullptr)
	{
		return;
	}

	MPPlayerController->SetHUDWeaponWheel(true);
}

void AMPCharacter::WeaponWheelButtonReleased()
{
	if (bDisableGameplay || MPPlayerController == nullptr)
	{
		return;
	}

	MPPlayerController->SetHUDWeaponWheel(false);
}
#pragma endregion

#pragma endregion

#pragma endregion

#pragma region Play Montages
void AMPCharacter::PlayEquipMontage(const FName& SectionName)
{
	if (Combat == nullptr || Combat->EquippedWeapon == nullptr)
	{
		return;
	}

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && EquipMontage)
	{
		AnimInstance->Montage_Play(EquipMontage);

		AnimInstance->Montage_JumpToSection(SectionName);
	}
}

void AMPCharacter::PlayFireMontage(bool bIsAiming)
{
	if (Combat == nullptr || Combat->EquippedWeapon == nullptr)
	{
		return;
	}

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	bool bMelee = AnimInstance &&
		Combat->EquippedWeapon->GetWeaponType() == EWeaponType::EWT_Melee &&
		Combat->EquippedWeapon->GetFireWeaponMontage() &&
		Combat->EquippedWeapon->GetFireWeaponMontageSections().Num() >= 0;
	bool bRanged = AnimInstance &&
		Combat->EquippedWeapon->GetFireWeaponMontage();
	if (bMelee)
	{
		AnimInstance->Montage_Play(Combat->EquippedWeapon->GetFireWeaponMontage());

		FName SectionName;
		const int32 MaxSectionIndex = Combat->EquippedWeapon->GetFireWeaponMontageSections().Num() - 1;
		const int32 Selection = FMath::RandRange(0, MaxSectionIndex);
		SectionName = Combat->EquippedWeapon->GetFireWeaponMontageSections()[Selection];
		AnimInstance->Montage_JumpToSection(SectionName);
	}
	if (bRanged)
	{
		AnimInstance->Montage_Play(Combat->EquippedWeapon->GetFireWeaponMontage());

		FName SectionName;
		SectionName = bIsAiming ? FName("RifleAim") : FName("RifleHip");
		AnimInstance->Montage_JumpToSection(SectionName);
	}
}

void AMPCharacter::PlayReloadMontage()
{
	if (Combat == nullptr || Combat->EquippedWeapon == nullptr)
	{
		return;
	}

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && Combat->EquippedWeapon->GetReloadWeaponMontage())
	{
		AnimInstance->Montage_Play(Combat->EquippedWeapon->GetReloadWeaponMontage());
	}
}

void AMPCharacter::PlaySwapMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && SwapMontage)
	{
		AnimInstance->Montage_Play(SwapMontage);
	}
}

void AMPCharacter::PlayThrowMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && ThrowMontage)
	{
		AnimInstance->Montage_Play(ThrowMontage);
	}
}

void AMPCharacter::PlayHitReactMontage(const FName& SectionName)
{
	if (Combat == nullptr || Combat->EquippedWeapon == nullptr)
	{
		return;
	}

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && HitReactMontage)
	{
		AnimInstance->Montage_Play(HitReactMontage);

		AnimInstance->Montage_JumpToSection(SectionName);
	}
}

void AMPCharacter::PlayEliminateMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && EliminateMontage)
	{
		AnimInstance->Montage_Play(EliminateMontage);
	}
}
#pragma endregion

#pragma region Animation
void AMPCharacter::AimOffset(float DeltaTime)
{
	if (Combat && Combat->EquippedWeapon == nullptr)
	{ 
		return;
	}

	float Spd = CalculateSpeed();
	bool bIsInAir = GetCharacterMovement()->IsFalling();

	// Only matters when we're standing still
	if (Spd == 0.f && !bIsInAir)
	{
		bRotateRootBone = true;
		FRotator CurrAimRot = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		FRotator DeltaAimRot = UKismetMathLibrary::NormalizedDeltaRotator(CurrAimRot, StartAimRotation);
		AO_Yaw = DeltaAimRot.Yaw;
		if (TurningInPlace == ETurningInPlace::ETIP_NotTurning)
		{
			InterpAO_Yaw = AO_Yaw;
		}

		bUseControllerRotationYaw = true;
		TurnInPlace(DeltaTime);
	}
	if (Spd > 0.f || bIsInAir)
	{
		bRotateRootBone = false;
		StartAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		AO_Yaw = 0.f;
		bUseControllerRotationYaw = true;
		TurningInPlace = ETurningInPlace::ETIP_NotTurning;
	}

	CalculateAO_Pitch();
}

void AMPCharacter::CalculateAO_Pitch()
{
	AO_Pitch = GetBaseAimRotation().Pitch;
	// Remaps Pitch from [270, 360) to [-90, 0)
	if (AO_Pitch > 90.f && !IsLocallyControlled())
	{
		FVector2D InRange(270.f, 360.f);
		FVector2D OutRange(-90.f, 0.f);
		AO_Pitch = FMath::GetMappedRangeValueClamped(InRange, OutRange, AO_Pitch);
	}
}

float AMPCharacter::CalculateSpeed()
{
	FVector Velocity = GetVelocity();
	Velocity.Z = 0.f;
	return Velocity.Size();
}

void AMPCharacter::TurnInPlace(float DeltaTime)
{
	if (AO_Yaw > 90.f)
	{
		TurningInPlace = ETurningInPlace::ETIP_Right;
	}
	else if (AO_Yaw < -90.f)
	{
		TurningInPlace = ETurningInPlace::ETIP_Left;
	}

	if (TurningInPlace != ETurningInPlace::ETIP_NotTurning)
	{
		InterpAO_Yaw = FMath::FInterpTo(InterpAO_Yaw, 0.f, DeltaTime, 4.f);
		AO_Yaw = InterpAO_Yaw;
		if (FMath::Abs(AO_Yaw) < 15.f)
		{
			TurningInPlace = ETurningInPlace::ETIP_NotTurning;
			StartAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		}
	}
}

void AMPCharacter::SimProxiesTurn()
{
	if (Combat == nullptr || Combat->EquippedWeapon == nullptr)
	{
		return;
	}

	bRotateRootBone = false;
	float Spd = CalculateSpeed();

	if (Spd > 0.f)
	{
		TurningInPlace = ETurningInPlace::ETIP_NotTurning;
		return;
	}

	ProxyRotationPrevFrame = ProxyRotation;
	ProxyRotation = GetActorRotation();
	ProxyYaw = UKismetMathLibrary::NormalizedDeltaRotator(ProxyRotation, ProxyRotationPrevFrame).Yaw;

	if (FMath::Abs(ProxyYaw) > TurnThreshold)
	{
		if (ProxyYaw > TurnThreshold)
		{
			TurningInPlace = ETurningInPlace::ETIP_Right;
		}
		else if (ProxyYaw < -TurnThreshold)
		{
			TurningInPlace = ETurningInPlace::ETIP_Left;
		}
		else
		{
			TurningInPlace = ETurningInPlace::ETIP_NotTurning;
		}

		return;
	}

	TurningInPlace = ETurningInPlace::ETIP_NotTurning;
}

void AMPCharacter::RotateInPlace(float DeltaTime)
{
	if (bDisableGameplay)
	{
		bUseControllerRotationYaw = false;
		TurningInPlace = ETurningInPlace::ETIP_NotTurning;
		return;
	}

	if (GetLocalRole() > ENetRole::ROLE_SimulatedProxy && IsLocallyControlled())
	{
		AimOffset(DeltaTime);
	}
	else
	{
		TimeSincePrevMovementReplication += DeltaTime;
		if (TimeSincePrevMovementReplication > 0.25f)
		{
			OnRep_ReplicatedMovement();
		}

		CalculateAO_Pitch();
	}
}

void AMPCharacter::HideCameraIfCharacterIsClose()
{
	if (!IsLocallyControlled())
	{
		return;
	}

	if ((FollowCamera->GetComponentLocation() - GetActorLocation()).Size() < CameraThreshold)
	{
		GetMesh()->SetVisibility(false);

		if (Combat && Combat->EquippedWeapon && Combat->EquippedWeapon->GetItemMesh())
		{
			Combat->EquippedWeapon->GetItemMesh()->bOwnerNoSee = true;
		}
		if (Combat && Combat->EquippedSecondaryWeapon && Combat->EquippedSecondaryWeapon->GetItemMesh())
		{
			Combat->EquippedSecondaryWeapon->GetItemMesh()->bOwnerNoSee = true;
		}
	}
	else
	{
		GetMesh()->SetVisibility(true);

		if (Combat && Combat->EquippedWeapon && Combat->EquippedWeapon->GetItemMesh())
		{
			Combat->EquippedWeapon->GetItemMesh()->bOwnerNoSee = false;
		}
		if (Combat && Combat->EquippedSecondaryWeapon && Combat->EquippedSecondaryWeapon->GetItemMesh())
		{
			Combat->EquippedSecondaryWeapon->GetItemMesh()->bOwnerNoSee = false;
		}
	}
}
#pragma endregion

#pragma region Equipped Weapon
#pragma region Drop
void AMPCharacter::DropOrDestroyWeapon(AWeapon* Weapon)
{
	if (Weapon == nullptr)
	{
		return;
	}

	if (Weapon->bDestroyWeapon)
	{
		Weapon->Destroy();
	}
	else
	{
		Weapon->Dropped();
	}
}

void AMPCharacter::DropOrDestroyWeapons()
{
	if (Combat)
	{
		if (Combat->EquippedWeapon)
		{
			DropOrDestroyWeapon(Combat->EquippedWeapon);
		}
		if (Combat->EquippedSecondaryWeapon)
		{
			DropOrDestroyWeapon(Combat->EquippedSecondaryWeapon);
		}
	}
}
#pragma endregion

#pragma region Combat
FVector AMPCharacter::GetHitTarget() const
{
	if (Combat == nullptr)
	{
		return FVector();
	}

	return Combat->HitTarget;
}
#pragma endregion

#pragma region Getters & Setters
void AMPCharacter::SetOverlappingWeapon(AWeapon* Weapon)
{
	if (OverlappingWeapon)
	{
		OverlappingWeapon->ShowPickupWidget(false);
	}

	OverlappingWeapon = Weapon;

	if (IsLocallyControlled())
	{
		if (OverlappingWeapon)
		{
			OverlappingWeapon->ShowPickupWidget(true);
		}
	}
}

AWeapon* AMPCharacter::GetEquippedWeapon()
{
	if (Combat == nullptr)
	{
		return nullptr;
	}

	return Combat->EquippedWeapon;
}
#pragma endregion

#pragma region OnRep
void AMPCharacter::OnRep_OverlappingWeapon(AWeapon* PrevWeapon)
{
	if (OverlappingWeapon)
	{
		OverlappingWeapon->ShowPickupWidget(true);
	}

	if (PrevWeapon)
	{
		PrevWeapon->ShowPickupWidget(false);
	}
}
#pragma endregion

#pragma region Checkers
bool AMPCharacter::IsWeaponEquipped()
{
	return (Combat && Combat->IsWeaponEquipped());
}

bool AMPCharacter::IsWeaponUnequipped()
{
	return (Combat && Combat->IsWeaponUnequipped());
}

bool AMPCharacter::IsAiming()
{
	return (Combat && Combat->bAiming);
}

bool AMPCharacter::IsLocallyReloading()
{
	if (Combat == nullptr)
	{
		return false;
	}

	return Combat->bLocallyReloading;
}
#pragma endregion

#pragma endregion

#pragma region States
ECombatState AMPCharacter::GetCombatState() const
{
	if (Combat == nullptr)
	{
		return ECombatState::ECS_MAX;
	}

	return Combat->CombatState;
}

ECharacterCombatState AMPCharacter::GetCharacterCombatState() const
{
	if (Combat == nullptr)
	{
		return ECharacterCombatState::ECCS_MAX;
	}

	return Combat->CharacterCombatState;
}
#pragma endregion

#pragma region Character Status & Stats
#pragma region Health
void AMPCharacter::ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatorController, AActor* DamageCauser)
{
	MPShooterGameMode = MPShooterGameMode == nullptr ? GetWorld()->GetAuthGameMode<AMPShooterGameMode>() : MPShooterGameMode;
	if (bEliminated || MPShooterGameMode == nullptr)
	{
		return;
	}

	Damage = MPShooterGameMode->CalculateDamage(InstigatorController, Controller, Damage);

	float DamageToHealth = Damage;
	if (Shield > 0.f)
	{
		if (Shield >= Damage)
		{
			Shield = FMath::Clamp(Shield - Damage, 0.f, MaxShield);
			DamageToHealth = 0.f;
		}
		else
		{
			Shield = 0.f;
			DamageToHealth = FMath::Clamp(DamageToHealth - Shield, 0.f, Damage);
		}
	}

	Health = FMath::Clamp(Health - DamageToHealth, 0.f, MaxHealth);

	UpdateHUDHealth();
	UpdateHUDShield();
	DirectionalHitReact(FVector(0.f, 0.f, 0.f));

	if (Health == 0.f)
	{
		if (MPShooterGameMode)
		{
			MPPlayerController = MPPlayerController == nullptr ? Cast<AMPPlayerController>(Controller) : MPPlayerController;
			AMPPlayerController* AttackerController = Cast<AMPPlayerController>(InstigatorController);
			MPShooterGameMode->CharacterEliminated(this, MPPlayerController, AttackerController);
		}
	}
}

#pragma region OnRep
void AMPCharacter::OnRep_Health(float LastHealth)
{
	UpdateHUDHealth();
	if (Health < LastHealth)
	{
		DirectionalHitReact(FVector(0.f, 0.f, 0.f));
	}
}
#pragma endregion

#pragma region UI
void AMPCharacter::UpdateHUDHealth()
{
	MPPlayerController = MPPlayerController == nullptr ? Cast<AMPPlayerController>(Controller) : MPPlayerController;
	if (MPPlayerController)
	{
		MPPlayerController->SetHUDHealth(Health, MaxHealth);
	}
}
#pragma endregion

#pragma region Animation
void AMPCharacter::DirectionalHitReact(const FVector& ImpactPoint)
{
	const FVector Forward = GetActorForwardVector();
	const FVector ImpactLowered(ImpactPoint.X, ImpactPoint.Y, GetActorLocation().Z);
	const FVector ToHit = (ImpactLowered - GetActorLocation()).GetSafeNormal();

	const double CosTheta = FVector::DotProduct(Forward, ToHit);
	double Theta = FMath::Acos(CosTheta);
	Theta = FMath::RadiansToDegrees(Theta);

	const FVector CrossProduct = FVector::CrossProduct(Forward, ToHit);
	if (CrossProduct.Z < 0)
	{
		Theta *= -1.f;
	}

	FName SectionName("FromBack");

	if (Theta >= -45.f && Theta < 45.f)
	{
		SectionName = FName("FromFront");
	}
	else if (Theta >= -135.f && Theta < -45.f)
	{
		SectionName = FName("FromLeft");
	}
	else if (Theta >= 45.f && Theta < 135.f)
	{
		SectionName = FName("FromRight");
	}

	PlayHitReactMontage(SectionName);
}
#pragma endregion

#pragma region Elimination
void AMPCharacter::Eliminated(bool bPlayerLeftGame)
{
	DropOrDestroyWeapons();

	MulticastEliminated(bPlayerLeftGame);
}

#pragma region Multicast
void AMPCharacter::MulticastEliminated_Implementation(bool bPlayerLeftGame)
{
	bLeftGame = bPlayerLeftGame;

	if (MPPlayerController)
	{
		MPPlayerController->SetHUDWeaponAmmo(0);
	}

	// Hide sniper scope (if necessary)
	bool bHideSniperScope = MPPlayerController &&
		IsLocallyControlled() &&
		Combat &&
		Combat->bAiming &&
		Combat->EquippedWeapon &&
		Combat->EquippedWeapon->bUseSniperZoomedOverlay;
	if (bHideSniperScope)
	{
		MPPlayerController->SetHUDSniperScope(false);
	}

	// Hide weapon wheel (if necessary)
	bool bHideWeaponWheel = MPPlayerController &&
		IsLocallyControlled();
	if (bHideWeaponWheel)
	{
		MPPlayerController->SetHUDWeaponWheel(false);
	}

	bEliminated = true;
	PlayEliminateMontage();

	// Sets Dissolve material (if it exists)
	if (DissolveMaterialInstance)
	{
		DynamicDissolveMaterialInstance = UMaterialInstanceDynamic::Create(DissolveMaterialInstance, this);
		GetMesh()->SetMaterial(0, DynamicDissolveMaterialInstance);
	}

	StartDissolve();

	// Disables character movement & collision
	bDisableGameplay = true;
	GetCharacterMovement()->DisableMovement();

	if (Combat)
	{
		Combat->FireButtonPressed(false);
	}

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	AttachedThrowable->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Spawn eliminate FX (if necessary)
	if (EliminateFX)
	{
		FVector ElimSpawnPoint(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 200.f);
		EliminateComponent = UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			EliminateFX,
			ElimSpawnPoint,
			GetActorRotation()
		);
	}

	if (EliminateSFX)
	{
		UGameplayStatics::SpawnSoundAtLocation(
			this,
			EliminateSFX,
			GetActorLocation()
		);
	}

	if (CrownComponent)
	{
		CrownComponent->DestroyComponent();
	}

	GetWorldTimerManager().SetTimer(
		EliminateTimer,
		this,
		&AMPCharacter::EliminateTimerFinished,
		EliminateDelay
	);
}
#pragma endregion

#pragma region Elimination Effects
void AMPCharacter::EliminateTimerFinished()
{
	MPShooterGameMode = MPShooterGameMode == nullptr ? GetWorld()->GetAuthGameMode<AMPShooterGameMode>() : MPShooterGameMode;
	if (MPShooterGameMode && !bLeftGame)
	{
		MPShooterGameMode->RequestRespawn(this, Controller);
	}
	if (bLeftGame && IsLocallyControlled())
	{
		OnLeftGame.Broadcast();
	}
}

void AMPCharacter::StartDissolve()
{
	DissolveTrack.BindDynamic(this, &AMPCharacter::UpdateDissolveMaterial);
	if (DissolveTimeline && DissolveCurve)
	{
		DissolveTimeline->AddInterpFloat(DissolveCurve, DissolveTrack);
		DissolveTimeline->Play();
	}
}

void AMPCharacter::UpdateDissolveMaterial(float DissolveValue)
{
	if (DynamicDissolveMaterialInstance)
	{
		DynamicDissolveMaterialInstance->SetScalarParameterValue(TEXT("Dissolve"), DissolveValue);
	}
}
#pragma endregion

#pragma endregion

#pragma endregion

#pragma region Shield
#pragma region OnRep
void AMPCharacter::OnRep_Shield(float LastShield)
{
	UpdateHUDShield();
	if (Shield < LastShield)
	{
		DirectionalHitReact(FVector(0.f, 0.f, 0.f));
	}
}
#pragma endregion

#pragma region UI
void AMPCharacter::UpdateHUDShield()
{
	MPPlayerController = MPPlayerController == nullptr ? Cast<AMPPlayerController>(Controller) : MPPlayerController;
	if (MPPlayerController)
	{
		MPPlayerController->SetHUDShield(Shield, MaxShield);
	}
}
#pragma endregion

#pragma endregion

#pragma region Ammo
void AMPCharacter::SpawnDefaultWeapon()
{
	// stops us from spawning a weapon in say LobbyGameMode
	MPShooterGameMode = MPShooterGameMode == nullptr ? Cast<AMPShooterGameMode>(UGameplayStatics::GetGameMode(this)) : MPShooterGameMode;
	UWorld* World = GetWorld();
	bool bIsValid = MPShooterGameMode &&
		World &&
		!bEliminated &&
		bSpawnWithDefaultWeapon &&
		DefaultWeaponClass;
	if (bIsValid)
	{
		AWeapon* StartingWeapon = World->SpawnActor<AWeapon>(DefaultWeaponClass);
		StartingWeapon->bDestroyWeapon = true;
		Combat->EquipWeapon(StartingWeapon);
	}
}

#pragma region UI
void AMPCharacter::UpdateHUDAmmo()
{
	MPPlayerController = MPPlayerController == nullptr ? Cast<AMPPlayerController>(Controller) : MPPlayerController;
	if (MPPlayerController && Combat && Combat->EquippedWeapon)
	{
		MPPlayerController->SetHUDWeaponType(Combat->EquippedWeapon->GetWeaponType());
		MPPlayerController->SetHUDCarriedAmmo(Combat->CarriedAmmo);
		MPPlayerController->SetHUDWeaponAmmo(Combat->EquippedWeapon->GetAmmo());
	}
}
#pragma endregion

#pragma endregion

#pragma region Character Status in Match
void AMPCharacter::SetTeamColor(ETeam Team)
{
	if (GetMesh() == nullptr || TeamColors[0] == nullptr || TeamColorsDissolve[0] == nullptr)
	{
		return;
	}

	switch (Team)
	{
	case ETeam::ET_NoTeam:
		GetMesh()->SetMaterial(0, TeamColors[0]);
		DissolveMaterialInstance = TeamColorsDissolve[0];
		break;
	case ETeam::ET_BlueTeam:
		GetMesh()->SetMaterial(0, TeamColors[1]);
		DissolveMaterialInstance = TeamColorsDissolve[1];
		break;
	case ETeam::ET_RedTeam:
		GetMesh()->SetMaterial(0, TeamColors[2]);
		DissolveMaterialInstance = TeamColorsDissolve[2];
		break;
	}
}

#pragma region Multicast
void AMPCharacter::MulticastGainedTheLead_Implementation()
{
	if (CrownSystem == nullptr)
	{
		return;
	}

	if (CrownComponent == nullptr)
	{
		// TODO:
		// Consider replacing where we set the crown to the head socket, cause it starts to go
		// the mesh if we crouch
		CrownComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
			CrownSystem,
			GetMesh(),
			FName(),
			GetActorLocation() + FVector(0.f, 0.f, 110.f),
			GetActorRotation(),
			EAttachLocation::KeepWorldPosition,
			false
		);
	}

	if (CrownComponent)
	{
		CrownComponent->Activate();
	}
}

void AMPCharacter::MulticastLostTheLead_Implementation()
{
	if (CrownComponent)
	{
		CrownComponent->DestroyComponent();
	}
}
#pragma endregion

#pragma region Server
void AMPCharacter::ServerLeaveGame_Implementation()
{
	MPShooterGameMode = MPShooterGameMode == nullptr ? GetWorld()->GetAuthGameMode<AMPShooterGameMode>() : MPShooterGameMode;
	MPPlayerState = MPPlayerState == nullptr ? GetPlayerState<AMPPlayerState>() : MPPlayerState;
	if (MPShooterGameMode && MPPlayerState)
	{
		MPShooterGameMode->PlayerLeftGame(MPPlayerState);
	}
}
#pragma endregion

#pragma endregion

#pragma endregion
