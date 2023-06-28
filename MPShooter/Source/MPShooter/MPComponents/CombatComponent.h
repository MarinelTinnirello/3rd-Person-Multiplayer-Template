// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MPShooter/HUD/MPHUD.h"
#include "MPShooter/MPTypes/WeaponTypes.h"
#include "MPShooter/MPTypes/CombatState.h"

#include "CombatComponent.generated.h"

#define TRACE_LENGTH 80000.f

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MPSHOOTER_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	#pragma region Animation Checks
	bool bLocallyReloading = false;
	#pragma endregion

	friend class AMPCharacter;

	#pragma region Constructors & Engine Overrides
	UCombatComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	#pragma endregion

	#pragma region Actions & Anim Notifies
	#pragma region Spawn
	void SpawnDefaultWeapon();
	#pragma endregion

	#pragma region Equip
	UFUNCTION(BlueprintCallable)
	void EquipWeapon(class AWeapon* WeaponToEquip);
	#pragma endregion

	#pragma region Unequip
	UFUNCTION(BlueprintCallable)
	void UnequipWeapon();

	UFUNCTION(BlueprintCallable)
	void EndUnequip();
	UFUNCTION(BlueprintCallable)
	void EndUnequipWeapon();
	#pragma endregion

	#pragma region Fire
	void FireButtonPressed(bool bIsPressed);
	#pragma endregion

	#pragma region Swap
	void SwapWeapons();

	UFUNCTION(BlueprintCallable)
	void EndSwap();
	UFUNCTION(BlueprintCallable)
	void EndSwapAttachWeapons();
	#pragma endregion

	#pragma region Reload
	void Reload();

	UFUNCTION(BlueprintCallable)
	void EndReloading();
	UFUNCTION(BlueprintCallable)
	void ShotgunShellReload();
	void JumpToShotgunEnd();
	#pragma endregion

	#pragma region Ammo
	void PickupAmmo(EWeaponType WeaponType, int32 AmmoAmount);
	void PickupThrowableAmmo(TSubclassOf<class AProjectile> ThrowableWeaponType, int32 AmmoAmount);
	#pragma endregion

	#pragma region Throw
	UFUNCTION(BlueprintCallable)
	void ClearPredictPath();
	void ShowPredictPath(bool bShowPath);
	UFUNCTION(BlueprintCallable)
	void LaunchThrowable();

	UFUNCTION(BlueprintCallable)
	void EndThrow();

	#pragma region Server
	UFUNCTION(Server, Reliable)
		void ServerLaunchThrowable(const FVector_NetQuantize& Target);
	#pragma endregion

	#pragma endregion

	#pragma region Movement
	void SetSpeeds(float BaseSpeed, float CrouchSpeed);
	#pragma endregion

	#pragma endregion

protected:
	#pragma region Engine Overrides
	virtual void BeginPlay() override;
	#pragma endregion

	#pragma region Actions
	#pragma region Aim & Crosshairs
	void SetAiming(bool bIsAiming);
	void TraceUnderCrosshairs(FHitResult& TraceHitResult);
	void SetHUDCrosshairs(float DeltaTime);

	#pragma region Server
	UFUNCTION(Server, Reliable)
	void ServerSetAiming(bool bIsAiming);
	#pragma endregion

	#pragma endregion

	#pragma region Fire
	#pragma region Fire
	void Fire();
	void FireProjectileWeapon();
	void FireHitScanWeapon();
	void FireShotgun();
	void FireMeleeWeapon();
	#pragma endregion

	#pragma region Local Fire
	void LocalFire(const FVector_NetQuantize& TraceHitTarget);
	void LocalFireShotgun(const TArray<FVector_NetQuantize>& TraceHitTargets);
	#pragma endregion

	#pragma region Multicast
	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(const FVector_NetQuantize& TraceHitTarget);
	UFUNCTION(NetMulticast, Reliable)
	void MulticastFireShotgun(const TArray<FVector_NetQuantize>& TraceHitTargets);
	#pragma endregion

	#pragma region Server
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFire(const FVector_NetQuantize& TraceHitTarget, float FireDelay);
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFireShotgun(const TArray<FVector_NetQuantize>& TraceHitTargets, float FireDelay);
	#pragma endregion

	#pragma endregion

	#pragma region Reload
	void HandleReload();
	int32 AmountToReload();
	void ReloadEmptyWeapon();
	void UpdateCarriedAmmo();

	#pragma region Server
	UFUNCTION(Server, Reliable)
	void ServerReload();
	#pragma endregion

	#pragma endregion

	#pragma region Throw
	void Throw();
	void ShowAttachedThrowable(bool bShowThrowable);
	void UpdateCarriedThrowableAmmo(TSubclassOf<class AProjectile> ThrowableWeaponType);

	#pragma region Server
	UFUNCTION(Server, Reliable)
	void ServerThrow();
	#pragma endregion

	#pragma endregion

	#pragma endregion

	#pragma region Equipped Weapon
	#pragma region Actions
	void DropEquippedWeapon();
	void PlayEquipWeaponSound(AWeapon* WeaponToEquip);
	void PlayUnequipWeaponSound(AWeapon* WeaponToUnequip);
	void UpdateWeaponType();
	void EquipPrimaryWeapon(AWeapon* WeaponToEquip);
	void EquipSecondaryWeapon(AWeapon* WeaponToEquip);
	#pragma endregion

	#pragma region Animation Checks
	void CheckAttachedActorHand(AActor* ActorToAttach);
	void AttachActorToRightHand(AActor* ActorToAttach);
	void AttachActorToLeftHand(AActor* ActorToAttach);
	void CheckAttachedActorUnequipped(AActor* ActorToAttach);
	void AttachActorToBackSpine(AActor* ActorToAttach);
	void AttachActorToHips(AActor* ActorToAttach);
	void AttachActorToThrowable(AActor* ActorToAttach);
	void CheckThrowSwappable(AActor* ActorToAttach);
	FName OnEquippedWeaponTypeAttachActorThrow();
	#pragma endregion

	#pragma region OnRep
	UFUNCTION()
	void OnRep_EquippedWeapon();
	UFUNCTION()
	void OnRep_EquippedSecondaryWeapon();
	#pragma endregion

	#pragma endregion

	#pragma region Throwable Weapon
	UPROPERTY(EditAnywhere, Category = "Combat - Throw", meta = (ToolTip = "Throwable class."))
	TSubclassOf<class AProjectile> ThrowableClass;
	bool bThrowable = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat - Throw", meta = (ToolTip = "Checks if we should currently be predicting the path."))
	bool bPredictPath = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Combat - Throw", meta = (ToolTip = "Array of spline meshes for when aiming a throwable."))
	TArray<class USplineMeshComponent*> SplineMeshes;
	#pragma endregion

private:
	#pragma region References
	UPROPERTY()
	class AMPCharacter* Character;
	UPROPERTY()
	class UMPAnimInstance* AnimInstance;
	UPROPERTY()
	class AMPPlayerController* Controller;
	UPROPERTY()
	class AMPHUD* HUD;
	#pragma endregion
	
	#pragma region States
	UPROPERTY(ReplicatedUsing = OnRep_CombatState)
	ECombatState CombatState = ECombatState::ECS_Unoccupied;
	ECharacterCombatState CharacterCombatState = ECharacterCombatState::ECCS_Unequipped;

	#pragma region OnRep
	UFUNCTION()
	void OnRep_CombatState();
	#pragma endregion

	#pragma endregion

	#pragma region Character Properties
	//
	// Character Properties
	//
	UPROPERTY(EditAnywhere, Category = "Character", meta = (ToolTip = "Base walk speed of a character when a weapon is equipped."))
	float BaseWalkSpd;
	UPROPERTY(EditAnywhere, Category = "Character", meta = (ToolTip = "Aim walk speed of a character when a weapon is equipped."))
	float AimWalkSpd;
	// TODO: add a FName for SecondaryThrowHand, just in case we have a dual wield or something
	#pragma endregion

	#pragma region Weapon Properties
	//
	// Weapon Properties
	//
	UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon)
	AWeapon* EquippedWeapon;
	UPROPERTY(ReplicatedUsing = OnRep_EquippedSecondaryWeapon)
	AWeapon* EquippedSecondaryWeapon;

	#pragma region Character
	UPROPERTY(EditAnywhere, Category = "Character", meta = (ToolTip = "Checks if a character spawns in with a default weapon."))
	bool bSpawnWithDefaultWeapon = false;
	UPROPERTY(EditAnywhere, Category = "Character", meta = (ToolTip = "Default weapon a character spawns in with."))
	TSubclassOf<AWeapon> DefaultWeaponClass;
	#pragma endregion

	#pragma region Weapon
	UPROPERTY(EditAnywhere, Category = "Weapon", meta = (ToolTip = "Sound to make while zooming in with a sniper weapon."))
	class USoundCue* ZoomInSniperRifle;
	UPROPERTY(EditAnywhere, Category = "Weapon", meta = (ToolTip = "Sound to make while zooming out with a sniper weapon."))
	USoundCue* ZoomOutSniperRifle;
	#pragma endregion

	#pragma region Fire
	bool bFireButtonPressed;
	FTimerHandle FireTimer;
	bool bCanFire = true;

	void StartFireTimer();
	void EndFireTimer();
	bool CanFire();
	#pragma endregion

	#pragma region Ammo Properties
	//
	// Ammo Properties
	//
	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_CarriedAmmo)
	int32 CarriedAmmo;
	// couldn't map TMaps in 4, but this saves on all the initializing
	UPROPERTY(EditDefaultsOnly, Category = "Weapon - Ammo", meta = (ToolTip = "Amount of ammo at start for a weapon."))
	TMap<EWeaponType, int32> CarriedAmmoMap;
	// could be a max for each type, but this is a total
	UPROPERTY(EditAnywhere, Category = "Weapon - Ammo", meta = (ToolTip = "Max amount of ammo that can be carried."))
	int32 MaxCarriedAmmo = 500;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_CarriedThrowableAmmo)
	int32 CarriedThrowableAmmo;
	UPROPERTY(EditDefaultsOnly, Category = "Weapon - Ammo", meta = (ToolTip = "Amount of ammo at start for a throwable weapon."))
	TMap<TSubclassOf<AProjectile>, int32 > CarriedThrowableAmmoMap;
	UPROPERTY(EditAnywhere, Category = "Weapon - Ammo", meta = (ToolTip = "Max amount of ammo that can be carried."))
	int32 MaxCarriedThrowableAmmo = 200;

	void UpdateAmmoValues();
	void UpdateShotgunAmmoValues();
	void UpdateThrowableAmmoValues();

	#pragma region OnRep
	UFUNCTION()
	void OnRep_CarriedAmmo();
	UFUNCTION()
	void OnRep_CarriedThrowableAmmo();
	#pragma endregion

	#pragma endregion

	#pragma region Aiming & Crosshairs
	#pragma region HUD & Crosshairs Properties
	//
	// HUD & Crosshairs Properties
	//
	FHUDPackage HUDPackage;
	float CrosshairsVelocityFactor;
	float CrosshairsCrouchingFactor;
	float CrosshairsInAirFactor;
	float CrosshairsAimFactor;
	float CrosshairsShootingFactor;
	float CrosshairsAimAtCharacterFactor;
	FVector HitTarget;
	#pragma endregion

	#pragma region Aiming & FoV
	//
	// Aiming & FoV
	//
	bool bAimButtonPressed = false;
	UPROPERTY(ReplicatedUsing = OnRep_Aiming)
	bool bAiming;

	float DefaultFOV;
	UPROPERTY(EditAnywhere, Category = "Combat - Aiming & FoV", meta = (ToolTip = "Amount the FOV is zoomed in when aiming."))
	float ZoomedFOV = 30.f;
	UPROPERTY(EditAnywhere, Category = "Combat - Aiming & FoV", meta = (ToolTip = "Speed at which a weapon is zoomed in when aiming."))
	float ZoomedInterpSpeed = 20.f;
	float CurrentFOV;
	UPROPERTY(EditAnywhere, Category = "Combat - Aiming & FoV", meta = (ToolTip = "Target amount to zoom in when aiming."))
	float AimFactor = 0.58f;
	UPROPERTY(EditAnywhere, Category = "Combat - Aiming & FoV", meta = (ToolTip = "Target amount to zoom in when shooting."))
	float ShootingFactor = 0.75f;
	UPROPERTY(EditAnywhere, Category = "Combat - Aiming & FoV", meta = (ToolTip = "Target amount to zoom in when aiming at a character."))
	float AimAtCharacterFactor = 0.25f;
	bool bAimingAtCharacter;

	void InterpFOV(float DeltaTime);

	#pragma region OnRep
	UFUNCTION()
	void OnRep_Aiming();
	#pragma endregion

	#pragma endregion

	#pragma endregion

	#pragma endregion

public:	
	#pragma region Weapon Checks
	bool IsWeaponUnequipped();
	bool ShouldUnequipWeapon();
	bool ShouldReequipWeapon();
	bool ShouldSwapWeapons();
	#pragma endregion

};
