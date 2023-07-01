// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MPShooter/Item/Weapon/Weapon.h"
#include "MPShooter/MPTypes/HitActor.h"
#include "MPShooter/Interfaces/HitActorInterface.h"
#include "MeleeWeapon.generated.h"

#pragma region Forward Declarations
class UParticleSystem;
class UNiagaraSystem;
class USoundCue;
class UMaterialInterface;
#pragma endregion

#pragma region Structs
USTRUCT(BlueprintType)
struct FMeleeWeaponDataTable : public FWeaponProperties
{
	GENERATED_BODY()

	//
	// Melee Weapon Properties
	//
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Particles", meta = (ToolTip = "Particles seen on impact from the weapon. Can use instead of the Niagara Impact particles."))
	UParticleSystem* ImpactParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Particles", meta = (ToolTip = "Particles seen on impact from the weapon. Can use instead of the regular Impact particles."))
	UNiagaraSystem* ImpactNiagaraParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Sounds", meta = (ToolTip = "Sound that plays on impact with the environment or character."))
	USoundCue* ImpactSound;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Particles", meta = (ToolTip = "Particles that play on impact with a character. Can use instead of Niagara Impact particles."))
	UParticleSystem* ImpactCharacterParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Particles", meta = (ToolTip = "Particles that play on impact with a character. Can use instead of regular Impact particles."))
	UNiagaraSystem* ImpactCharacterNiagaraParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Sounds", meta = (ToolTip = "Sound that plays on impact with a character."))
	USoundCue* ImpactCharacterSound;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Decal", meta = (ToolTip = "Material decal that spawns on impact with the environment."))
	UMaterialInterface* ImpactDecalMaterial;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Decal", meta = (ToolTip = "Size of the material decal."))
	FVector DecalSize = FVector(16.f, 16.f, 16.f);
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Decal", meta = (ToolTip = "Life span of the material decal."))
	float DecalLifeSpan = 10.f;

	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Start socket name for a line trace on a weapon."))
	FName StartSocket = "StartSocket";
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Start socket name for a line trace on a weapon."))
	FName EndSocket = "EndSocket";
};
#pragma endregion

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
	// Melee Weapon Properties
	//
	#pragma region Impact
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Particles", meta = (ToolTip = "Particles seen on impact from the weapon. Can use instead of the Niagara Impact particles."))
	UParticleSystem* ImpactParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Particles", meta = (ToolTip = "Particles seen on impact from the weapon. Can use instead of the regular Impact particles."))
	UNiagaraSystem* ImpactNiagaraParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Sounds", meta = (ToolTip = "Sound that plays on impact with the environment or character."))
	USoundCue* ImpactSound;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Particles", meta = (ToolTip = "Particles that play on impact with a character. Can use instead of Niagara Impact particles."))
	UParticleSystem* ImpactCharacterParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Particles", meta = (ToolTip = "Particles that play on impact with a character. Can use instead of regular Impact particles."))
	UNiagaraSystem* ImpactCharacterNiagaraParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Sounds", meta = (ToolTip = "Sound that plays on impact with a character."))
	USoundCue* ImpactCharacterSound;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Decal", meta = (ToolTip = "Material decal that spawns on impact with the environment."))
	UMaterialInterface* ImpactDecalMaterial;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Decal", meta = (ToolTip = "Size of the material decal."))
	FVector DecalSize = FVector(16.f, 16.f, 16.f);
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties - Impact - Decal", meta = (ToolTip = "Life span of the material decal."))
	float DecalLifeSpan = 10.f;
	#pragma endregion

	#pragma endregion

	#pragma region Overrideable Actions
	virtual void ActorHitType(EHitActor HitActorType);
	#pragma endregion

	#pragma region Actions
	#pragma region Multicast
	UFUNCTION(NetMulticast, Reliable)
	void MulticastActorOnHit(EHitActor HitActorType);
	UFUNCTION(NetMulticast, Reliable)
	void MulticastSpawnMaterialDecal(const FHitResult& Hit);
	#pragma endregion

	#pragma region Server
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSpawnMaterialDecal(const FHitResult& Hit);
	#pragma endregion

	#pragma endregion

private:
	#pragma region Weapon Properties
	//
	// Melee Weapon Properties
	//
	#pragma region Sockets
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Start socket name for a line trace on a weapon."))
	FName StartSocket = "StartSocket";
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Start socket name for a line trace on a weapon."))
	FName EndSocket = "EndSocket";
	#pragma endregion

	#pragma endregion

};
