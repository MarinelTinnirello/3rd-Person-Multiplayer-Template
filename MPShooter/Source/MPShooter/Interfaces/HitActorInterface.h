// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MPShooter/MPTypes/HitActor.h"
#include "HitActorInterface.generated.h"

UINTERFACE(MinimalAPI)
class UHitActorInterface : public UInterface
{
	GENERATED_BODY()
};

class MPSHOOTER_API IHitActorInterface
{
	GENERATED_BODY()

public:
	virtual void ActorHitType(
		EHitActor HitActorType, 
		class UWorld* World, 
		const UObject* WorldContextObject, 
		class AActor* Actor, 
		class UParticleSystem* ImpactParticles, 
		class USoundCue* ImpactSound, 
		UParticleSystem* ImpactCharacterParticles, 
		USoundCue* ImpactCharacterSound
	);

	UFUNCTION(NetMulticast, Reliable)
	virtual void MulticastSpawnMaterialDecal(
		const FHitResult& Hit,
		UWorld* World,
		class UMaterialInterface* ImpactDecalMaterial,
		FVector DecalSize,
		float DecalLifeSpan
	);

	UFUNCTION(Server, Reliable, WithValidation)
	virtual void ServerSpawnMaterialDecal(
		const FHitResult& Hit,
		UWorld* World,
		AActor* Actor, 
		UMaterialInterface* ImpactDecalMaterial, 
		FVector DecalSize, 
		float DecalLifeSpan
	);

};
