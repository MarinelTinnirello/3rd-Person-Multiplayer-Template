// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MPShooter/Item/Weapon/Weapon.h"
#include "MPShooter/Interfaces/ProjectileInterface.h"
#include "ProjectileWeapon.generated.h"

USTRUCT(BlueprintType)
struct FProjectileWeaponDataTable : public FTableRowBase
{
	GENERATED_BODY()

	//
	// Weapon Properties
	// 
	UPROPERTY(EditAnywhere, Category = "Weapon Properties", meta = (ToolTip = "General weapon properties of a weapon."))
	FWeaponProperties WeaponProperties;

	//
	// Projectile Properties
	//
	UPROPERTY(EditAnywhere, Category = "Projectile", meta = (ToolTip = "Projectile for a weapon."))
	TSubclassOf<class AProjectile> ProjectileClass;
	UPROPERTY(EditAnywhere, Category = "Projectile", meta = (ToolTip = "Projectile for a weapon used during SSR. The only difference between the 2 classes are that SSR Projectiles won't be replicated, meaning they only spawn locally."))
	TSubclassOf<AProjectile> ServerSideRewindProjectileClass;
};

UCLASS()
class MPSHOOTER_API AProjectileWeapon : public AWeapon, public IProjectileInterface
{
	GENERATED_BODY()

public:
	virtual void Fire(const FVector& HitTarget) override;
	
private:
	UPROPERTY(EditAnywhere, Category = "Projectile", meta = (ToolTip = "Projectile for a weapon."))
	TSubclassOf<class AProjectile> ProjectileClass;
	UPROPERTY(EditAnywhere, Category = "Projectile", meta = (ToolTip = "Projectile for a weapon used during SSR. The only difference between the 2 classes are that SSR Projectiles won't be replicated, meaning they only spawn locally."))
	TSubclassOf<AProjectile> ServerSideRewindProjectileClass;

public:
	FORCEINLINE TSubclassOf<AProjectile> GetProjectileClass() { return ProjectileClass; }

};
