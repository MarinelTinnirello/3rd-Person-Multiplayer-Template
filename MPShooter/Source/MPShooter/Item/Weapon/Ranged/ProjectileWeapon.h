// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MPShooter/Item/Weapon/Weapon.h"
#include "MPShooter/Interfaces/ProjectileInterface.h"
#include "ProjectileWeapon.generated.h"

#pragma region Forward Declarations
class AProjectile;
#pragma endregion

#pragma region Structs
USTRUCT(BlueprintType)
struct FProjectileWeaponDataTable : public FWeaponProperties
{
	GENERATED_BODY()

	//
	// Projectile Properties
	//
	UPROPERTY(EditAnywhere, Category = "Projectile", meta = (ToolTip = "Projectile for a weapon."))
	TSubclassOf<AProjectile> ProjectileClass;
	UPROPERTY(EditAnywhere, Category = "Projectile", meta = (ToolTip = "Projectile for a weapon used during SSR. The only difference between the 2 classes are that SSR Projectiles won't be replicated, meaning they only spawn locally."))
	TSubclassOf<AProjectile> ServerSideRewindProjectileClass;
};
#pragma endregion

UCLASS()
class MPSHOOTER_API AProjectileWeapon : public AWeapon, public IProjectileInterface
{
	GENERATED_BODY()

public:
	#pragma region Overriden Actions
	virtual void Fire(const FVector& HitTarget) override;
	#pragma endregion

private:
	#pragma region Projectiles
	//
	// Projectiles
	//
	UPROPERTY(EditAnywhere, Category = "Projectile", meta = (ToolTip = "Projectile for a weapon."))
	TSubclassOf<AProjectile> ProjectileClass;
	UPROPERTY(EditAnywhere, Category = "Projectile", meta = (ToolTip = "Projectile for a weapon used during SSR. The only difference between the 2 classes are that SSR Projectiles won't be replicated, meaning they only spawn locally."))
	TSubclassOf<AProjectile> ServerSideRewindProjectileClass;
	#pragma endregion

public:
	#pragma region Projectiles
	FORCEINLINE TSubclassOf<AProjectile> GetProjectileClass() { return ProjectileClass; }
	#pragma endregion

};
