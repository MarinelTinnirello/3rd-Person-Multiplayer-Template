// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MPShooter/MPTypes/HitActor.h"
#include "MPShooter/Interfaces/HitActorInterface.h"
#include "Projectile.generated.h"

#pragma region Forward Declarations
class UNiagaraSystem;
class UNiagaraComponent;
class UStaticMeshComponent;
class UParticleSystem;
class UParticleSystemComponent;
class USoundCue;
class UMaterialInterface;
class UBoxComponent;
class UProjectileMovementComponent;
#pragma endregion

UCLASS()
class MPSHOOTER_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	#pragma region Projectile Properties
	//
	// Projectile Properties
	//
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Amount of damage each projectile deals to whatever it hits. Only needs to be set for things like grenades and rockets, since they're explosives."))
	float Damage = 20.f;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Amount of damage each projectile deals to whatever it hits. Doesn't need to be set for things like grenades and rockets, since they're explosives."))
	float HeadShotDamage = 40.f;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Amount of speed each projectile initially starts at. This will also set the MaxSpeed to be equal, although this can be changed in the ProjectileMovement properties."))
	float InitialSpeed = 15000.f;
	#pragma endregion

	#pragma region Server-Side Rewind
	//
	// Server-Side Rewind
	//
	bool bUseServerSideRewind = false;
	FVector_NetQuantize TraceStart;
	FVector_NetQuantize100 InitialVelocity;
	#pragma endregion

	#pragma region Constructors & Engine Overrides
	AProjectile();
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	#pragma endregion

	#pragma region Overrideable Actions
	virtual float GetCollisionSphereRadius();
	#pragma endregion

protected:
	#pragma region Projectile Properties
	//
	// Projectile Properties
	//
	UPROPERTY()
	UNiagaraComponent* TrailSystemComponent;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Trail system component for the projectile."))
	UNiagaraSystem* TrailSystem;
	UPROPERTY(VisibleAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Mesh component for the projectile."))
	UStaticMeshComponent* ProjectileMesh;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Minimum amount of damage applied to an actor from the falloff."))
	float MinimumDamageFromFalloff = 10.f;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Inner radius of damage for the applied actor."))
	float DamageInnerRadius = 200.f;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Outer radius of damage for the applied actor."))
	float DamageOuterRadius = 500.f;

	#pragma region Impact
	UPROPERTY(EditAnywhere, Category = "Projectile Properties - Impact", meta = (ToolTip = "Particles that play on impact with the environment. Can use instead of Niagara Impact particles."))
	UParticleSystem* ImpactParticles;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties - Impact", meta = (ToolTip = "Particles that play on impact with the environment. Can use instead of regular Impact particles."))
	UNiagaraSystem* ImpactNiagaraParticles;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties - Impact", meta = (ToolTip = "Sound that plays on impact with the environment."))
	USoundCue* ImpactSound;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties - Impact", meta = (ToolTip = "Particles that play on impact with a character. Can use instead of Niagara Impact particles."))
	UParticleSystem* ImpactCharacterParticles;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties - Impact", meta = (ToolTip = "Particles that play on impact with a character. Can use instead of regular Impact particles."))
	UNiagaraSystem* ImpactCharacterNiagaraParticles;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties - Impact", meta = (ToolTip = "Sound that plays on impact with a character."))
	USoundCue* ImpactCharacterSound;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties - Impact", meta = (ToolTip = "Material decal that spawns on impact with the environment."))
	UMaterialInterface* ImpactDecalMaterial;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties - Impact", meta = (ToolTip = "Size of the material decal."))
	FVector DecalSize = FVector(16.f, 16.f, 16.f);
	UPROPERTY(EditAnywhere, Category = "Projectile Properties - Impact", meta = (ToolTip = "Life span of the material decal."))
	float DecalLifeSpan = 10.f;
	#pragma endregion

	#pragma region Components
	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionBox;
	UPROPERTY(Replicated)
	EHitActor HitActor;
	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* ProjectileMovementComponent;
	#pragma endregion

	#pragma endregion

	#pragma region Engine Overrides
	virtual void BeginPlay() override;
	UFUNCTION()
	virtual void OnHit(
		UPrimitiveComponent* HitComp, 
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		FVector NormalImpulse, 
		const FHitResult& Hit
	);

	#pragma region Multicast
	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnHit(EHitActor HitActorType);
	#pragma endregion

	#pragma endregion

	#pragma region Overrideable Actions
	virtual void ActorHitType(EHitActor HitActorType);
	#pragma endregion

	#pragma region Actions
	void StartDestroyTimer();
	void DestroyTimerFinished();
	void SpawnTrailSystem();
	void ExplodeDamage();

	#pragma region Multicast
	UFUNCTION(NetMulticast, Reliable)
	void MulticastSpawnMaterialDecal(const FHitResult& Hit);
	#pragma endregion

	#pragma region Server
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSpawnMaterialDecal(const FHitResult& Hit);
	#pragma endregion

	#pragma endregion

private:
	#pragma region Projectile Properties
	//
	// Projectile Properties
	//
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Tracer particles for a projectile."))
	UParticleSystem* Tracer;
	UPROPERTY()
	UParticleSystemComponent* TracerComponent;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Tracer particles for a projectile."))
	UNiagaraSystem* TracerNiagara;
	UPROPERTY()
	UNiagaraComponent* TracerNiagaraComponent;
	FTimerHandle DestroyTimer;
	UPROPERTY(EditAnywhere, Category = "Projectile Properties", meta = (ToolTip = "Time until the projectile is destroyed."))
	float DestroyTime = 3.f;
	#pragma endregion

};
