// Fill out your copyright notice in the Description page of Project Settings.


#include "HitActorInterface.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "MPShooter/MPShooter.h"
#include "MPShooter/MPTypes/HitActor.h"

void IHitActorInterface::MulticastSpawnMaterialDecal_Implementation(const FHitResult& Hit, UWorld* World, UMaterialInterface* ImpactDecalMaterial, FVector DecalSize, float DecalLifeSpan)
{
	if (ImpactDecalMaterial)
	{
		if (World)
		{
			FVector HitLocation = Hit.Location;
			FVector HitNormal = Hit.ImpactNormal;
			FRotator HitRotation = HitNormal.Rotation();
			float Offset = FMath::RandRange(-180.f, 180.f);
			HitRotation = FRotator(HitRotation.Pitch, HitRotation.Yaw, HitRotation.Roll + Offset);
			UMaterialInterface* DecalMaterial = ImpactDecalMaterial;
			UGameplayStatics::SpawnDecalAtLocation(
				World,
				DecalMaterial,
				DecalSize,
				HitLocation,
				HitRotation,
				DecalLifeSpan
			);
		}
	}
}

void IHitActorInterface::ServerSpawnMaterialDecal_Implementation(const FHitResult& Hit)
{
	MulticastSpawnMaterialDecal(Hit);
}

bool IHitActorInterface::ServerSpawnMaterialDecal_Validate(const FHitResult& Hit, AActor* Actor, UMaterialInterface* ImpactDecalMaterial)
{
	if (ImpactDecalMaterial == nullptr) return false;
	// hit data isn't null
	if (Hit.bBlockingHit == false) return false;
	// hit location is in a reasonable range (1000 units squared) from projectile's current location
	if (FVector::DistSquared(Hit.Location, Actor->GetActorLocation()) > 1000000.f) return false;
	// player who fired projectile has authority to spawn projectiles on server
	if (Actor->GetOwner()->HasAuthority() == false) return false;

	return true;
}

void IHitActorInterface::ActorHitType(EHitActor HitActorType, UWorld* World, const UObject* WorldContextObject, AActor* Actor, UParticleSystem* ImpactParticles, USoundCue* ImpactSound, UParticleSystem* ImpactCharacterParticles, USoundCue* ImpactCharacterSound)
{
	if (World && WorldContextObject && Actor)
	{
		switch (HitActorType)
		{
		case EHitActor::EHA_None:
			break;
		case EHitActor::EHA_Character:
			if (ImpactCharacterParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(World, ImpactCharacterParticles, Actor->GetActorTransform());
			}
			if (ImpactCharacterSound)
			{
				UGameplayStatics::PlaySoundAtLocation(WorldContextObject, ImpactCharacterSound, Actor->GetActorLocation());
			}
			break;
		case EHitActor::EHA_Environment:
			if (ImpactParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(World, ImpactParticles, Actor->GetActorTransform());
			}
			if (ImpactSound)
			{
				UGameplayStatics::PlaySoundAtLocation(WorldContextObject, ImpactSound, Actor->GetActorLocation());
			}
			break;
		case EHitActor::EHA_MAX:
			break;
		default:
			break;
		}
	}
}