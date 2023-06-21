// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "ProjectileBullet.generated.h"

UCLASS()
class MPSHOOTER_API AProjectileBullet : public AProjectile
{
	GENERATED_BODY()

public:
	#pragma region Constructor
	AProjectileBullet();
	#pragma endregion

protected:
	#pragma region Engine Overrides
	virtual void BeginPlay() override;
	virtual void OnHit(
		UPrimitiveComponent* HitComp, 
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		FVector NormalImpulse, 
		const FHitResult& Hit
	) override;
	#pragma endregion

};
