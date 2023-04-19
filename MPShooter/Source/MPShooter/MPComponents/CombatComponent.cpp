// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "TimerManager.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/PlayerController/MPPlayerController.h"
#include "MPShooter/Character/MPAnimInstance.h"
#include "MPShooter/Item/Weapon/Weapon.h"
#include "MPShooter/Item/Weapon/Ranged/ShotgunWeapon.h"
#include "MPShooter/Item/Weapon/Throwable/ThrowableWeapon.h"
#include "MPShooter/Item/Weapon/Ranged/Projectile/Projectile.h"

UCombatComponent::UCombatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	BaseWalkSpd = 600.f;
	AimWalkSpd = 450.f;
}


void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (Character)
	{
		Character->GetCharacterMovement()->MaxWalkSpeed = BaseWalkSpd;

		if (Character->GetFollowCamera())
		{
			DefaultFOV = Character->GetFollowCamera()->FieldOfView;
			CurrentFOV = DefaultFOV;
		}

		if (Controller)
		{
			Controller->SetHUDWeaponType(EWeaponType::EWT_Unequipped);
		}

		SpawnDefaultWeapon();
		Character->UpdateHUDAmmo();
	}
}

void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (Character && Character->IsLocallyControlled())
	{
		FHitResult HitResult;
		TraceUnderCrosshairs(HitResult);
		HitTarget = HitResult.ImpactPoint;

		SetHUDCrosshairs(DeltaTime);
		InterpFOV(DeltaTime);
	}
}

void UCombatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCombatComponent, EquippedWeapon);
	DOREPLIFETIME(UCombatComponent, EquippedSecondaryWeapon);
	DOREPLIFETIME(UCombatComponent, bAiming);
	DOREPLIFETIME_CONDITION(UCombatComponent, CarriedAmmo, COND_OwnerOnly);
	//DOREPLIFETIME_CONDITION(UCombatComponent, CarriedThrowableAmmo, COND_OwnerOnly);
	DOREPLIFETIME(UCombatComponent, CombatState);
	/*DOREPLIFETIME(UCombatComponent, Throwables);*/
}

void UCombatComponent::SpawnDefaultWeapon()
{
	// stops us from spawning a weapon in say LobbyGameMode
	AMPShooterGameMode* MPShooterGameMode = Cast<AMPShooterGameMode>(UGameplayStatics::GetGameMode(this));
	UWorld* World = GetWorld();
	bool bIsValid = MPShooterGameMode && 
		World && 
		Character &&
		!Character->IsEliminated() && 
		bSpawnWithDefaultWeapon &&
		DefaultWeaponClass;
	if (bIsValid)
	{
		AWeapon* StartingWeapon = World->SpawnActor<AWeapon>(DefaultWeaponClass);
		StartingWeapon->bDestroyWeapon = true;
		EquipWeapon(StartingWeapon);
	}
}

void UCombatComponent::EquipWeapon(AWeapon* WeaponToEquip)
{
	if (Character == nullptr || WeaponToEquip == nullptr)
	{
		return;
	}

	if (CombatState != ECombatState::ECS_Unoccupied)
	{
		return;
	}

	if (EquippedWeapon != nullptr && EquippedSecondaryWeapon == nullptr)
	{
		EquipSecondaryWeapon(WeaponToEquip);
	}
	else
	{
		EquipPrimaryWeapon(WeaponToEquip);
	}

	Character->GetCharacterMovement()->bOrientRotationToMovement = false;
	Character->bUseControllerRotationYaw = true;
}

void UCombatComponent::EquipPrimaryWeapon(AWeapon* WeaponToEquip)
{
	if (WeaponToEquip == nullptr)
	{
		return;
	}

	DropEquippedWeapon();

	EquippedWeapon = WeaponToEquip;
	EquippedWeapon->SetItemState(EItemState::EIS_Equipped);
	CheckAttachedActorHand(EquippedWeapon);
	EquippedWeapon->SetOwner(Character);
	EquippedWeapon->SetHUDAmmo();
	UpdateCarriedAmmo();
	ReloadEmptyWeapon();
	PlayEquipWeaponSound(WeaponToEquip);
}

void UCombatComponent::EquipSecondaryWeapon(AWeapon* WeaponToEquip)
{
	if (WeaponToEquip == nullptr)
	{
		return;
	}

	EquippedSecondaryWeapon = WeaponToEquip;
	EquippedSecondaryWeapon->SetItemState(EItemState::EIS_EquippedSecondary);
	AttachActorToBackSpine(WeaponToEquip);
	PlayEquipWeaponSound(WeaponToEquip);
	EquippedSecondaryWeapon->SetOwner(Character);
}

void UCombatComponent::OnRep_EquippedWeapon()
{
	if (EquippedWeapon && Character)
	{
		EquippedWeapon->SetItemState(EItemState::EIS_Equipped);
		CheckAttachedActorHand(EquippedWeapon);

		Character->GetCharacterMovement()->bOrientRotationToMovement = false;
		Character->bUseControllerRotationYaw = true;
		
		PlayEquipWeaponSound(EquippedWeapon);
		UpdateWeaponType();
		EquippedWeapon->EnableCustomDepth(false);
		EquippedWeapon->SetHUDAmmo();
	}
}

void UCombatComponent::OnRep_EquippedSecondaryWeapon()
{
	if (EquippedSecondaryWeapon && Character)
	{
		EquippedSecondaryWeapon->SetItemState(EItemState::EIS_EquippedSecondary);
		AttachActorToBackSpine(EquippedSecondaryWeapon);
		PlayEquipWeaponSound(EquippedWeapon);
	}
}

void UCombatComponent::DropEquippedWeapon()
{
	// Makes sure we only have 1 weapon equipped at a time
	if (EquippedWeapon)
	{
		EquippedWeapon->Dropped();
	}
}

void UCombatComponent::SwapWeapons()
{
	if (CombatState != ECombatState::ECS_Unoccupied || Character == nullptr || !Character->HasAuthority())
	{
		return;
	}

	Character->PlaySwapMontage();
	CombatState = ECombatState::ECS_SwappingWeapons;
	Character->bFinishedSwapping = false;
}

bool UCombatComponent::ShouldSwapWeapons()
{
	return (EquippedWeapon != nullptr && EquippedSecondaryWeapon != nullptr);
}

void UCombatComponent::EndSwap()
{
	if (Character && Character->HasAuthority())
	{
		CombatState = ECombatState::ECS_Unoccupied;
	}

	if (Character)
	{
		Character->bFinishedSwapping = true;
	}
}

void UCombatComponent::EndSwapAttachWeapons()
{
	AWeapon* TempWeapon = EquippedWeapon;
	EquippedWeapon = EquippedSecondaryWeapon;
	EquippedSecondaryWeapon = TempWeapon;

	EquippedWeapon->SetItemState(EItemState::EIS_Equipped);
	AttachActorToRightHand(EquippedWeapon);
	EquippedWeapon->SetHUDAmmo();
	UpdateCarriedAmmo();
	PlayEquipWeaponSound(EquippedWeapon);

	EquippedSecondaryWeapon->SetItemState(EItemState::EIS_EquippedSecondary);
	AttachActorToBackSpine(EquippedSecondaryWeapon);
}

void UCombatComponent::PlayEquipWeaponSound(AWeapon* WeaponToEquip)
{
	if (Character && WeaponToEquip && WeaponToEquip->GetEquipSound())
	{
		UGameplayStatics::PlaySoundAtLocation(
			this,
			WeaponToEquip->GetEquipSound(),
			Character->GetActorLocation()
		);
	}
}

void UCombatComponent::UpdateWeaponType()
{
	Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
	if (Controller)
	{
		Controller->SetHUDWeaponType(EquippedWeapon->GetWeaponType());
	}
}

void UCombatComponent::CheckAttachedActorHand(AActor* ActorToAttach)
{
	AnimInstance = AnimInstance == nullptr ? Cast<UMPAnimInstance>(Character->GetMesh()->GetAnimInstance()) : AnimInstance;
	bool bIsValid = Character == nullptr || 
		Character->GetMesh() == nullptr ||
		AnimInstance == nullptr ||
		ActorToAttach == nullptr ||
		EquippedWeapon == nullptr;
	if (bIsValid)
	{
		return;
	}

	if (EquippedWeapon->IsAttachedToRightHand())
	{
		AttachActorToRightHand(ActorToAttach);
	}
	else
	{
		AttachActorToLeftHand(ActorToAttach);
	}
}

void UCombatComponent::AttachActorToRightHand(AActor* ActorToAttach)
{
	if (bThrowable)
	{
		const USkeletalMeshSocket* HandSocket = Character->GetMesh()->GetSocketByName(OnEquippedWeaponTypeAttachActorThrow());
		if (HandSocket)
		{
			HandSocket->AttachActor(ActorToAttach, Character->GetMesh());
		}

		ShowAttachedThrowable(true);
		bThrowable = false;

		return;
	}

	const USkeletalMeshSocket* HandSocket = Character->GetMesh()->GetSocketByName(AnimInstance->GetEquippedHandSocket());
	if (HandSocket)
	{
		HandSocket->AttachActor(ActorToAttach, Character->GetMesh());
	}
}

void UCombatComponent::AttachActorToLeftHand(AActor* ActorToAttach)
{
	if (bThrowable)
	{
		const USkeletalMeshSocket* HandSocket = Character->GetMesh()->GetSocketByName(OnEquippedWeaponTypeAttachActorThrow());
		if (HandSocket)
		{
			HandSocket->AttachActor(ActorToAttach, Character->GetMesh());
		}

		ShowAttachedThrowable(true);
		bThrowable = false;

		return;
	}

	const USkeletalMeshSocket* HandSocket = Character->GetMesh()->GetSocketByName(AnimInstance->GetEquippedHandSocket());
	if (HandSocket)
	{
		HandSocket->AttachActor(ActorToAttach, Character->GetMesh());
	}
}

void UCombatComponent::AttachActorToBackSpine(AActor* ActorToAttach)
{
	AnimInstance = AnimInstance == nullptr ? Cast<UMPAnimInstance>(Character->GetMesh()->GetAnimInstance()) : AnimInstance;
	bool bIsValid = Character == nullptr ||
		Character->GetMesh() == nullptr ||
		AnimInstance == nullptr ||
		ActorToAttach == nullptr;
	if (bIsValid)
	{
		return;
	}

	const USkeletalMeshSocket* BackSpine = Character->GetMesh()->GetSocketByName(AnimInstance->GetBackSpineSocket());
	if (BackSpine)
	{
		BackSpine->AttachActor(ActorToAttach, Character->GetMesh());
	}
}

void UCombatComponent::AttachActorToThrowable(AActor* ActorToAttach)
{
	AnimInstance = AnimInstance == nullptr ? Cast<UMPAnimInstance>(Character->GetMesh()->GetAnimInstance()) : AnimInstance;
	bool bIsValid = Character == nullptr ||
		Character->GetMesh() == nullptr ||
		AnimInstance == nullptr ||
		ActorToAttach == nullptr ||
		EquippedThrowableWeapon == nullptr;
	if (bIsValid)
	{
		return;
	}

	const USkeletalMeshSocket* ThrowableSocket = Character->GetMesh()->GetSocketByName(AnimInstance->GetThrowableSocket());
	if (ThrowableSocket)
	{
		ThrowableSocket->AttachActor(ActorToAttach, Character->GetMesh());
		EquippedThrowableWeapon->GetItemMesh()->SetVisibility(false);
	}
}

void UCombatComponent::CheckThrowSwappable(AActor* ActorToAttach)
{
	AnimInstance = AnimInstance == nullptr ? Cast<UMPAnimInstance>(Character->GetMesh()->GetAnimInstance()) : AnimInstance;
	bool bIsValid = Character == nullptr ||
		Character->GetMesh() == nullptr ||
		AnimInstance == nullptr ||
		ActorToAttach == nullptr ||
		EquippedWeapon == nullptr;
	if (bIsValid)
	{
		return;
	}

	// swaps the weapon to the other hand if the weapon is double-handed
	bool bThrowSwappable = bThrowable &&
		!EquippedWeapon->IsDoubleHanded() ||
		!EquippedWeapon->IsDualWield();
	if (bThrowSwappable && EquippedWeapon->IsAttachedToRightHand())
	{
		AttachActorToLeftHand(ActorToAttach);
	}
	else
	{
		AttachActorToRightHand(ActorToAttach);
	}
}

FName UCombatComponent::OnEquippedWeaponTypeAttachActorThrow()
{
	FName SocketName;
	bool bUsePistolSocket =
		EquippedWeapon->GetWeaponType() == EWeaponType::EWT_Pistol ||
		EquippedWeapon->GetWeaponType() == EWeaponType::EWT_SubmachineGun;
	return SocketName = bUsePistolSocket ? FName("PistolSocket") : FName(AnimInstance->GetSecondaryHandSocket());
}

void UCombatComponent::UpdateCarriedAmmo()
{
	if (EquippedWeapon == nullptr)
	{
		return;
	}

	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmo = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
	}

	Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
	if (Controller)
	{
		Controller->SetHUDCarriedAmmo(CarriedAmmo);
		Controller->SetHUDWeaponType(EquippedWeapon->GetWeaponType());
	}
}

void UCombatComponent::ReloadEmptyWeapon()
{
	if (EquippedWeapon && EquippedWeapon->IsMagEmpty())
	{
		Reload();
	}
}

void UCombatComponent::FireButtonPressed(bool bIsPressed)
{
	bFireButtonPressed = bIsPressed;

	if (bFireButtonPressed)
	{
		Fire();
	}
}

void UCombatComponent::Fire()
{
	if (CanFire())
	{
		bCanFire = false;

		if (EquippedWeapon)
		{
			CrosshairsShootingFactor = ShootingFactor;

			switch (EquippedWeapon->GetFireType())
			{
			case EFireType::EFT_Projectile:
				FireProjectileWeapon();
				break;
			case EFireType::EFT_HitScan:
				FireHitScanWeapon();
				break;
			case EFireType::EFT_Shotgun:
				FireShotgun();
				break;
			}
		}

		StartFireTimer();
	}
}

void UCombatComponent::FireProjectileWeapon()
{
	if (EquippedWeapon && Character)
	{
		HitTarget = EquippedWeapon->bUseScatter ? EquippedWeapon->TraceEndWithScatter(HitTarget) : HitTarget;
		if (!Character->HasAuthority())
		{
			LocalFire(HitTarget);
		}

		ServerFire(HitTarget, EquippedWeapon->FireDelay);
	}
}

void UCombatComponent::FireHitScanWeapon()
{
	if (EquippedWeapon && Character)
	{
		HitTarget = EquippedWeapon->bUseScatter ? EquippedWeapon->TraceEndWithScatter(HitTarget) : HitTarget;
		if (!Character->HasAuthority())
		{
			LocalFire(HitTarget);
		}

		ServerFire(HitTarget, EquippedWeapon->FireDelay);
	}
}

void UCombatComponent::FireShotgun()
{
	AShotgunWeapon* Shotgun = Cast<AShotgunWeapon>(EquippedWeapon);
	if (Shotgun && Character)
	{
		TArray<FVector_NetQuantize> HitTargets;
		Shotgun->ShotgunTraceEndWithScatter(HitTarget, HitTargets);

		if (!Character->HasAuthority())
		{
			LocalFireShotgun(HitTargets);
		}

		ServerFireShotgun(HitTargets, EquippedWeapon->FireDelay);
	}
}

void UCombatComponent::MulticastFire_Implementation(const FVector_NetQuantize& TraceHitTarget)
{
	if (Character && Character->IsLocallyControlled() && !Character->HasAuthority()) 
	{ 
		return; 
	}

	LocalFire(TraceHitTarget);
}

void UCombatComponent::MulticastFireShotgun_Implementation(const TArray<FVector_NetQuantize>& TraceHitTargets)
{
	if (Character && Character->IsLocallyControlled() && !Character->HasAuthority())
	{
		return;
	}

	LocalFireShotgun(TraceHitTargets);
}

void UCombatComponent::ServerFire_Implementation(const FVector_NetQuantize& TraceHitTarget, float FireDelay)
{
	MulticastFire(TraceHitTarget);
}

bool UCombatComponent::ServerFire_Validate(const FVector_NetQuantize& TraceHitTarget, float FireDelay)
{
	if (EquippedWeapon)
	{
		bool bNearlyEqual = FMath::IsNearlyEqual(EquippedWeapon->FireDelay, FireDelay, 0.001f);
		return bNearlyEqual;
	}
	return true;
}

void UCombatComponent::ServerFireShotgun_Implementation(const TArray<FVector_NetQuantize>& TraceHitTargets, float FireDelay)
{
	MulticastFireShotgun(TraceHitTargets);
}

bool UCombatComponent::ServerFireShotgun_Validate(const TArray<FVector_NetQuantize>& TraceHitTargets, float FireDelay)
{
	if (EquippedWeapon)
	{
		bool bNearlyEqual = FMath::IsNearlyEqual(EquippedWeapon->FireDelay, FireDelay, 0.001f);
		return bNearlyEqual;
	}
	return true;
}

void UCombatComponent::LocalFire(const FVector_NetQuantize& TraceHitTarget)
{
	if (EquippedWeapon == nullptr)
	{
		return;
	}

	if (Character && CombatState == ECombatState::ECS_Unoccupied)
	{
		Character->PlayFireMontage(bAiming);
		EquippedWeapon->Fire(TraceHitTarget);
	}
}

void UCombatComponent::LocalFireShotgun(const TArray<FVector_NetQuantize>& TraceHitTargets)
{
	AShotgunWeapon* Shotgun = Cast<AShotgunWeapon>(EquippedWeapon);
	if (Shotgun == nullptr || Character == nullptr)
	{
		return;
	}

	if (CombatState == ECombatState::ECS_Reloading || CombatState == ECombatState::ECS_Unoccupied)
	{
		Character->PlayFireMontage(bAiming);
		Shotgun->FireShotgun(TraceHitTargets);
		CombatState = ECombatState::ECS_Unoccupied;
		bLocallyReloading = false;
	}
}

bool UCombatComponent::CanFire()
{
	if (EquippedWeapon == nullptr)
	{
		return false;
	}

	if (!EquippedWeapon->IsMagEmpty() && bCanFire && CombatState == ECombatState::ECS_Reloading && EquippedWeapon->GetWeaponType() == EWeaponType::EWT_Shotgun)
	{
		return true;
	}

	if (bLocallyReloading)
	{
		return false;
	}

	return !EquippedWeapon->IsMagEmpty() && bCanFire && CombatState == ECombatState::ECS_Unoccupied;
}

void UCombatComponent::StartFireTimer()
{
	if (EquippedWeapon == nullptr || Character == nullptr)
	{
		return;
	}

	bCanFire = false;
	Character->GetWorldTimerManager().SetTimer(
		FireTimer,
		this,
		&UCombatComponent::EndFireTimer,
		EquippedWeapon->FireDelay
	);
}

void UCombatComponent::EndFireTimer()
{
	if (EquippedWeapon == nullptr)
	{
		return;
	}

	bCanFire = true;

	if (bFireButtonPressed && EquippedWeapon->bAutomatic)
	{
		Fire();
	}

	ReloadEmptyWeapon();
}

void UCombatComponent::UpdateAmmoValues()
{
	if (Character == nullptr || EquippedWeapon == nullptr)
	{
		return;
	}

	int32 ReloadAmount = AmountToReload();
	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmoMap[EquippedWeapon->GetWeaponType()] -= ReloadAmount;
		CarriedAmmo = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
	}

	Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
	if (Controller)
	{
		Controller->SetHUDCarriedAmmo(CarriedAmmo);
	}

	EquippedWeapon->AddAmmo(ReloadAmount);
}

void UCombatComponent::UpdateShotgunAmmoValues()
{
	if (Character == nullptr || EquippedWeapon == nullptr)
	{
		return;
	}

	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmoMap[EquippedWeapon->GetWeaponType()] -= 1;
		CarriedAmmo = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
	}

	Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
	if (Controller)
	{
		Controller->SetHUDCarriedAmmo(CarriedAmmo);
	}

	EquippedWeapon->AddAmmo(1);
	bCanFire = true;
	if (EquippedWeapon->IsMagFull() || CarriedAmmo == 0)
	{
		JumpToShotgunEnd();
	}
}

void UCombatComponent::OnRep_CarriedAmmo()
{
	Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
	if (Controller)
	{
		Controller->SetHUDCarriedAmmo(CarriedAmmo);
	}

	bool bJumpToShotgunEnd =
		CombatState == ECombatState::ECS_Reloading &&
		EquippedWeapon != nullptr &&
		EquippedWeapon->GetWeaponType() == EWeaponType::EWT_Shotgun &&
		CarriedAmmo == 0;
	if (bJumpToShotgunEnd)
	{
		JumpToShotgunEnd();
	}
}

void UCombatComponent::PickupAmmo(EWeaponType WeaponType, int32 AmmoAmount)
{
	if (CarriedAmmoMap.Contains(WeaponType))
	{
		CarriedAmmoMap[WeaponType] = FMath::Clamp(CarriedAmmoMap[WeaponType] + AmmoAmount, 0, MaxCarriedAmmo);
		UpdateCarriedAmmo();
	}
	if (EquippedWeapon && EquippedWeapon->IsMagEmpty() && EquippedWeapon->GetWeaponType() == WeaponType)
	{
		Reload();
	}
}

void UCombatComponent::OnRep_CombatState()
{
	switch (CombatState)
	{
	case ECombatState::ECS_Reloading:
		if (Character && !Character->IsLocallyControlled())
		{
			HandleReload();
		}
		break;
	case ECombatState::ECS_Unoccupied:
		if (bFireButtonPressed)
		{
			Fire();
		}
		break;
	case ECombatState::ECS_Throwing:
		if (Character && !Character->IsLocallyControlled())
		{
			Character->PlayThrowMontage();
			bThrowable = true;
			CheckThrowSwappable(EquippedWeapon);
		}
		break;
	case ECombatState::ECS_SwappingWeapons:
		if (Character && !Character->IsLocallyControlled())
		{
			Character->PlaySwapMontage();
		}
		break;
	}
}

void UCombatComponent::Reload()
{
	bool bIsValid = CarriedAmmo > 0 && 
		CombatState == ECombatState::ECS_Unoccupied && 
		EquippedWeapon && 
		!EquippedWeapon->IsMagFull() && 
		!bLocallyReloading;
	if (bIsValid)
	{
		ServerReload();
		HandleReload();
		bLocallyReloading = true;
	}
}

void UCombatComponent::EndReloading()
{
	if (Character == nullptr)
	{
		return;
	}

	bLocallyReloading = false;

	if (Character->HasAuthority())
	{
		CombatState = ECombatState::ECS_Unoccupied;
		UpdateAmmoValues();
	}

	if (bFireButtonPressed)
	{
		Fire();
	}
}

void UCombatComponent::ShotgunShellReload()
{
	if (Character && Character->HasAuthority())
	{
		UpdateShotgunAmmoValues();
	}
}

void UCombatComponent::JumpToShotgunEnd()
{
	AnimInstance = AnimInstance == nullptr ? Cast<UMPAnimInstance>(Character->GetMesh()->GetAnimInstance()) : AnimInstance;
	if (AnimInstance && Character->GetReloadMontage())
	{
		AnimInstance->Montage_JumpToSection(FName("ShotgunEnd"));
	}
}

void UCombatComponent::ServerReload_Implementation()
{
	if (Character == nullptr || EquippedWeapon == nullptr)
	{
		return;
	}

	CombatState = ECombatState::ECS_Reloading;
	if (!Character->IsLocallyControlled())
	{
		HandleReload();
	}
}

void UCombatComponent::HandleReload()
{
	if (Character)
	{
		Character->PlayReloadMontage();
	}
}

int32 UCombatComponent::AmountToReload()
{
	if (EquippedWeapon == nullptr)
	{
		return 0;
	}

	int32 RoomInMag = EquippedWeapon->GetMagCapacity() - EquippedWeapon->GetAmmo();
	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		int32 AmountCarried = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
		int32 Least = FMath::Min(RoomInMag, AmountCarried);
		
		return FMath::Clamp(RoomInMag, 0, Least);
	}

	return 0;
}

void UCombatComponent::SetSpeeds(float BaseSpeed, float CrouchSpeed)
{
	// this prevents losing the speed buff if we're aiming
	BaseSpeed = Character->GetCharacterMovement()->MaxWalkSpeed;
	CrouchSpeed = Character->GetCharacterMovement()->MaxWalkSpeedCrouched;
}

void UCombatComponent::SetAiming(bool bIsAiming)
{
	if (Character == nullptr || EquippedWeapon == nullptr)
	{
		return;
	}

	bAiming = bIsAiming;
	ServerSetAiming(bIsAiming);
	if (Character)
	{
		Character->GetCharacterMovement()->MaxWalkSpeed = bIsAiming ? AimWalkSpd : BaseWalkSpd;
	}

	if (Character->IsLocallyControlled() && EquippedWeapon->GetWeaponType() == EWeaponType::EWT_SniperRifle)
	{
		Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
		if (Controller)
		{
			Controller->SetHUDSniperScope(bIsAiming);
			if (bIsAiming)
			{
				UGameplayStatics::PlaySound2D(this, ZoomInSniperRifle);
			}
			else
			{
				UGameplayStatics::PlaySound2D(this, ZoomOutSniperRifle);
			}
		}
	}

	if (Character->IsLocallyControlled())
	{
		bAimButtonPressed = bIsAiming;
	}
}

void UCombatComponent::OnRep_Aiming()
{
	if (Character && Character->IsLocallyControlled())
	{
		bAiming = bAimButtonPressed;
	}
}

void UCombatComponent::ServerSetAiming_Implementation(bool bIsAiming)
{
	bAiming = bIsAiming;

	if (Character)
	{
		Character->GetCharacterMovement()->MaxWalkSpeed = bIsAiming ? AimWalkSpd : BaseWalkSpd;
	}
}

void UCombatComponent::TraceUnderCrosshairs(FHitResult& TraceHitResult)
{
	FVector2D ViewportSize;

	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}

	FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;
	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(
		UGameplayStatics::GetPlayerController(this, 0),
		CrosshairLocation,
		CrosshairWorldPosition,
		CrosshairWorldDirection
	);

	if (bScreenToWorld)
	{
		FVector Start = CrosshairWorldPosition;

		if (Character)
		{
			float DistanceToCharacter = (Character->GetActorLocation() - Start).Size();
			Start += CrosshairWorldDirection * (DistanceToCharacter + 100.f);
		}

		FVector End = Start + CrosshairWorldDirection * TRACE_LENGTH;
		GetWorld()->LineTraceSingleByChannel(
			TraceHitResult,
			Start,
			End,
			ECollisionChannel::ECC_Visibility
		);

		if (TraceHitResult.GetActor() && TraceHitResult.GetActor()->Implements<UInteractWithCrosshairsInterface>())
		{
			HUDPackage.CrosshairsColor = FLinearColor::Red;
			bAimingAtCharacter = true;
		}
		else
		{
			HUDPackage.CrosshairsColor = FLinearColor::White;
			bAimingAtCharacter = false;
		}
	}
}

void UCombatComponent::SetHUDCrosshairs(float DeltaTime)
{
	if (Character == nullptr || Character->Controller == nullptr)
	{
		return;
	}

	Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
	if (Controller)
	{
		HUD = HUD == nullptr ? Cast<AMPHUD>(Controller->GetHUD()) : HUD;

		if (HUD)
		{
			if (EquippedWeapon)
			{
				HUDPackage.CrosshairsCenter = EquippedWeapon->CrosshairsCenter;
				HUDPackage.CrosshairsRight = EquippedWeapon->CrosshairsRight;
				HUDPackage.CrosshairsLeft = EquippedWeapon->CrosshairsLeft;
				HUDPackage.CrosshairsTop = EquippedWeapon->CrosshairsTop;
				HUDPackage.CrosshairsBottom = EquippedWeapon->CrosshairsBottom;
			}
			else
			{
				HUDPackage.CrosshairsCenter = nullptr;
				HUDPackage.CrosshairsRight = nullptr;
				HUDPackage.CrosshairsLeft = nullptr;
				HUDPackage.CrosshairsTop = nullptr;
				HUDPackage.CrosshairsBottom = nullptr;
			}

			// Calculates crosshair spread by player's velocity
			// remaps idle to max walk spd -> [0, 1]
			FVector2D WalkSpeedRange(0.f, Character->GetCharacterMovement()->MaxWalkSpeed);
			FVector2D VelocityMultiplierRange(0.f, 1.f);
			FVector Velocity = Character->GetVelocity();
			Velocity.Z = 0;
			CrosshairsVelocityFactor = FMath::GetMappedRangeValueClamped(WalkSpeedRange, VelocityMultiplierRange, Velocity.Size());

			if (Character->GetCharacterMovement()->IsCrouching())
			{
				FVector2D CrouchSpeedRange(0.f, Character->GetCharacterMovement()->MaxWalkSpeedCrouched);
				FVector2D CrouchedMultiplierRange(0.f, 0.5f);
				CrosshairsCrouchingFactor = FMath::GetMappedRangeValueClamped(CrouchSpeedRange, CrouchedMultiplierRange, Velocity.Size());
			}

			if (Character->GetCharacterMovement()->IsFalling())
			{
				CrosshairsInAirFactor = FMath::FInterpTo(CrosshairsInAirFactor, 2.25f, DeltaTime, 2.25f);
			}
			else
			{
				CrosshairsInAirFactor = FMath::FInterpTo(CrosshairsInAirFactor, 0.f, DeltaTime, 30.f);
			}

			if (EquippedWeapon)
			{
				if (bAiming)
				{
					CrosshairsAimFactor = FMath::FInterpTo(CrosshairsAimFactor, AimFactor, DeltaTime, EquippedWeapon->GetZoomedInterpSpeed());
				}
				else
				{
					CrosshairsAimFactor = FMath::FInterpTo(CrosshairsAimFactor, 0.f, DeltaTime, EquippedWeapon->GetZoomedInterpSpeed());
				}

				CrosshairsShootingFactor = FMath::FInterpTo(CrosshairsShootingFactor, 0.f, DeltaTime, EquippedWeapon->GetZoomedInterpSpeed());

				if (bAimingAtCharacter && !bAiming)
				{
					CrosshairsAimAtCharacterFactor = FMath::FInterpTo(CrosshairsAimAtCharacterFactor, AimAtCharacterFactor, DeltaTime, EquippedWeapon->GetZoomedInterpSpeed());
				}
				else
				{
					CrosshairsAimAtCharacterFactor = FMath::FInterpTo(CrosshairsAimAtCharacterFactor, 0.f, DeltaTime, EquippedWeapon->GetZoomedInterpSpeed());
				}
			}

			HUDPackage.CrosshairsSpread = 
				0.5f +
				CrosshairsVelocityFactor +
				CrosshairsCrouchingFactor +
				CrosshairsInAirFactor -
				CrosshairsAimFactor +
				CrosshairsShootingFactor -
				CrosshairsAimAtCharacterFactor;
			HUD->SetHUDPackage(HUDPackage);
		}
	}
}

void UCombatComponent::InterpFOV(float DeltaTime)
{
	if (EquippedWeapon == nullptr)
	{
		return;
	}

	if (bAiming)
	{
		CurrentFOV = FMath::FInterpTo(CurrentFOV, EquippedWeapon->GetZoomedFOV(), DeltaTime, EquippedWeapon->GetZoomedInterpSpeed());
	}
	else
	{
		CurrentFOV = FMath::FInterpTo(CurrentFOV, DefaultFOV, DeltaTime, ZoomedInterpSpeed);
	}

	if (Character && Character->GetFollowCamera())
	{
		Character->GetFollowCamera()->SetFieldOfView(CurrentFOV);
	}
}

void UCombatComponent::EquipThrowableWeapon(AThrowableWeapon* ThrowableWeaponToEquip)
{
	if (Character == nullptr || ThrowableWeaponToEquip == nullptr)
	{
		return;
	}

	if (CombatState != ECombatState::ECS_Unoccupied)
	{
		return;
	}

	if (EquippedThrowableWeapon != nullptr)
	{
		DropEquippedThrowableWeapon();

		EquippedThrowableWeapon = ThrowableWeaponToEquip;
		EquippedThrowableWeapon->SetItemState(EItemState::EIS_Equipped);
		AttachActorToThrowable(EquippedThrowableWeapon);
		EquippedThrowableWeapon->SetOwner(Character);
		EquippedThrowableWeapon->SetHUDAmmo();
		//UpdateCarriedThrowableAmmo();
		PlayEquipThrowableWeaponSound(ThrowableWeaponToEquip);
	}
}

void UCombatComponent::OnRep_EquippedThrowableWeapon()
{
	if (EquippedThrowableWeapon && Character)
	{
		EquippedThrowableWeapon->SetItemState(EItemState::EIS_Equipped);
		AttachActorToThrowable(EquippedThrowableWeapon);

		Character->GetCharacterMovement()->bOrientRotationToMovement = false;
		Character->bUseControllerRotationYaw = true;

		PlayEquipThrowableWeaponSound(EquippedThrowableWeapon);
		EquippedThrowableWeapon->EnableCustomDepth(false);
		EquippedThrowableWeapon->SetHUDAmmo();
	}
}

void UCombatComponent::DropEquippedThrowableWeapon()
{
	if (EquippedThrowableWeapon)
	{
		EquippedThrowableWeapon->Dropped();
	}
}

void UCombatComponent::PlayEquipThrowableWeaponSound(AThrowableWeapon* ThrowableWeaponToEquip)
{
	if (Character && ThrowableWeaponToEquip && ThrowableWeaponToEquip->GetEquipSound())
	{
		UGameplayStatics::PlaySoundAtLocation(
			this,
			ThrowableWeaponToEquip->GetEquipSound(),
			Character->GetActorLocation()
		);
	}
}

void UCombatComponent::ShowAttachedThrowable(bool bShowThrowable)
{
	/*if (Character && Character->GetAttachedThrowable())
	{
		Character->GetAttachedThrowable()->SetVisibility(bShowThrowable);
	}*/
	if (EquippedThrowableWeapon)
	{
		EquippedThrowableWeapon->GetItemMesh()->SetVisibility(true);
	}
}

//void UCombatComponent::UpdateCarriedThrowableAmmo()
//{
//	if (EquippedThrowableWeapon == nullptr)
//	{
//		return;
//	}
//
//	if (CarriedThrowableAmmoMap.Contains(EquippedThrowableWeapon->GetThrowableWeaponType()))
//	{
//		CarriedThrowableAmmo = CarriedThrowableAmmoMap[EquippedThrowableWeapon->GetThrowableWeaponType()];
//	}
//
//	Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
//	if (Controller)
//	{
//		Controller->SetHUDCarriedThrowables(CarriedThrowableAmmo);
//	}
//}

//void UCombatComponent::OnRep_CarriedThrowableAmmo()
//{
//	Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
//	if (Controller)
//	{
//		Controller->SetHUDCarriedThrowables(CarriedThrowableAmmo);
//	}
//}
//
//void UCombatComponent::UpdateThrowableAmmoValues()
//{
//	if (Character == nullptr || EquippedWeapon == nullptr || EquippedThrowableWeapon == nullptr)
//	{
//		return;
//	}
//
//	/*int32 ReloadAmount = AmountToReload();
//	if (CarriedThrowableAmmoMap.Contains(EquippedThrowableWeapon->GetThrowableWeaponType()))
//	{
//		CarriedThrowableAmmoMap[EquippedThrowableWeapon->GetThrowableWeaponType()] -= ReloadAmount;
//		CarriedThrowableAmmo = CarriedThrowableAmmoMap[EquippedThrowableWeapon->GetThrowableWeaponType()];
//	}*/
//
//	Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
//	if (Controller)
//	{
//		Controller->SetHUDCarriedThrowables(CarriedThrowableAmmo);
//	}
//
//	//EquippedThrowableWeapon->AddAmmo(-ReloadAmount);
//}

//void UCombatComponent::PickupThrowableAmmo(EThrowableWeaponType ThrowableWeaponType, int32 AmmoAmount)
//{
//	/*if (CarriedThrowableAmmoMap.Contains(ThrowableWeaponType))
//	{
//		CarriedThrowableAmmoMap[ThrowableWeaponType] = FMath::Clamp(CarriedThrowableAmmoMap[ThrowableWeaponType] + AmmoAmount, 0, MaxCarriedThrowableAmmo);
//		UpdateCarriedThrowableAmmo();
//	}*/
//}

void UCombatComponent::Throw()
{
	/*if (Throwables == 0)
	{
		return;
	}*/

	if (CombatState != ECombatState::ECS_Unoccupied || EquippedWeapon == nullptr || EquippedThrowableWeapon == nullptr)
	{
		return;
	}

	if (EquippedThrowableWeapon->IsMagEmpty())
	{
		return;
	}

	CombatState = ECombatState::ECS_Throwing;
	if (Character)
	{
		Character->PlayThrowMontage();
		bThrowable = true;
		CheckThrowSwappable(EquippedWeapon);
	}
	if (Character && !Character->HasAuthority())
	{
		ServerThrow();
	}
	if (Character && Character->HasAuthority())
	{
		//Throwables = FMath::Clamp(Throwables - 1, 0, MaxThrowables);
		//UpdateHUDThrowables();
		EquippedThrowableWeapon->SpendRound();
		//UpdateThrowableAmmoValues();
	}
}

void UCombatComponent::ServerThrow_Implementation()
{
	/*if (Throwables == 0)
	{
		return;
	}*/
	if (EquippedThrowableWeapon->IsMagEmpty())
	{
		return;
	}

	CombatState = ECombatState::ECS_Throwing;
	if (Character)
	{
		Character->PlayThrowMontage();
		bThrowable = true;
		CheckThrowSwappable(EquippedWeapon);
	}

	/*Throwables = FMath::Clamp(Throwables - 1, 0, MaxThrowables);
	UpdateHUDThrowables();*/
	EquippedThrowableWeapon->SpendRound();
	//UpdateThrowableAmmoValues();
}

void UCombatComponent::EndThrow()
{
	CombatState = ECombatState::ECS_Unoccupied;
	CheckAttachedActorHand(EquippedWeapon);
}

void UCombatComponent::LaunchThrowable()
{
	ShowAttachedThrowable(false);
	if (Character && Character->IsLocallyControlled())
	{
		ServerLaunchThrowable(HitTarget);
	}
}

void UCombatComponent::ServerLaunchThrowable_Implementation(const FVector_NetQuantize& Target)
{
	/*if (Character && ThrowableClass && Character->GetAttachedThrowable())
	{
		const FVector StartingLocation = Character->GetAttachedThrowable()->GetComponentLocation();
		FVector ToTarget = Target - StartingLocation;
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = Character;
		SpawnParams.Instigator = Character;
		UWorld* World = GetWorld();
		if (World)
		{
			World->SpawnActor<AProjectile>(
				ThrowableClass,
				StartingLocation,
				ToTarget.Rotation(),
				SpawnParams
			);
		}
	}*/
	if (Character && EquippedThrowableWeapon)
	{
		AnimInstance = AnimInstance == nullptr ? Cast<UMPAnimInstance>(Character->GetMesh()->GetAnimInstance()) : AnimInstance;
		bool bIsValid = Character == nullptr ||
			Character->GetMesh() == nullptr ||
			AnimInstance == nullptr;
		if (bIsValid)
		{
			return;
		}

		const FVector StartingLocation = Character->GetMesh()->GetSocketLocation(AnimInstance->GetThrowableSocket());
		FVector ToTarget = Target - StartingLocation;
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = Character;
		SpawnParams.Instigator = Character;
		UWorld* World = GetWorld();
		if (World)
		{
			World->SpawnActor<AThrowableWeapon>(
				EquippedThrowableWeapon->GetClass(),
				StartingLocation,
				ToTarget.Rotation(),
				SpawnParams
			);
		}

		EquippedThrowableWeapon->OnSpawn();
	}
}

//void UCombatComponent::OnRep_Throwables()
//{
//	UpdateHUDThrowables();
//}
//
//void UCombatComponent::UpdateHUDThrowables()
//{
//	Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
//	if (Controller)
//	{
//		Controller->SetHUDCarriedThrowables(Throwables);
//	}
//}
