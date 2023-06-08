// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MPShooter/Item/Item.h"
#include "MPShooter/MPTypes/WeaponTypes.h"
#include "Weapon.generated.h"

USTRUCT(BlueprintType)
struct FWeaponProperties
{
	GENERATED_BODY()

	//
	// Item Properties
	// 
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Item properties of a weapon."))
	FItemProperties ItemProperties;

	//
	// Crosshairs
	//
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Image for the center of a crosshair."))
	class UTexture2D* CrosshairsCenter;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Image for the right of a crosshair."))
	UTexture2D* CrosshairsRight;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Image for the left of a crosshair."))
	UTexture2D* CrosshairsLeft;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Image for the top of a crosshair."))
	UTexture2D* CrosshairsTop;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Image for the bottom of a crosshair."))
	UTexture2D* CrosshairsBottom;

	//
	// Zoom & FoV
	//
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Amount the FOV is zoomed in when aiming."))
	float ZoomedFOV = 30.f;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Speed at which a weapon is zoomed in when aiming."))
	float ZoomedInterpSpeed = 20.f;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Whether or not to use a zoomed screen overlay."))
	bool bUseSniperZoomedOverlay = false;

	//
	// Automatic Fire
	//
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Cooldown in between firing a weapon."))
	float FireDelay = 0.15f;
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Checks if a weapon is automatic."))
	bool bAutomatic = true;
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Checks if a weapon uses scatter."))
	bool bUseScatter = false;

	//
	// Weapon Properties
	//
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks if the weapon has an attachment affected by physics (ex: strap, chain, charm, etc.)."))
	bool bHasPhysicsAttachment = false;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties  - Ranged", meta = (ToolTip = "Muzzle socket name on a weapon."))
	FName MuzzleFlash = "MuzzleFlash";
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Damage dealt by the weapon."))
	float Damage = 20.f;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Damage dealt by the weapon if hit on the head."))
	float HeadShotDamage = 40.f;

	//
	// Weapon Scatter
	//
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Distance from the sphere where the weapon scatters."))
	float DistanceToSphere = 800.f;
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Radius around sphere where the weapon scatters."))
	float SphereRadius = 75.f;

	//
	// Networking
	//
	UPROPERTY(EditAnywhere, Category = "Networking", meta = (ToolTip = "Checks to see if the weapon should use Server-Side Rewind."))
	bool bUseServerSideRewind = false;

	// 
	// Weapon Properties
	//
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Type of weapon."))
	EWeaponType WeaponType;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Type of weapon firing for LocalFire() handling, based on the parent class of the weapon (lag compensation)."))
	EFireType FireType;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks if the weapon should attach to the right or left hand. Most animations (particularly for 2-handed weapons) are right-handed, so the default will be 'true'."))
	bool bAttachToRightHand = true;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks if the weapon is double-handed."))
	bool bDoubleHanded = true;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks if the weapon is dual-wielded."))
	bool bDualWield = false;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Animation played when a weapon is fired."))
	class UAnimationAsset* FireAnimation;

	// 
	// Weapon Properties - Ranged
	//
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Name of the section in the reload montage of a given weapon."))
	FName WeaponTypeReloadMontageSection;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Casing shell for a weapon."))
	TSubclassOf<class ACasing> CasingClass;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Ammo eject socket on a weapon."))
	FName AmmoEject = "AmmoEject";
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Amount of ammo in a weapon."))
	int32 Ammo;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Max capacity in a weapon's magazine."))
	int32 MagCapacity;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Icon of a weapon's ammo in the inventory."))
	class UTexture2D* AmmoIcon;
};

UCLASS()
class MPSHOOTER_API AWeapon : public AItem
{
	GENERATED_BODY()
	
public:	
	//
	// Crosshairs
	//
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Image for the center of a crosshair."))
	class UTexture2D* CrosshairsCenter;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Image for the right of a crosshair."))
	UTexture2D* CrosshairsRight;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Image for the left of a crosshair."))
	UTexture2D* CrosshairsLeft;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Image for the top of a crosshair."))
	UTexture2D* CrosshairsTop;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Image for the bottom of a crosshair."))
	UTexture2D* CrosshairsBottom;

	//
	// Zoom & FoV
	//
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Amount the FOV is zoomed in when aiming."))
	float ZoomedFOV = 30.f;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Speed at which a weapon is zoomed in when aiming."))
	float ZoomedInterpSpeed = 20.f;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Whether or not to use a zoomed screen overlay."))
	bool bUseSniperZoomedOverlay = false;

	//
	// Automatic Fire
	//
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Cooldown in between firing a weapon."))
	float FireDelay = 0.15f;
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Checks if a weapon is automatic."))
	bool bAutomatic = true;
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Checks if a weapon uses scatter."))
	bool bUseScatter = false;

	bool bDestroyWeapon = false;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnRep_Owner() override;

	virtual void Fire(const FVector& HitTarget);
	virtual void FireMulti(const TArray<FVector_NetQuantize>& HitTargets);
	virtual void MultiTraceEndWithScatter(const FVector& HitTarget, TArray<FVector_NetQuantize>& HitTargets);
	virtual void Dropped();

	void SetHUDAmmo();
	void AddAmmo(int32 AmmoToAdd);
	FVector TraceEndWithScatter(const FVector& HitTarget);

protected:
	//
	// Character Properties
	//
	UPROPERTY()
	class AMPCharacter* MPOwnerCharacter;
	UPROPERTY()
	class AMPPlayerController* MPOwnerController;

	//
	// Weapon Properties
	//
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks if the weapon has an attachment affected by physics (ex: strap, chain, charm, etc.)."))
	bool bHasPhysicsAttachment = false;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties  - Ranged", meta = (ToolTip = "Muzzle socket name on a weapon."))
	FName MuzzleFlash = "MuzzleFlash";
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Damage dealt by the weapon."))
	float Damage = 20.f;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Damage dealt by the weapon if hit on the head."))
	float HeadShotDamage = 40.f;

	//
	// Weapon Scatter
	//
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Distance from the sphere where the weapon scatters."))
	float DistanceToSphere = 800.f;
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Radius around sphere where the weapon scatters."))
	float SphereRadius = 75.f;

	//
	// Networking
	//
	UPROPERTY(EditAnywhere, Replicated, Category = "Networking", meta = (ToolTip = "Checks to see if the weapon should use Server-Side Rewind."))
	bool bUseServerSideRewind = false;

	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	) override;
	virtual void OnSphereEndOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndex
	) override;

	virtual void OnEquipped();
	virtual void OnEquippedWeaponType();
	virtual void OnEquippedSecondary();
	virtual void OnDropped();

	UFUNCTION()
	void OnPingTooHigh(bool bPingTooHigh);

private:
	// 
	// Weapon Properties
	//
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Type of weapon."))
	EWeaponType WeaponType;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Type of weapon firing for LocalFire() handling, based on the parent class of the weapon (lag compensation)."))
	EFireType FireType;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks if the weapon should attach to the right or left hand. Most animations (particularly for 2-handed weapons) are right-handed, so the default will be 'true'."))
	bool bAttachToRightHand = true;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks if the weapon is double-handed."))
	bool bDoubleHanded = true;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks if the weapon is dual-wielded."))
	bool bDualWield = false;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Animation played when a weapon is fired."))
	class UAnimationAsset* FireAnimation;

	// 
	// Weapon Properties - Ranged
	//
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Name of the section in the reload montage of a given weapon."))
	FName WeaponTypeReloadMontageSection;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Casing shell for a weapon."))
	TSubclassOf<class ACasing> CasingClass;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Ammo eject socket on a weapon."))
	FName AmmoEject = "AmmoEject";
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Amount of ammo in a weapon."))
	int32 Ammo;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Max capacity in a weapon's magazine."))
	int32 MagCapacity;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Icon of a weapon's ammo in the inventory."))
	class UTexture2D* AmmoIcon;

	// The number of unprocessed server requests for Ammo.
	// Incremented in SpendRound, decremented in ClientUpdateAmmo.
	int32 Sequence = 0;

	void SpendRound();

	UFUNCTION(Client, Reliable)
	void ClientUpdateAmmo(int32 ServerAmmo);
	UFUNCTION(Client, Reliable)
	void ClientAddAmmo(int32 AmmoToAdd);

public:
	// 
	// Weapon Properties
	//
	FORCEINLINE EWeaponType GetWeaponType() const { return WeaponType; }
	FORCEINLINE EFireType GetFireType() const { return FireType; }
	FORCEINLINE float GetDamage() const { return Damage; }
	FORCEINLINE float GetHeadShotDamage() const { return HeadShotDamage; }
	bool IsAttachedToRightHand();
	bool IsDoubleHanded();
	bool IsDualWield();

	FORCEINLINE float GetZoomedFOV() const { return ZoomedFOV; }
	FORCEINLINE float GetZoomedInterpSpeed() const { return ZoomedInterpSpeed; }

	// 
	// Weapon Properties - Ranged
	//
	FORCEINLINE FName GetWeaponTypeReloadMontageSection() const { return WeaponTypeReloadMontageSection; }
	FORCEINLINE int32 GetAmmo() const { return Ammo; }
	FORCEINLINE int32 GetMagCapacity() const { return MagCapacity; }
	void SetAmmoIcon(UTexture2D* Icon) { AmmoIcon = Icon; }
	bool IsMagEmpty();
	bool IsMagFull();

};
