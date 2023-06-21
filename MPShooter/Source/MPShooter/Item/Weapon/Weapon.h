// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MPShooter/Item/Item.h"
#include "MPShooter/MPTypes/WeaponTypes.h"
#include "MPShooter/MPTypes/HitActor.h"
#include "MPShooter/MPTypes/ActorAttachment.h"
#include "Weapon.generated.h"

#pragma region Structs
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
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Muzzle socket name on a weapon."))
	FName MuzzleFlash = "MuzzleFlash";
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Animation played when a weapon is fired."))
	class UAnimationAsset* FireAnimation;
	UPROPERTY(EditAnywhere, Category = "Combat - Animation", meta = (ToolTip = "Montage that plays if a character fires a weapon."))
	class UAnimMontage* FireWeaponMontage;
	UPROPERTY(EditAnywhere, Category = "Combat - Animation", meta = (ToolTip = "Names of sections in the montage."))
	TArray<FName> FireWeaponMontageSections;
	UPROPERTY(EditAnywhere, Category = "Combat - Animation - Ranged", meta = (ToolTip = "Montage that plays if a character is reloading a weapon."))
	UAnimMontage* ReloadWeaponMontage;
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
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks where the weapon should attach to when equipped, based on the weapon animations. Most animations use hands, so the hands sockets will likely be your picks. Particularly for 2-handed weapons, animations tend to be right-handed, so the default will be 'Right Hand'."))
	EWeaponAttachmentSocket EquippedWeaponSocket;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks where the weapon should attach to when unequipped."))
	EWeaponAttachmentSocket UnequippedWeaponSocket;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks how many hands the weapon uses, based on the weapon animations."))
	EWeaponLaterality WeaponHandiness;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks if the weapon should attach to the right or left hand. Most animations (particularly for 2-handed weapons) are right-handed, so the default will be 'true'."))
	bool bAttachToRightHand = true;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks if the weapon is double-handed."))
	bool bDoubleHanded = true;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks if the weapon is dual-wielded."))
	bool bDualWield = false;

	// 
	// Weapon Properties - Ranged
	//
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
#pragma endregion

UCLASS()
class MPSHOOTER_API AWeapon : public AItem
{
	GENERATED_BODY()
	
public:	
	#pragma region Crosshairs Properties
	#pragma region Crosshairs
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
	#pragma endregion

	#pragma region Zoom & FoV
	//
	// Zoom & FoV
	//
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Amount the FOV is zoomed in when aiming."))
	float ZoomedFOV = 30.f;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Speed at which a weapon is zoomed in when aiming."))
	float ZoomedInterpSpeed = 20.f;
	UPROPERTY(EditAnywhere, Category = "Crosshairs", meta = (ToolTip = "Whether or not to use a zoomed screen overlay."))
	bool bUseSniperZoomedOverlay = false;
	#pragma endregion

	#pragma endregion

	#pragma region Firing Properties
	//
	// Automatic Fire
	//
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Cooldown in between firing a weapon."))
	float FireDelay = 0.15f;
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Checks if a weapon is automatic."))
	bool bAutomatic = true;
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Checks if a weapon uses scatter."))
	bool bUseScatter = false;
	#pragma endregion

	bool bDestroyWeapon = false;

	#pragma region Engine Overrides
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
	#endif
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnRep_Owner() override;
	#pragma endregion

	#pragma region Overidden Actions & Overrideable Actions
	virtual void Fire(const FVector& HitTarget);
	virtual void FireMulti(const TArray<FVector_NetQuantize>& HitTargets);
	virtual void WeaponTraceHit(const FVector& TraceStart, const FVector& HitTarget, FHitResult& OutHit);
	virtual void MultiTraceEndWithScatter(const FVector& HitTarget, TArray<FVector_NetQuantize>& HitTargets);

	virtual void Dropped() override;
	#pragma endregion

	#pragma region Actions
	void SetHUDAmmo();
	void AddAmmo(int32 AmmoToAdd);
	FVector TraceEndWithScatter(const FVector& HitTarget);
	#pragma endregion

protected:
	#pragma region References
	//
	// Character Properties
	//
	UPROPERTY()
	class AMPCharacter* MPOwnerCharacter;
	UPROPERTY()
	class AMPPlayerController* MPOwnerController;
	#pragma endregion

	#pragma region Weapon Properties
	//
	// Weapon Properties
	//
	#pragma region Animation
	#pragma region Weapon Properties - Animation
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Animation", meta = (ToolTip = "Checks if the weapon has an attachment affected by physics (ex: strap, chain, charm, etc.)."))
	bool bHasPhysicsAttachment = false;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Animation - Ranged", meta = (ToolTip = "Muzzle socket name on a weapon."))
	FName MuzzleFlash = "MuzzleFlash";
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Animation", meta = (ToolTip = "Socket name for an equipped hand on a weapon. Basically, this is for if the weapon looks weird in play/animation and a new, custom socket is created."))
	FName OverrideEquipSocket = "";
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Animation", meta = (ToolTip = "Socket name for an unequipped hand on a weapon. Basically, this is for if the weapon looks weird in play/animation and a new, custom socket is created."))
	FName OverrideUnequipSocket = "";
	#pragma endregion

	#pragma region Combat - Animation
	UPROPERTY(EditAnywhere, Category = "Combat - Animation", meta = (ToolTip = "Animation played when a weapon is fired."))
	class UAnimationAsset* FireAnimation;
	UPROPERTY(EditAnywhere, Category = "Combat - Animation", meta = (ToolTip = "Montage that plays if a character fires a weapon."))
	class UAnimMontage* FireWeaponMontage;
	UPROPERTY(EditAnywhere, Category = "Combat - Animation", meta = (ToolTip = "Names of sections in the montage."))
	TArray<FName> FireWeaponMontageSections;
	UPROPERTY(EditAnywhere, Category = "Combat - Animation - Ranged", meta = (ToolTip = "Montage that plays if a character is reloading a weapon."))
	UAnimMontage* ReloadWeaponMontage;
	#pragma endregion

	#pragma endregion

	#pragma region Combat
	#pragma region Combat
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Damage dealt by the weapon."))
	float Damage = 20.f;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Damage dealt by the weapon if hit on the head."))
	float HeadShotDamage = 40.f;
	UPROPERTY(Replicated)
	EHitActor HitActor;
	#pragma endregion

	#pragma region Combat - Ranged
	//
	// Weapon Scatter
	//
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Distance from the sphere where the weapon scatters."))
	float DistanceToSphere = 800.f;
	UPROPERTY(EditAnywhere, Category = "Combat - Ranged", meta = (ToolTip = "Radius around sphere where the weapon scatters."))
	float SphereRadius = 75.f;
	#pragma endregion

	#pragma endregion

	#pragma endregion

	#pragma region Networking
	//
	// Networking
	//
	UPROPERTY(EditAnywhere, Replicated, Category = "Networking", meta = (ToolTip = "Checks to see if the weapon should use Server-Side Rewind."))
	bool bUseServerSideRewind = false;
	#pragma endregion

	#pragma region DEBUG
	//
	// DEBUG
	//
	UPROPERTY(EditAnywhere, Category = "DEBUG", meta = (ToolTip = "Checks whether or not to draw the hit collision."))
	bool bDrawHitCollision = false;
	#pragma endregion

	#pragma region Engine Overrides
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
	#pragma endregion

	#pragma region Overridden Actions & Overrideable Actions
	virtual void OnEquipped() override;
	virtual void OnEquippedSecondary() override;
	virtual void OnDropped() override;

	virtual void OnEquippedWeaponType();
	#pragma endregion

	#pragma region Networking
	UFUNCTION()
	void OnPingTooHigh(bool bPingTooHigh);
	#pragma endregion

private:
	#pragma region Weapon Properties
	#pragma region Weapon Properties
	// 
	// Weapon Properties
	//
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Type of weapon."))
	EWeaponType WeaponType;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Type of weapon firing for LocalFire() handling, based on the parent class of the weapon (lag compensation)."))
	EFireType FireType;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks where the weapon should attach to when equipped, based on the weapon animations. Most animations use hands, so the hands sockets will likely be your picks. Particularly for 2-handed weapons, animations tend to be right-handed, so the default will be 'Right Hand'."))
	EWeaponAttachmentSocket EquippedWeaponSocket;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks where the weapon should attach to when unequipped."))
	EWeaponAttachmentSocket UnequippedWeaponSocket;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Checks how many hands the weapon uses, based on the weapon animations."))
	EWeaponLaterality WeaponHandiness;
	#pragma endregion

	#pragma region Weapon Properties - Ranged
	// 
	// Weapon Properties - Ranged
	//
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

	#pragma region Client
	UFUNCTION(Client, Reliable)
	void ClientUpdateAmmo(int32 ServerAmmo);
	UFUNCTION(Client, Reliable)
	void ClientAddAmmo(int32 AmmoToAdd);
	#pragma endregion

	#pragma endregion

	#pragma endregion

public:
	#pragma region Weapon Properties
	#pragma region Weapon Properties
	#pragma region Weapon Properties
	// 
	// Weapon Properties
	//
	UFUNCTION(BlueprintCallable)
	FORCEINLINE EWeaponType GetWeaponType() const { return WeaponType; }
	FORCEINLINE EWeaponAttachmentSocket GetEquippedWeaponSocket() const { return EquippedWeaponSocket; }
	FORCEINLINE EWeaponAttachmentSocket GetUnequippedWeaponSocket() const { return UnequippedWeaponSocket; }
	FORCEINLINE EWeaponLaterality GetWeaponHandiness() const { return WeaponHandiness; }
	FORCEINLINE FName GetOverrideEquipSocket() const { return OverrideEquipSocket; }
	FORCEINLINE FName GetOverrideUnequipSocket() const { return OverrideUnequipSocket; }
	#pragma endregion

	#pragma region Combat
	FORCEINLINE EFireType GetFireType() const { return FireType; }
	FORCEINLINE float GetDamage() const { return Damage; }
	FORCEINLINE float GetHeadShotDamage() const { return HeadShotDamage; }
	#pragma endregion

	#pragma region Animation
	FORCEINLINE UAnimMontage* GetFireWeaponMontage() const { return FireWeaponMontage; }
	FORCEINLINE TArray<FName> GetFireWeaponMontageSections() const { return FireWeaponMontageSections; }
	#pragma endregion

	#pragma region Aiming & Zoomed FoV
	FORCEINLINE float GetZoomedFOV() const { return ZoomedFOV; }
	FORCEINLINE float GetZoomedInterpSpeed() const { return ZoomedInterpSpeed; }
	#pragma endregion

	#pragma endregion

	#pragma region Weapon Properties - Ranged
	// 
	// Weapon Properties - Ranged
	//
	FORCEINLINE int32 GetAmmo() const { return Ammo; }
	FORCEINLINE int32 GetMagCapacity() const { return MagCapacity; }
	FORCEINLINE UAnimMontage* GetReloadWeaponMontage() const { return ReloadWeaponMontage; }
	void SetAmmoIcon(UTexture2D* Icon) { AmmoIcon = Icon; }
	bool IsMagEmpty();
	bool IsMagFull();
	#pragma endregion

	#pragma endregion

};
