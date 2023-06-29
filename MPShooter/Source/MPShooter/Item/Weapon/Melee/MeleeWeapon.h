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
	#pragma region Overriden Actions
	virtual void Fire(const FVector& HitTarget) override;
	virtual void WeaponTraceHit(const FVector& TraceStart, const FVector& HitTarget, FHitResult& OutHit) override;
	#pragma endregion

protected:
	#pragma region Weapon Properties
	//
	// Melee Properties
	//
	#pragma region Impact
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Particles", meta = (ToolTip = "Particles seen on impact from the weapon."))
	class UParticleSystem* ImpactParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Sounds", meta = (ToolTip = "Sound that plays on impact with the environment or character."))
	class USoundCue* ImpactSound;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Particles", meta = (ToolTip = "Particles that play on impact with a character."))
	UParticleSystem* ImpactCharacterParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Sounds", meta = (ToolTip = "Sound that plays on impact with a character."))
	USoundCue* ImpactCharacterSound;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Decal", meta = (ToolTip = "Material decal that spawns on impact with the environment."))
	class UMaterialInterface* ImpactDecalMaterial;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Decal", meta = (ToolTip = "Size of the material decal."))
	FVector DecalSize = FVector(16.f, 16.f, 16.f);
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Decal", meta = (ToolTip = "Life span of the material decal."))
	float DecalLifeSpan = 10.f;
	#pragma endregion

	#pragma endregion

private:
	#pragma region Weapon Properties
	//
	// Melee Properties
	//
	#pragma region Sockets
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Melee Weapon Properties", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Start socket name for a line trace on a weapon."))
	FName StartSocket = "StartSocket";
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Melee Weapon Properties", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Start socket name for a line trace on a weapon."))
	FName EndSocket = "EndSocket";
	#pragma endregion

	#pragma endregion

public:
	#pragma region Getters
	FORCEINLINE FName GetStartSocket() const { return StartSocket; }
	FORCEINLINE FName GetEndSocket() const { return EndSocket; }
	#pragma endregion

};
