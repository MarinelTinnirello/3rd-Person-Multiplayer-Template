// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MPShooter/Item/Weapon/Weapon.h"
#include "MeleeWeapon.generated.h"

UCLASS()
class MPSHOOTER_API AMeleeWeapon : public AWeapon
{
	GENERATED_BODY()

public:
	virtual void Fire(const FVector& HitTarget) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Particles seen on impact from the weapon."))
	class UParticleSystem* ImpactParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Sound that plays on impact with the environment or character."))
	class USoundCue* ImpactSound;

private:
	//
	// Melee Properties
	//
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Particles trailing from the weapon."))
	class UParticleSystem* BeamParticles;

};
