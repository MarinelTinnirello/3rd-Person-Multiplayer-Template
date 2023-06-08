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
	bool bLocallyReloading = false;

	UCombatComponent();
	friend class AMPCharacter;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void SpawnDefaultWeapon();
	void EquipWeapon(class AWeapon* WeaponToEquip);
	void SwapWeapons();
	UFUNCTION(BlueprintCallable)
	void EndSwap();
	UFUNCTION(BlueprintCallable)
	void EndSwapAttachWeapons();
	void FireButtonPressed(bool bIsPressed);
	//void ThrowButtonPressed(bool bIsPressed);
	void Reload();
	UFUNCTION(BlueprintCallable)
	void EndReloading();
	UFUNCTION(BlueprintCallable)
	void ShotgunShellReload();
	void JumpToShotgunEnd();
	void PickupAmmo(EWeaponType WeaponType, int32 AmmoAmount);
	void SetSpeeds(float BaseSpeed, float CrouchSpeed);
	void EquipThrowableWeapon(class AThrowableWeapon* ThrowableWeaponToEquip);
	//void PickupThrowableAmmo(EThrowableWeaponType ThrowableWeaponType, int32 AmmoAmount);

	UFUNCTION(BlueprintCallable)
	void EndThrow();
	UFUNCTION(BlueprintCallable)
	void LaunchThrowable();

	UFUNCTION(Server, Reliable)
	void ServerLaunchThrowable(const FVector_NetQuantize& Target);

protected:
	virtual void BeginPlay() override;

	void SetAiming(bool bIsAiming);
	void Fire();
	void FireProjectileWeapon();
	void FireHitScanWeapon();
	void FireShotgun();
	void LocalFire(const FVector_NetQuantize& TraceHitTarget);
	void LocalFireShotgun(const TArray<FVector_NetQuantize>& TraceHitTargets);
	void HandleReload();
	int32 AmountToReload();
	void ReloadEmptyWeapon();
	void UpdateCarriedAmmo();
	void TraceUnderCrosshairs(FHitResult& TraceHitResult);
	void SetHUDCrosshairs(float DeltaTime);
	void Throw();
	void ShowAttachedThrowable(bool bShowThrowable);
	//void UpdateCarriedThrowableAmmo();

	void DropEquippedWeapon();
	void PlayEquipWeaponSound(AWeapon* WeaponToEquip);
	void UpdateWeaponType();
	void CheckAttachedActorHand(AActor* ActorToAttach);
	void AttachActorToRightHand(AActor* ActorToAttach);
	void AttachActorToLeftHand(AActor* ActorToAttach);
	void AttachActorToBackSpine(AActor* ActorToAttach);
	void AttachActorToThrowable(AActor* ActorToAttach);
	void CheckThrowSwappable(AActor* ActorToAttach);
	FName OnEquippedWeaponTypeAttachActorThrow();
	void EquipPrimaryWeapon(AWeapon* WeaponToEquip);
	void EquipSecondaryWeapon(AWeapon* WeaponToEquip);
	void DropEquippedThrowableWeapon();
	void PlayEquipThrowableWeaponSound(AThrowableWeapon* ThrowableWeaponToEquip);
	// TODO:
	// Instead of using the Throwable as an actual type like we tried with weapon, treat it as a class again
	// - have it as a Pickup, 
	//		- grab the type associated, add it to carried ammo
	//		- grab the class associated, add it to array of throwables
	//			- make sure class associated is unique (get rid of dupes)
	//			- if so, just add onto ammo
	// - if we have ammo, reload automatically
	// - add button to swap equipped throwable class, play equip sound
	// - do the throw the way it was being done previous
	// Once this works, add the Projectile Path

	UFUNCTION()
	void OnRep_EquippedWeapon();
	UFUNCTION()
	void OnRep_EquippedSecondaryWeapon();
	UFUNCTION()
	void OnRep_EquippedThrowableWeapon();

	UFUNCTION(Server, Reliable)
	void ServerSetAiming(bool bIsAiming);
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFire(const FVector_NetQuantize& TraceHitTarget, float FireDelay);
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFireShotgun(const TArray<FVector_NetQuantize>& TraceHitTargets, float FireDelay);
	UFUNCTION(Server, Reliable)
	void ServerReload();
	UFUNCTION(Server, Reliable)
	void ServerThrow();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(const FVector_NetQuantize& TraceHitTarget);
	UFUNCTION(NetMulticast, Reliable)
	void MulticastFireShotgun(const TArray<FVector_NetQuantize>& TraceHitTargets);

	//
	// Throwable
	//
	/*UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Throwable class."))
	TSubclassOf<class AProjectile> ThrowableClass;
	UPROPERTY(ReplicatedUsing = OnRep_Throwables, EditAnywhere, Category = "Combat", meta = (ToolTip = "Amount of throwables."))
	int32 Throwables;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Max amount of throwables."))
	int32 MaxThrowables;

	UFUNCTION()
	void OnRep_Throwables();
	void UpdateHUDThrowables();*/

private:
	UPROPERTY()
	class AMPCharacter* Character;
	UPROPERTY()
	class UMPAnimInstance* AnimInstance;
	UPROPERTY()
	class AMPPlayerController* Controller;
	UPROPERTY()
	class AMPHUD* HUD;
	
	UPROPERTY(ReplicatedUsing = OnRep_CombatState)
	ECombatState CombatState = ECombatState::ECS_Unoccupied;

	UFUNCTION()
	void OnRep_CombatState();

	//
	// Character Properties
	//
	UPROPERTY(EditAnywhere, Category = "Character", meta = (ToolTip = "Base walk speed of a character when a weapon is equipped."))
	float BaseWalkSpd;
	UPROPERTY(EditAnywhere, Category = "Character", meta = (ToolTip = "Aim walk speed of a character when a weapon is equipped."))
	float AimWalkSpd;
	// add a FName for SecondaryThrowHand, just in case we have a dual wield or something

	//
	// Weapon Properties
	//
	UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon)
	AWeapon* EquippedWeapon;
	UPROPERTY(ReplicatedUsing = OnRep_EquippedSecondaryWeapon)
	AWeapon* EquippedSecondaryWeapon;
	UPROPERTY(EditAnywhere, Category = "Character", meta = (ToolTip = "Checks if a character spawns in with a default weapon."))
	bool bSpawnWithDefaultWeapon = false;
	UPROPERTY(EditAnywhere, Category = "Character", meta = (ToolTip = "Default weapon a character spawns in with."))
	TSubclassOf<AWeapon> DefaultWeaponClass;

	bool bAimButtonPressed = false;
	UPROPERTY(ReplicatedUsing = OnRep_Aiming)
	bool bAiming;
	bool bFireButtonPressed;
	FTimerHandle FireTimer;
	bool bCanFire = true;

	void StartFireTimer();
	void EndFireTimer();
	bool CanFire();

	UFUNCTION()
	void OnRep_Aiming();

	//
	// Ammo Properties
	//
	UPROPERTY(ReplicatedUsing = OnRep_CarriedAmmo)
	int32 CarriedAmmo;
	// couldn't map TMaps in 4, but this saves on all the initializing
	UPROPERTY(EditDefaultsOnly, Category = "Ammo", meta = (ToolTip = "Amount of ammo at start for a weapon."))
	TMap<EWeaponType, int32> CarriedAmmoMap;
	// could be a max for each type, but this is a total
	UPROPERTY(EditAnywhere, Category = "Ammo", meta = (ToolTip = "Max amount of ammo that can be carried."))
	int32 MaxCarriedAmmo = 500;
	//UPROPERTY(ReplicatedUsing = OnRep_CarriedThrowableAmmo)
	//int32 CarriedThrowableAmmo;
	//UPROPERTY(EditDefaultsOnly, Category = "Ammo", meta = (ToolTip = "Amount of ammo at start for a throwable weapon."))
	//TMap <EThrowableWeaponType, int32 > CarriedThrowableAmmoMap;
	//UPROPERTY(EditAnywhere, Category = "Ammo", meta = (ToolTip = "Max amount of ammo that can be carried."))
	//int32 MaxCarriedThrowableAmmo = 200;

	void UpdateAmmoValues();
	void UpdateShotgunAmmoValues();
	//void UpdateThrowableAmmoValues();

	UFUNCTION()
	void OnRep_CarriedAmmo();
	/*UFUNCTION()
	void OnRep_CarriedThrowableAmmo();*/

	//
	// Throwable Weapon
	//
	UPROPERTY(ReplicatedUsing = OnRep_EquippedThrowableWeapon)
	class AThrowableWeapon* EquippedThrowableWeapon;
	bool bThrowable = false;
	//bool bThrowButtonPressed;
	//FTimerHandle ThrowTimer;
	//bool bCanThrow = true;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Throwable classes available to equip."))
	TArray<TSubclassOf<class AThrowableWeapon>> ThrowableClasses;

	/*void StartThrowTimer();
	void EndThrowTimer();*/
	//bool CanThrow();


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

	//
	// Aiming & FoV
	//
	float DefaultFOV;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Amount the FOV is zoomed in when aiming."))
	float ZoomedFOV = 30.f;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Speed at which a weapon is zoomed in when aiming."))
	float ZoomedInterpSpeed = 20.f;
	float CurrentFOV;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Target amount to zoom in when aiming."))
	float AimFactor = 0.58f;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Target amount to zoom in when shooting."))
	float ShootingFactor = 0.75f;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Target amount to zoom in when aiming at a character."))
	float AimAtCharacterFactor = 0.25f;
	bool bAimingAtCharacter;

	void InterpFOV(float DeltaTime);

	//
	// Weapons
	//
	UPROPERTY(EditAnywhere, Category = "Weapon", meta = (ToolTip = "Sound to make while zooming in with a sniper weapon."))
	class USoundCue* ZoomInSniperRifle;
	UPROPERTY(EditAnywhere, Category = "Weapon", meta = (ToolTip = "Sound to make while zooming out with a sniper weapon."))
	USoundCue* ZoomOutSniperRifle;

public:	
	/*FORCEINLINE int32 GetThrowables() const { return Throwables; }*/
	bool ShouldSwapWeapons();

};
