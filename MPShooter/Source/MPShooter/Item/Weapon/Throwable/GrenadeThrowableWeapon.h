// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ThrowableWeapon.h"
#include "GrenadeThrowableWeapon.generated.h"

UCLASS()
class MPSHOOTER_API AGrenadeThrowableWeapon : public AThrowableWeapon
{
	GENERATED_BODY()
	
public:
	AGrenadeThrowableWeapon();

	virtual void Destroyed() override;

protected:
	UFUNCTION()
	void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);

	virtual void OnSpawn();

private:
	UPROPERTY(EditAnywhere, Category = "Projectile Grenade Properties", meta = (ToolTip = "Bounce sound made as the projectile bounces on a surface."))
	class USoundCue* BounceSound;

};
