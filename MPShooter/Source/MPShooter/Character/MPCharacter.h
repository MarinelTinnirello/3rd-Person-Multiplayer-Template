// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/Character.h"
#include "Components/TimelineComponent.h"
#include "MPShooter/MPTypes/TurningInPlace.h"
#include "MPShooter/MPTypes/CombatState.h"
#include "MPShooter/MPTypes/Team.h"
#include "MPShooter/Interfaces/InteractWithCrosshairsInterface.h"
#include "MPCharacter.generated.h"

#pragma region Forward Declarations
class AMPPlayerController;
class AMPPlayerState;
class AMPShooterGameMode;
class USpringArmComponent;
class UCameraComponent;
class UWidgetComponent;
class UInputMappingContext;
class UMPInputConfigData;
class USoundCue;
class UParticleSystem;
class UParticleSystemComponent;
class UNiagaraSystem;
class UNiagaraComponent;
class UBoxComponent;
class UCapsuleComponent;
class AWeapon;
class UCombatComponent;
class UBuffComponent;
class ULagComponent;
class UAnimMontage;
class UStaticMeshComponent;
class UDecalComponent;
class USplineComponent;
#pragma endregion

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

	bool bEquipButtonPressed = false;
	bool bThrowButtonPressed = false;
	#pragma endregion

	#pragma region Surfaces
	//
	// Surfaces
	//
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Surface", meta = (ToolTip = "Sound that plays when a character walks on different physical surface materials."))
	TMap<TEnumAsByte<EPhysicalSurface>, USoundCue*> SurfaceSoundMap;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Surface", meta = (ToolTip = "Particles made by a character walking on different physical surface materials. Can use instead of the Niagara particles."))
	TMap<TEnumAsByte<EPhysicalSurface>, UParticleSystem*> SurfaceParticleMap;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Surface", meta = (ToolTip = "Particles made by a character walking on different physical surface materials. Can use instead of the regular particles."))
	TMap<TEnumAsByte<EPhysicalSurface>, UNiagaraSystem*> SurfaceNiagaraParticleMap;
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
	TMap<FName, UBoxComponent*> HitCollisionBoxes;
	UPROPERTY()
	TMap<FName, UCapsuleComponent*> HitCollisionCapsules;
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
	void SetTeamColor(ETeam Team);

	void SpawnDefaultWeapon();
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
	UInputMappingContext* InputMapping;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
	UMPInputConfigData* InputActions;
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
	#pragma region References
	AMPShooterGameMode* MPShooterGameMode;
	#pragma endregion

	#pragma region Character Properties
	//
	// Character Properties
	//
	UPROPERTY()
	AMPPlayerController* MPPlayerController;
	UPROPERTY()
	AMPPlayerState* MPPlayerState;
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	UCameraComponent* FollowCamera;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Displays information above character."))
	UWidgetComponent* OverheadWidget;
	#pragma endregion

	#pragma region Weapon Properties
	//
	// Weapon Properties
	//
	UPROPERTY(ReplicatedUsing = OnRep_OverlappingWeapon)
	AWeapon* OverlappingWeapon;

	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Checks if a character spawns in with a default weapon."))
	bool bSpawnWithDefaultWeapon = false;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Default weapon a character spawns in with."))
	TSubclassOf<AWeapon> DefaultWeaponClass;

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

	#pragma region Throwable Properties
	//
	// Throwable Properties
	//
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AttachedThrowable;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* AimRangeGridSphere;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	UDecalComponent* AimDecal;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	USplineComponent* AimPathSpline;
	#pragma endregion

	#pragma region Components
	//
	// Components
	//
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Handles logic to anything related to combat."))
	UCombatComponent* Combat;
	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "Handles logic to anything related to buffs."))
	UBuffComponent* Buff;
	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "Handles logic to anything related to lag compensation."))
	ULagComponent* LagCompensation;
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
	UAnimMontage* EquipMontage;
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
	UPROPERTY(EditDefaultsOnly, Category = "Character Stats - Eliminated", meta = (ToolTip = "Amount of time before respawn."))
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
	UPROPERTY(EditAnywhere, Category = "Character Stats - Eliminated", meta = (ToolTip = "Curve of a timeline where an eliminated character is dissolved."))
	UCurveFloat* DissolveCurve;
	UPROPERTY(EditAnywhere, Category = "Character Stats - Eliminated", meta = (ToolTip = "Parameter name of the curve."))
	FName DissolveCurveParam = "Dissolve";
	UPROPERTY(VisibleAnywhere, Category = "Character Stats - Eliminated", meta = (ToolTip = "Material for when an eliminated character is dissolved."))
	TArray<UMaterialInstance*> DissolveMaterialInstance;
	UPROPERTY(VisibleAnywhere, Category = "Character Stats - Eliminated", meta = (ToolTip = "Dynamic instanced material (made at runtime) for when an eliminated character is dissolved."))
	TArray<UMaterialInstanceDynamic*> DynamicDissolveMaterialInstance;

	void StartDissolve();
	UFUNCTION()
	void UpdateDissolveMaterial(float DissolveValue);
	#pragma endregion

	#pragma region Elimination Effects
	//
	// Elimination Effects
	//
	UPROPERTY(EditAnywhere, Category = "Character Stats - Eliminated", meta = (ToolTip = "Particle system generated on elimination."))
	UParticleSystem* EliminateFX;
	UPROPERTY(VisibleAnywhere, Category = "Character Stats - Eliminated", meta = (ToolTip = "Particle system component generated on elimination."))
	UParticleSystemComponent* EliminateComponent;
	UPROPERTY(EditAnywhere, Category = "Character Stats - Eliminated", meta = (ToolTip = "Sound effect played on elimination."))
	USoundCue* EliminateSFX;
	UPROPERTY(EditAnywhere, Category = "Character Stats - Eliminated", meta = (ToolTip = "Particle system generated when character takes the lead."))
	UNiagaraSystem* CrownSystem;
	UPROPERTY()
	UNiagaraComponent* CrownComponent;
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

	#pragma region Team Colors
	//
	// Team Colors
	//
	UPROPERTY(EditAnywhere, Category = "Character Stats - Team Colors", meta = (ToolTip = "Material instance of character's team color."))
	//TArray<UMaterialInstance*> TeamColors;
	TArray<FTeamColorInformation> TeamColors;
	UPROPERTY(EditAnywhere, Category = "Character Stats - Team Colors", meta = (ToolTip = "Material instance of character's team color for the dissolve effect."))
	//TArray<UMaterialInstance*> TeamColorsDissolve;
	TArray<FTeamColorInformation> TeamColorsDissolve;

	void SetTeamColorMaterial(FTeamColorInformation TeamColorInfo, int Element, FLinearColor Color, bool bSetMesh);
	#pragma endregion

	#pragma endregion

	#pragma region Networking
	//
	// Networking
	//
	bool bLeftGame = false;
	#pragma endregion

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

	#pragma region Throwable
	FORCEINLINE UStaticMeshComponent* GetAttachedThrowable() const { return AttachedThrowable; }
	FORCEINLINE UStaticMeshComponent* GetAimRangeGridSphere() const { return AimRangeGridSphere; }
	FORCEINLINE UDecalComponent* GetAimDecal() const { return AimDecal; }
	FORCEINLINE USplineComponent* GetAimPathSpline() const { return AimPathSpline; }
	#pragma endregion

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
