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

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSpawnMaterialDecal(const FHitResult& Hit);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastSpawnMaterialDecal(
		const FHitResult& Hit, 
		UWorld* World, 
		class UMaterialInterface* ImpactDecalMaterial, 
		FVector DecalSize, 
		float DecalLifeSpan
	);

};
