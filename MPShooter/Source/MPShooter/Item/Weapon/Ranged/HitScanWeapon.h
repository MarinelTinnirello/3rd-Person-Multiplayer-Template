// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MPShooter/Item/Weapon/Weapon.h"
#include "HitScanWeapon.generated.h"

USTRUCT(BlueprintType)
struct FHitScanWeaponDataTable : public FTableRowBase
{
	GENERATED_BODY()

	//
	// Weapon Properties
	// 
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "General weapon properties of a weapon."))
	FWeaponProperties WeaponProperties;

	//
	// Hit Scan Properties
	//
	UPROPERTY(EditAnywhere, Category = "Hit Scan Weapon Properties", meta = (ToolTip = "Particles seen on impact from the weapon."))
	class UParticleSystem* ImpactParticles;
	UPROPERTY(EditAnywhere, Category = "Hit Scan Weapon Properties", meta = (ToolTip = "Sound that plays on impact with the environment or character."))
	class USoundCue* ImpactSound;

	UPROPERTY(EditAnywhere, Category = "Hit Scan Weapon Properties", meta = (ToolTip = "Particles trailing from the weapon."))
	class UParticleSystem* BeamParticles;

	//
	// Shotgun Properties
	//
	UPROPERTY(EditAnywhere, Category = "Shotgun Weapon Properties", meta = (ToolTip = "Number of slugs shot from the weapon."))
	uint32 NumOfSlugs = 10;
};

UCLASS()
class MPSHOOTER_API AHitScanWeapon : public AWeapon
{
	GENERATED_BODY()

public:
	virtual void Fire(const FVector& HitTarget) override;
	virtual void FireMulti(const TArray<FVector_NetQuantize>& HitTargets) override;
	virtual void MultiTraceEndWithScatter(const FVector& HitTarget, TArray<FVector_NetQuantize>& HitTargets) override;

	void WeaponTraceHit(const FVector& TraceStart, const FVector& HitTarget, FHitResult& OutHit);

protected:
	UPROPERTY(EditAnywhere, Category = "Hit Scan Weapon Properties", meta = (ToolTip = "Particles seen on impact from the weapon."))
	class UParticleSystem* ImpactParticles;
	UPROPERTY(EditAnywhere, Category = "Hit Scan Weapon Properties", meta = (ToolTip = "Sound that plays on impact with the environment or character."))
	class USoundCue* ImpactSound;

private:
	//
	// Hit Scan Properties
	//
	UPROPERTY(EditAnywhere, Category = "Hit Scan Weapon Properties", meta = (ToolTip = "Particles trailing from the weapon."))
	class UParticleSystem* BeamParticles;

	//
	// Shotgun Properties
	//
	UPROPERTY(EditAnywhere, Category = "Shotgun Weapon Properties", meta = (ToolTip = "Number of slugs shot from the weapon."))
	uint32 NumOfSlugs = 10;
};
