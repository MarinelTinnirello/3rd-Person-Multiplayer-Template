// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "ProjectileGrenade.generated.h"

UCLASS()
class MPSHOOTER_API AProjectileGrenade : public AProjectile
{
	GENERATED_BODY()
	
public:
	#pragma region Constructor & Engine Overrides
	AProjectileGrenade();
	virtual void Destroyed() override;
	#pragma endregion

protected:
	#pragma region Engine Overrides
	virtual void BeginPlay() override;
	UFUNCTION()
	void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
	#pragma endregion

private:
	#pragma region Projectile Grenade Properties
	//
	// Projectile Grenade Properties
	//
	UPROPERTY(EditAnywhere, Category = "Projectile Grenade Properties", meta = (ToolTip = "Bounce sound made as the projectile bounces on a surface."))
	class USoundCue* BounceSound;
	#pragma endregion

};
