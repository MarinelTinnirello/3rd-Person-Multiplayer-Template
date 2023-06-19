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

	void WeaponTraceHit(const FVector& TraceStart, const FVector& TraceEnd, FHitResult& OutHit);


protected:
	//
	// Melee Properties
	//
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact", meta = (ToolTip = "Particles seen on impact from the weapon."))
	class UParticleSystem* ImpactParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact", meta = (ToolTip = "Sound that plays on impact with the environment or character."))
	class USoundCue* ImpactSound;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact", meta = (ToolTip = "Particles that play on impact with a character."))
	UParticleSystem* ImpactCharacterParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact", meta = (ToolTip = "Sound that plays on impact with a character."))
	USoundCue* ImpactCharacterSound;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact", meta = (ToolTip = "Material decal that spawns on impact with the environment."))
	class UMaterialInterface* ImpactDecalMaterial;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact", meta = (ToolTip = "Size of the material decal."))
	FVector DecalSize = FVector(16.f, 16.f, 16.f);
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact", meta = (ToolTip = "Life span of the material decal."))
	float DecalLifeSpan = 10.f;

private:
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Start socket name for a line trace on a weapon."))
	FName StartSocket = "StartSocket";
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Start socket name for a line trace on a weapon."))
	FName EndSocket = "EndSocket";

};
