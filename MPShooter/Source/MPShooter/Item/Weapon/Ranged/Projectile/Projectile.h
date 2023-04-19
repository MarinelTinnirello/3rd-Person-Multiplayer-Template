// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MPShooter/Item/Weapon/HitActor.h"
#include "Projectile.generated.h"

UCLASS()
class MPSHOOTER_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	//
	// Projectile Properties
	//
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Amount of damage each projectile deals to whatever it hits."))
	float Damage = 20.f;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Amount of speed each projectile initially starts at. This will also set the MaxSpeed to be equal, although this can be changed in the ProjectileMovement properties."))
	float InitialSpeed = 15000;

	//
	// Server-Side Rewind
	//
	bool bUseServerSideRewind = false;
	FVector_NetQuantize TraceStart;
	FVector_NetQuantize100 InitialVelocity;

	AProjectile();
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual float GetCollisionSphereRadius();

protected:
	//
	// Projectile Properties
	//
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Particles that play on impact with the environment."))
	class UParticleSystem* ImpactParticles;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Sound that plays on impact with the environment."))
	class USoundCue* ImpactSound;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Particles that play on impact with a character."))
	UParticleSystem* ImpactCharacterParticles;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Sound that plays on impact with a character."))
	USoundCue* ImpactCharacterSound;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Material decal that spawns on impact with the environment."))
	class UMaterialInterface* ImpactDecalMaterial;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Size of the material decal."))
	FVector DecalSize = FVector(16.f, 16.f, 16.f);
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Life span of the material decal."))
	float DecalLifeSpan = 10.f;

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

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSpawnMaterialDecal(const FHitResult& Hit);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnHit(EHitActor HitActorType);
	UFUNCTION(NetMulticast, Reliable)
	void MulticastSpawnMaterialDecal(const FHitResult& Hit);

	virtual void ActorHitType(EHitActor HitActorType);
	void StartDestroyTimer();
	void DestroyTimerFinished();
	void SpawnTrailSystem();
	void ExplodeDamage();

private:
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

};
