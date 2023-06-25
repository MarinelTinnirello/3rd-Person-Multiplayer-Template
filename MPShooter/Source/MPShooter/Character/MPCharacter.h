// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/Character.h"
#include "Components/TimelineComponent.h"
#include "MPShooter/MPTypes/TurningInPlace.h"
#include "MPShooter/MPTypes/CombatState.h"
#include "MPShooter/Interfaces/InteractWithCrosshairsInterface.h"
#include "MPCharacter.generated.h"

#pragma region Class-based Enums & Structs
#pragma region Physics Assets
UENUM(BlueprintType)
enum class EPhysAssetCollision : uint8
{
	EPAC_Box UMETA(DisplayName = "Box"),
	EPAC_Sphere UMETA(DisplayName = "Sphere"),
	EPAC_Convex UMETA(DisplayName = "Convex"),
	EPAC_TaperedCapsule UMETA(DisplayName = "Tapered Capsule"),

	EPAC_MAX UMETA(DisplayName = "DefaultMAX")
};

USTRUCT(BlueprintType)
struct FPhysAssetInformation
{
	GENERATED_BODY()

	UPROPERTY()
	EPhysAssetCollision CollisionType;
	UPROPERTY()
	FName BoneName;
	UPROPERTY()
	float HalfHeight;
	UPROPERTY()
	float Radius;
	UPROPERTY()
	FVector Extent;
	UPROPERTY()
	FTransform BoneLocalTransform;
	UPROPERTY()
	FTransform BoneWorldTransform;
};
#pragma endregion

#pragma endregion

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeftGame);

UCLASS()
class MPSHOOTER_API AMPCharacter : public ACharacter, public IInteractWithCrosshairsInterface
{
	GENERATED_BODY()

public:
	#pragma region Animation Checks
	//
	// Animation Checks
	//
	UPROPERTY(Replicated)
	bool bDisableGameplay = false;
	bool bFinishedSwapping = false;
	bool bFinishedEquipping = false;
	#pragma endregion

	#pragma region Surfaces
	//
	// Surfaces
	//
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Surface", meta = (ToolTip = "Sound that plays when a character walks on different physical surface materials."))
	TMap<TEnumAsByte<EPhysicalSurface>, class USoundCue*> SurfaceSoundMap;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Surface", meta = (ToolTip = "Particles made by a character walking on different physical surface materials."))
	TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> SurfaceParticleMap;
	// Change Particle System into Niagara one (do it when you convert the AnimNotify into C++)
	#pragma endregion

	#pragma region Hit Boxes
	//
	// Hit Boxes
	// (for server-side rewind)
	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPhysAssetInformation> PhysAssetInfo;
	UPROPERTY(EditAnywhere, Category = "DEBUG", meta = (ToolTip = "Checks whether or not to draw the meshes' physics assets."))
	bool bDrawPhysAssets = false;
	UPROPERTY()
	TMap<FName, class UBoxComponent*> HitCollisionBoxes;
	UPROPERTY()
	TMap<FName, class UCapsuleComponent*> HitCollisionCapsules;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DEBUG", meta = (ToolTip = "Checks whether or not to draw the capsule components derirved from the meshes' physics assets."))
	TArray<UCapsuleComponent*> hitCapsuleBones;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DEBUG", meta = (ToolTip = "Checks whether or not to draw the box components derirved from the meshes' physics assets."))
	TArray<UBoxComponent*> hitBoxBones;
	#pragma endregion

	#pragma region Constructor & Engine Overrides
	AMPCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PostInitializeComponents() override;
	virtual void Destroyed() override;

	#pragma region OnRep
	virtual void OnRep_ReplicatedMovement() override;
	#pragma endregion

	#pragma endregion

	#pragma region Play Montages
	void PlayEquipMontage(const FName& SectionName);
	void PlayFireMontage(bool bIsAiming);
	void PlayReloadMontage();
	void PlaySwapMontage();
	void PlayThrowMontage();
	void PlayEliminateMontage();
	#pragma endregion

	#pragma region Character Status & Stats
	void DirectionalHitReact(const FVector& ImpactPoint);
	void Eliminated(bool bPlayerLeftGame);
	void UpdateHUDHealth();
	void UpdateHUDShield();
	void UpdateHUDAmmo();

	#pragma region Multicast
	UFUNCTION(NetMulticast, Reliable)
	void MulticastEliminated(bool bPlayerLeftGame);
	UFUNCTION(NetMulticast, Reliable)
	void MulticastGainedTheLead();
	UFUNCTION(NetMulticast, Reliable)
	void MulticastLostTheLead();
	#pragma endregion

	#pragma region Server
	FOnLeftGame OnLeftGame;

	UFUNCTION(Server, Reliable)
	void ServerLeaveGame();
	#pragma endregion

	#pragma endregion

protected:
	#pragma region Enhanced Input
	//
	// Enhanced Input
	//
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	class UInputMappingContext* InputMapping;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	class UMPInputConfigData* InputActions;
	#pragma endregion

	#pragma region Engine Overrides
	virtual void BeginPlay() override;
	#pragma endregion

	#pragma region Initialize
	void PollInit();
	#pragma endregion

	#pragma region Actions
	#pragma region Mouse and Stick
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	#pragma endregion

	#pragma region Button Presses
	virtual void Jump() override;
	void EquipButtonPressed();
	void UnequipButtonPressed();
	void CrouchButtonPressed();
	void FireButtonPressed();
	void FireButtonReleased();
	void ReloadButtonPressed();
	void AimButtonPressed();
	void AimButtonReleased();
	void ThrowButtonPressed();
	void ThrowButtonReleased();
	void ViewChatBoxButtonPressed();
	void QuitButtonPressed();
	void WeaponWheelButtonPressed();
	void WeaponWheelButtonReleased();
	#pragma endregion

	#pragma region Animation
	void AimOffset(float DeltaTime);
	void CalculateAO_Pitch();
	float CalculateSpeed();
	void SimProxiesTurn();
	void RotateInPlace(float DeltaTime);
	#pragma endregion

	#pragma endregion

	#pragma region Character Status & Stats
	void PlayHitReactMontage(const FName& SectionName);
	UFUNCTION()
	void ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, class AController* InstigatorController, AActor* DamageCauser);
	#pragma endregion

	#pragma region Drop Items
	void DropOrDestroyWeapon(AWeapon* Weapon);
	void DropOrDestroyWeapons();
	#pragma endregion

	#pragma region Physics Assets
	void HitPhysAssetConstruction();
	void SetupHitPhysAsset(FPhysAssetInformation physicsAssetInfo);
	void DrawHitPhysAsset();
	#pragma endregion

private:
	#pragma region Character Properties
	//
	// Character Properties
	//
	UPROPERTY()
	class AMPPlayerController* MPPlayerController;
	UPROPERTY()
	class AMPPlayerState* MPPlayerState;
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	class UCameraComponent* FollowCamera;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Displays information above character."))
	class UWidgetComponent* OverheadWidget;
	#pragma endregion

	#pragma region Weapon Properties
	//
	// Weapon Properties
	//
	UPROPERTY(ReplicatedUsing = OnRep_OverlappingWeapon)
	class AWeapon* OverlappingWeapon;

	#pragma region OnRep
	UFUNCTION()
	void OnRep_OverlappingWeapon(AWeapon* PrevWeapon);
	#pragma endregion

	#pragma region Server
	UFUNCTION(Server, Reliable)
	void ServerEquipButtonPressed();
	UFUNCTION(Server, Reliable)
	void ServerUnequipButtonPressed();
	#pragma endregion

	#pragma endregion

	#pragma region Components
	//
	// Components
	//
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Handles logic to anything related to combat."))
	class UCombatComponent* Combat;
	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "Handles logic to anything related to buffs."))
	class UBuffComponent* Buff;
	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "Handles logic to anything related to lag compensation."))
	class ULagComponent* LagCompensation;
	#pragma endregion

	#pragma region Animation
	//
	// Animation
	//
	float AO_Yaw;
	float InterpAO_Yaw;
	float AO_Pitch;
	FRotator StartAimRotation;
	ETurningInPlace TurningInPlace;
	bool bRotateRootBone;
	float TurnThreshold = 0.5f;
	FRotator ProxyRotationPrevFrame;
	FRotator ProxyRotation;
	float ProxyYaw;
	float TimeSincePrevMovementReplication;
	UPROPERTY(EditAnywhere, Category = "Camera", meta = (ToolTip = "Amount before the character mesh is set invisible."))
	float CameraThreshold = 200.f;

	void TurnInPlace(float DeltaTime);
	void HideCameraIfCharacterIsClose();
	#pragma endregion

	#pragma region Montages
	//
	// Montages
	//
	UPROPERTY(EditAnywhere, Category = "Combat - Animation", meta = (ToolTip = "Montage that plays if a character equips or unequips a weapon."))
	class UAnimMontage* EquipMontage;
	UPROPERTY(EditAnywhere, Category = "Combat - Animation", meta = (ToolTip = "Montage that plays if a character is swapping a weapon."))
	UAnimMontage* SwapMontage;
	UPROPERTY(EditAnywhere, Category = "Combat - Animation", meta = (ToolTip = "Montage that plays if a character is hit."))
	UAnimMontage* HitReactMontage;
	UPROPERTY(EditAnywhere, Category = "Combat - Animation", meta = (ToolTip = "Montage that plays if a character is throwing a throwable."))
	UAnimMontage* ThrowMontage;
	UPROPERTY(EditAnywhere, Category = "Combat - Animation", meta = (ToolTip = "Montage that plays if a character is eliminated."))
	UAnimMontage* EliminateMontage;
	#pragma endregion

	#pragma region Character Stats
	#pragma region Health
	//
	// Health
	//
	UPROPERTY(EditAnywhere, Category = "Character Stats", meta = (ToolTip = "Max amount of HP a character has."))
	float MaxHealth = 100.f;
	UPROPERTY(VisibleAnywhere, Category = "Character Stats", ReplicatedUsing = OnRep_Health, meta = (ToolTip = "Percentage of HP a character has."))
	float Health = 100.f;
	bool bEliminated = false;
	FTimerHandle EliminateTimer;
	UPROPERTY(EditDefaultsOnly, Category = "Eliminated", meta = (ToolTip = "Amount of time before respawn."))
	float EliminateDelay = 3.f;

	void EliminateTimerFinished();

	#pragma region OnRep
	UFUNCTION()
	void OnRep_Health(float LastHealth);
	#pragma endregion

	#pragma region Elimination
	#pragma region Dissolve Effects
	//
	// Dissolve Effect
	//
	UPROPERTY(VisibleAnywhere)
	UTimelineComponent* DissolveTimeline;
	FOnTimelineFloat DissolveTrack;
	UPROPERTY(EditAnywhere, Category = "Eliminated", meta = (ToolTip = "Curve of a timeline where an eliminated character is dissolved."))
	UCurveFloat* DissolveCurve;
	UPROPERTY(EditAnywhere, Category = "Eliminated", meta = (ToolTip = "Material for when an eliminated character is dissolved."))
	UMaterialInstance* DissolveMaterialInstance;
	UPROPERTY(VisibleAnywhere, Category = "Eliminated", meta = (ToolTip = "Dynamic instanced material (made at runtime) for when an eliminated character is dissolved."))
	UMaterialInstanceDynamic* DynamicDissolveMaterialInstance;

	void StartDissolve();
	UFUNCTION()
	void UpdateDissolveMaterial(float DissolveValue);
	#pragma endregion

	#pragma region Elimination Effects
	//
	// Elimination Effects
	//
	UPROPERTY(EditAnywhere, Category = "Eliminated", meta = (ToolTip = "Particle system generated on elimination."))
	class UParticleSystem* EliminateFX;
	UPROPERTY(VisibleAnywhere, Category = "Eliminated", meta = (ToolTip = "Particle system component generated on elimination."))
	class UParticleSystemComponent* EliminateComponent;
	UPROPERTY(EditAnywhere, Category = "Eliminated", meta = (ToolTip = "Sound effect played on elimination."))
	class USoundCue* EliminateSFX;
	UPROPERTY(EditAnywhere, Category = "Eliminated", meta = (ToolTip = "Particle system generated when character takes the lead."))
	class UNiagaraSystem* CrownSystem;
	UPROPERTY()
	class UNiagaraComponent* CrownComponent;
	#pragma endregion

	#pragma endregion

	#pragma endregion

	#pragma region Shield
	//
	// Shield
	//
	UPROPERTY(EditAnywhere, Category = "Character Stats", meta = (ToolTip = "Max amount of SP a character has."))
	float MaxShield = 100.f;
	UPROPERTY(EditAnywhere, Category = "Character Stats", ReplicatedUsing = OnRep_Shield, meta = (ToolTip = "Percentage of SP a character has."))
	float Shield = 0.f;

	#pragma region OnRep
	UFUNCTION()
	void OnRep_Shield(float LastShield);
	#pragma endregion

	#pragma endregion

	#pragma endregion

	#pragma region Networking
	//
	// Networking
	//
	bool bLeftGame = false;
	#pragma endregion

	//
	// Throwable
	//
	/*UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AttachedThrowable;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Character's socket where the throwable item will be attached to the free hand. Most animation packs will be right handed, so the right hand is what you're likely to fill in."))
	FName ThrowableSocket;*/
	// Turn this into a Weapon
	// .... actually, turn it into an Item, as making it into a conventional weapon would mean dropping the current
	//		add a mesh and particle system component
	//		implement similar to Weapon (e.g. Ammo, Replication, etc)
	// .... might want to move the EWeaponState stuff out into the Item class
	//		write overrides as necessary (e.g. Equip(), Drop(), etc)
	// Make socket on Combat Component
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AttachedThrowable;

public:	
	#pragma region Equipped Weapon
	UFUNCTION(BlueprintCallable)
	AWeapon* GetEquippedWeapon();
	FVector GetHitTarget() const;
	void SetOverlappingWeapon(AWeapon* Weapon);
	bool IsWeaponEquipped();
	bool IsWeaponUnequipped();
	bool IsAiming();
	bool IsLocallyReloading();
	#pragma endregion

	FORCEINLINE UStaticMeshComponent* GetAttachedThrowable() const { return AttachedThrowable; }

	#pragma region Components & States
	ECombatState GetCombatState() const;
	ECharacterCombatState GetCharacterCombatState() const;
	FORCEINLINE UCombatComponent* GetCombat() const { return Combat; }
	FORCEINLINE UBuffComponent* GetBuff() const { return Buff; }
	FORCEINLINE ULagComponent* GetLagCompensation() const { return LagCompensation; }
	#pragma endregion

	#pragma region Surfaces
	UFUNCTION(BlueprintCallable)
	EPhysicalSurface GetSurfaceType();
	FORCEINLINE TMap<TEnumAsByte<EPhysicalSurface>, USoundCue*> GetSurfaceSoundMap() const { return SurfaceSoundMap; }
	FORCEINLINE TMap<TEnumAsByte<EPhysicalSurface>, UParticleSystem*> GetSurfaceParticleMap() const { return SurfaceParticleMap; }
	#pragma endregion

	#pragma region Animation
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE float GetAO_Yaw() const { return AO_Yaw; }
	FORCEINLINE float GetAO_Pitch() const { return AO_Pitch; }
	FORCEINLINE ETurningInPlace GetTurningInPlace() const { return TurningInPlace; }
	FORCEINLINE bool ShouldRotateRootBone() const { return bRotateRootBone; }
	#pragma endregion

	#pragma region Character Status & Stats
	FORCEINLINE float GetHealth() const { return Health; }
	FORCEINLINE void SetHealth(float Amount) { Health = Amount; }
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; }
	FORCEINLINE bool IsEliminated() const { return bEliminated; }
	FORCEINLINE float GetEliminateDelay() const { return EliminateDelay; }
	FORCEINLINE float GetShield() const { return Shield; }
	FORCEINLINE void SetShield(float Amount) { Shield = Amount; }
	FORCEINLINE float GetMaxShield() const { return MaxShield; }
	#pragma endregion

	#pragma region Input
	FORCEINLINE bool GetDisableGameplay() const { return bDisableGameplay; }
	FORCEINLINE UInputMappingContext* GetInputMapping() const { return InputMapping; }
	FORCEINLINE UMPInputConfigData* GetInputActions() const { return InputActions; }
	#pragma endregion

};
