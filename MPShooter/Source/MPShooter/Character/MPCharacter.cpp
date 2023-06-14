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
#include "MPShooter/Item/Weapon/Throwable/ThrowableWeapon.h"
#include "MPShooter/MPTypes/WeaponTypes.h"
#include "MPShooter/MPComponents/CombatComponent.h"
#include "MPShooter/MPComponents/BuffComponent.h"
#include "MPShooter/MPComponents/LagComponent.h"
#include "MPShooter/PlayerController/MPPlayerController.h"
#include "MPShooter/PlayerState/MPPlayerState.h"
#include "MPShooter/GameMode/MPShooterGameMode.h"
#include "MPShooter/GameState/MPGameState.h"
#include "MPAnimInstance.h"
#include "DrawDebugHelpers.h"

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

	/*AttachedThrowable = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Attached Throwable"));
	AttachedThrowable->SetupAttachment(GetMesh(), FName("ThrowableSocket"));
	AttachedThrowable->SetCollisionEnabled(ECollisionEnabled::NoCollision);*/

	NetUpdateFrequency = 66.f;
	MinNetUpdateFrequency = 33.f;
}

void AMPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	UpdateHUDHealth();
	UpdateHUDShield();

	if (HasAuthority())
	{
		OnTakeAnyDamage.AddDynamic(this, &AMPCharacter::ReceiveDamage);
	}

	/*if (AttachedThrowable)
	{
		AttachedThrowable->SetVisibility(false);
	}*/
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

void AMPCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AMPCharacter, OverlappingWeapon, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(AMPCharacter, OverlappingThrowableWeapon, COND_OwnerOnly);
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

			AMPGameState* MPGameState = Cast<AMPGameState>(UGameplayStatics::GetGameState(this));

			if (MPGameState && MPGameState->TopScoringPlayers.Contains(MPPlayerState))
			{
				MulticastGainedTheLead();
			}
		}
	}
}

void AMPCharacter::ServerLeaveGame_Implementation()
{
	AMPShooterGameMode* MPShooterGameMode = GetWorld()->GetAuthGameMode<AMPShooterGameMode>();		
	MPPlayerState = MPPlayerState == nullptr ? GetPlayerState<AMPPlayerState>() : MPPlayerState;
	if (MPShooterGameMode && MPPlayerState)
	{
		MPShooterGameMode->PlayerLeftGame(MPPlayerState);
	}
}

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

void AMPCharacter::ServerEquipButtonPressed_Implementation()
{
	if (Combat)
	{
		// allows us to swap weapons using the Equip button
		if (OverlappingWeapon)
		{
			Combat->EquipWeapon(OverlappingWeapon);
			// TODO:
			// Make Equip/Unequip montage
			// Jump to different section names based on where they unequip to (back, hips)
		}
		else if (Combat->ShouldSwapWeapons())
		{
			Combat->SwapWeapons();
		}

		if (OverlappingThrowableWeapon)
		{
			Combat->EquipThrowableWeapon(OverlappingThrowableWeapon);
		}
	}
}

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

void AMPCharacter::PlayFireMontage(bool bIsAiming)
{
	if (Combat == nullptr || Combat->EquippedWeapon == nullptr)
	{
		return;
	}

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	// TODO:
	// In the MeleeWeapon class, make another montage specifically for the weapon
	//		then check the class for that montage
	if (AnimInstance && FireWeaponMontage)
	{
		AnimInstance->Montage_Play(FireWeaponMontage);

		FName SectionName;
		SectionName = bIsAiming ? FName("RifleAim") : FName("RifleHip");
		AnimInstance->Montage_JumpToSection(SectionName);
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

void AMPCharacter::ThrowButtonPressed()
{
	if (Combat)
	{
		Combat->Throw();
	}
}

void AMPCharacter::ThrowButtonReleased()
{
}

void AMPCharacter::ViewChatBoxButtonPressed()
{
	if (MPPlayerController == nullptr)
	{
		return;
	}

	MPPlayerController->ToggleChatBox();
}

void AMPCharacter::QuitButtonPressed()
{
	if (bDisableGameplay || MPPlayerController == nullptr)
	{
		return;
	}

	MPPlayerController->ShowReturnToMainMenu();
}

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

bool AMPCharacter::IsLocallyReloading()
{
	if (Combat == nullptr)
	{
		return false;
	}

	return Combat->bLocallyReloading;
}

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

bool AMPCharacter::IsWeaponEquipped()
{
	return (Combat && Combat->EquippedWeapon);
}

AWeapon* AMPCharacter::GetEquippedWeapon()
{
	if (Combat == nullptr)
	{
		return nullptr;
	}

	return Combat->EquippedWeapon;
}

bool AMPCharacter::IsAiming()
{
	return (Combat && Combat->bAiming);
}

void AMPCharacter::SetOverlappingThrowableWeapon(AThrowableWeapon* ThrowableWeapon)
{
	if (OverlappingThrowableWeapon)
	{
		OverlappingThrowableWeapon->ShowPickupWidget(false);
		//OverlappingThrowableWeapon->GetItemMesh()->SetVisibility(false);
	}

	OverlappingThrowableWeapon = ThrowableWeapon;

	if (IsLocallyControlled())
	{
		if (OverlappingThrowableWeapon)
		{
			OverlappingThrowableWeapon->ShowPickupWidget(true);
			//OverlappingThrowableWeapon->GetItemMesh()->SetVisibility(false);
		}
	}
}

void AMPCharacter::OnRep_OverlappingThrowableWeapon(AThrowableWeapon* PrevThrowableWeapon)
{
	if (OverlappingThrowableWeapon)
	{
		OverlappingThrowableWeapon->ShowPickupWidget(true);
		//OverlappingThrowableWeapon->GetItemMesh()->SetVisibility(false);
	}

	if (PrevThrowableWeapon)
	{
		PrevThrowableWeapon->ShowPickupWidget(false);
		//PrevThrowableWeapon->GetItemMesh()->SetVisibility(false);
	}
}

bool AMPCharacter::IsThrowableWeaponEquipped()
{
	return (Combat && Combat->EquippedThrowableWeapon);
}

AThrowableWeapon* AMPCharacter::GetEquippedThrowableWeapon()
{
	if (Combat == nullptr)
	{
		return nullptr;
	}

	return Combat->EquippedThrowableWeapon;
}

ECombatState AMPCharacter::GetCombatState() const
{
	if (Combat == nullptr)
	{
		return ECombatState::ECS_MAX;
	}

	return Combat->CombatState;
}

FVector AMPCharacter::GetHitTarget() const
{
	if (Combat == nullptr)
	{
		return FVector();
	}

	return Combat->HitTarget;
}

void AMPCharacter::PlayHitReactMontage()
{
	if (Combat == nullptr || Combat->EquippedWeapon == nullptr)
	{
		return;
	}

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && HitReactMontage)
	{
		AnimInstance->Montage_Play(HitReactMontage);

		FName SectionName("FromFront");
		AnimInstance->Montage_JumpToSection(SectionName);
	}
}

void AMPCharacter::ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatorController, AActor* DamageCauser)
{
	if (bEliminated)
	{
		return;
	}

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
	PlayHitReactMontage();

	if (Health == 0.f)
	{
		AMPShooterGameMode* MPShooterGameMode = GetWorld()->GetAuthGameMode<AMPShooterGameMode>();
		if (MPShooterGameMode)
		{
			MPPlayerController = MPPlayerController == nullptr ? Cast<AMPPlayerController>(Controller) : MPPlayerController;
			AMPPlayerController* AttackerController = Cast<AMPPlayerController>(InstigatorController);
			MPShooterGameMode->CharacterEliminated(this, MPPlayerController, AttackerController);
		}
	}
}

void AMPCharacter::OnRep_Health(float LastHealth)
{
	UpdateHUDHealth();
	if (Health < LastHealth)
	{
		PlayHitReactMontage();
	}
}

void AMPCharacter::UpdateHUDHealth()
{
	MPPlayerController = MPPlayerController == nullptr ? Cast<AMPPlayerController>(Controller) : MPPlayerController;
	if (MPPlayerController)
	{
		MPPlayerController->SetHUDHealth(Health, MaxHealth);
	}
}

void AMPCharacter::Eliminated(bool bPlayerLeftGame)
{
	DropOrDestroyWeapons();

	MulticastEliminated(bPlayerLeftGame);
}


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

void AMPCharacter::EliminateTimerFinished()
{
	AMPShooterGameMode* MPShooterGameMode = GetWorld()->GetAuthGameMode<AMPShooterGameMode>();	
	if (MPShooterGameMode && !bLeftGame)
	{
		MPShooterGameMode->RequestRespawn(this, Controller);
	}
	if (bLeftGame && IsLocallyControlled())
	{
		OnLeftGame.Broadcast();
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

void AMPCharacter::OnRep_Shield(float LastShield)
{
	UpdateHUDShield();
	if (Shield < LastShield)
	{
		PlayHitReactMontage();
	}
}

void AMPCharacter::UpdateHUDShield()
{
	MPPlayerController = MPPlayerController == nullptr ? Cast<AMPPlayerController>(Controller) : MPPlayerController;
	if (MPPlayerController)
	{
		MPPlayerController->SetHUDShield(Shield, MaxShield);
	}
}

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

void AMPCharacter::MulticastGainedTheLead_Implementation()
{
	if (CrownSystem == nullptr)
	{
		return;
	}

	if (CrownComponent == nullptr)
	{
		CrownComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
			CrownSystem,
			GetCapsuleComponent(),
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
