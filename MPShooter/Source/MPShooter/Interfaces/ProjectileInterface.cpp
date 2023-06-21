// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectileInterface.h"
#include "MPShooter/Item/Weapon/Weapon.h"
#include "MPShooter/Item/Weapon/Ranged/ProjectileWeapon.h"
#include "MPShooter/Item/Weapon/Ranged/Projectile/Projectile.h"
#include "MPShooter/Character/MPCharacter.h"

#pragma region Overrideable Actors
float IProjectileInterface::GetProjectileRadius(AWeapon* EquippedWeapon)
{
	if (EquippedWeapon)
	{
		AProjectileWeapon* ProjectileWeapon = Cast<AProjectileWeapon>(EquippedWeapon);
		if (ProjectileWeapon && ProjectileWeapon->GetProjectileClass())
		{
			AProjectile* Projectile = ProjectileWeapon->GetProjectileClass().GetDefaultObject();
			return Projectile->GetCollisionSphereRadius();
		}
	}

	return 0.f;
}
#pragma endregion
