// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MPShooter/Item/Item.h"
#include "MPShooter/Item/Weapon/WeaponTypes.h"
#include "MPShooter/Item/Weapon/HitActor.h"
#include "ThrowableWeapon.generated.h"

UCLASS()
class MPSHOOTER_API AThrowableWeapon : public AItem
{
	GENERATED_BODY()
	
public:
	//
	// Automatic Fire
	//
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Cooldown in between firing a weapon."))
	float FireDelay = 0.15f;

	AThrowableWeapon();
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnRep_Owner() override;

	virtual void Dropped();
	virtual void OnSpawn();

	void SpendRound();
	void SetHUDAmmo();
	void AddAmmo(int32 AmmoToAdd);

protected:
	//
	// Projectile Properties
	//
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Amount of damage each projectile deals to whatever it hits."))
	float Damage = 20.f;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Particles that play on impact with the environment."))
	class UParticleSystem* ImpactParticles;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Sound that plays on impact with the environment."))
	class USoundCue* ImpactSound;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Particles that play on impact with a character."))
	UParticleSystem* ImpactCharacterParticles;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Sound that plays on impact with a character."))
	USoundCue* ImpactCharacterSound;

	UPROPERTY()
	class UNiagaraComponent* TrailSystemComponent;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Trail system component for the projectile."))
	class UNiagaraSystem* TrailSystem;
	UPROPERTY(VisibleAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Mesh component for the projectile."))
	UStaticMeshComponent* ProjectileMesh;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Minimum amount of damage applied to an actor from the falloff."))
	float MinimumDamageFromFalloff = 10.f;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Inner radius of damage for the applied actor."))
	float DamageInnerRadius = 200.f;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Outer radius of damage for the applied actor."))
	float DamageOuterRadius = 500.f;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* CollisionBox;
	UPROPERTY(Replicated)
	EHitActor HitActor;
	UPROPERTY(VisibleAnywhere)
	class UProjectileMovementComponent* ProjectileMovementComponent;

	virtual void BeginPlay() override;
	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
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

	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnHit(EHitActor HitActorType);

	virtual void OnEquipped();
	virtual void OnDropped();

	virtual void ActorHitType(EHitActor HitActorType);
	void StartDestroyTimer();
	void DestroyTimerFinished();
	void SpawnTrailSystem();
	void ExplodeDamage();

private:
	// 
	// Weapon Properties
	//
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Type of weapon."))
	EThrowableWeaponType ThrowableWeaponType;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "Animation played when a weapon is fired."))
	class UAnimationAsset* FireAnimation;

	// 
	// Weapon Properties - Ranged
	//
	UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_Ammo, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Amount of ammo in a weapon."))
	int32 Ammo;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Max capacity in a weapon's magazine."))
	int32 MagCapacity;
	UPROPERTY(EditAnywhere, Category = "Weapon Properties - Ranged", meta = (ToolTip = "Icon of a weapon's ammo in the inventory."))
	class UTexture2D* AmmoIcon;

	UFUNCTION()
	void OnRep_Ammo();

	//
	// Projectile Properties
	//
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Tracer particles for a projectile."))
	UParticleSystem* Tracer;
	UPROPERTY()
	class UParticleSystemComponent* TracerComponent;
	FTimerHandle DestroyTimer;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Time until the projectile is destroyed."))
	float DestroyTime = 3.f;

	//
	// Character Properties
	//
	UPROPERTY()
	class AMPCharacter* MPOwnerCharacter;
	UPROPERTY()
	class AMPPlayerController* MPOwnerController;

public:
	// 
	// Weapon Properties
	//
	FORCEINLINE EThrowableWeaponType GetThrowableWeaponType() const { return ThrowableWeaponType; }
	FORCEINLINE int32 GetAmmo() const { return Ammo; }
	FORCEINLINE int32 GetMagCapacity() const { return MagCapacity; }
	void SetAmmoIcon(UTexture2D* Icon) { AmmoIcon = Icon; }
	bool IsMagEmpty();
	bool IsMagFull();

};
