// Fill out your copyright notice in the Description page of Project Settings.


#include "GrenadeThrowableWeapon.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

AGrenadeThrowableWeapon::AGrenadeThrowableWeapon()
{
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->SetIsReplicated(true);
	ProjectileMovementComponent->bShouldBounce = true;
	// stops movement when I throw this into the world as not a pickup
	// if I turn into a pickup, just take these out of OnSpawn() and move back up here
	// the last 2 are default to 1.0f and (1, 0, 0), respectively
	ProjectileMovementComponent->InitialSpeed = 0.f;
	ProjectileMovementComponent->MaxSpeed = 0.f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.f;
	ProjectileMovementComponent->Velocity = FVector(0.f, 0.f, 0.f);
}


void AGrenadeThrowableWeapon::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity)
{
	if (BounceSound)
	{
		UGameplayStatics::PlaySoundAtLocation(
			this,
			BounceSound,
			GetActorLocation()
		);
	}
}

void AGrenadeThrowableWeapon::OnSpawn()
{
	SpawnTrailSystem();
	StartDestroyTimer();

	ProjectileMovementComponent->OnProjectileBounce.AddDynamic(this, &AGrenadeThrowableWeapon::OnBounce);
	ProjectileMovementComponent->InitialSpeed = 3000.f;
	ProjectileMovementComponent->MaxSpeed = 3000.f;
	ProjectileMovementComponent->ProjectileGravityScale = 1.f;
	ProjectileMovementComponent->Velocity = FVector(1, 0, 0);
}

void AGrenadeThrowableWeapon::Destroyed()
{
	ExplodeDamage();
	HitActor = EHitActor::EHA_Environment;
	ActorHitType(HitActor);

	Super::Destroyed();
}
