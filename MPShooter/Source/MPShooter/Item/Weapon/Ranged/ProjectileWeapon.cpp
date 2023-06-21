// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectileWeapon.h"
#include "MPShooter/Item/Weapon/Ranged/Projectile/Projectile.h"
#include "Engine/SkeletalMeshSocket.h"

#pragma region Overriden Actions
void AProjectileWeapon::Fire(const FVector& HitTarget)
{
	Super::Fire(HitTarget);

	const USkeletalMeshSocket* MuzzleFlashSocket = GetItemMesh()->GetSocketByName(FName(MuzzleFlash));
	APawn* InstigatorPawn = Cast<APawn>(GetOwner());
	UWorld* World = GetWorld();

	if (MuzzleFlashSocket && World)
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetItemMesh());
		// From muzzle flash socket -> Hit location from TraceUnderCrosshairs()
		FVector ToTarget = HitTarget - SocketTransform.GetLocation();
		FRotator TargetRotation = ToTarget.Rotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetOwner();
		SpawnParams.Instigator = InstigatorPawn;

		AProjectile* SpawnedProjectile = nullptr;
		if (bUseServerSideRewind)
		{
			// Server
			if (InstigatorPawn->HasAuthority())
			{
				// Server, host - use replicated projectile
				if (InstigatorPawn->IsLocallyControlled())
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(
						ProjectileClass, 
						SocketTransform.GetLocation(), 
						TargetRotation, 
						SpawnParams
					);
					SpawnedProjectile->bUseServerSideRewind = false;
					SpawnedProjectile->Damage = Damage;
					SpawnedProjectile->HeadShotDamage = HeadShotDamage;
				}
				// Server, not locally controlled - spawn non-replicated projectile, use SSR
				else
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(
						ServerSideRewindProjectileClass, 
						SocketTransform.GetLocation(), 
						TargetRotation, 
						SpawnParams
					);
					SpawnedProjectile->bUseServerSideRewind = true;
				}
			}
			// Client, using SSR
			else
			{
				// Client, locally controlled - spawn non-replicated projectile, use SSR
				if (InstigatorPawn->IsLocallyControlled())
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(
						ServerSideRewindProjectileClass, 
						SocketTransform.GetLocation(), 
						TargetRotation, 
						SpawnParams
					);
					SpawnedProjectile->bUseServerSideRewind = true;
					SpawnedProjectile->TraceStart = SocketTransform.GetLocation();
					SpawnedProjectile->InitialVelocity = SpawnedProjectile->GetActorForwardVector() * SpawnedProjectile->InitialSpeed;
				}
				// Client, not locally controlled - spawn non-replicated projectile, no SSR
				else
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(
						ServerSideRewindProjectileClass, 
						SocketTransform.GetLocation(), 
						TargetRotation, 
						SpawnParams
					);
					SpawnedProjectile->bUseServerSideRewind = false;
				}
			}
		}
		else
		{
			if (InstigatorPawn->HasAuthority())
			{
				SpawnedProjectile = World->SpawnActor<AProjectile>(
					ProjectileClass, 
					SocketTransform.GetLocation(), 
					TargetRotation, 
					SpawnParams
				);
				SpawnedProjectile->bUseServerSideRewind = false;
				SpawnedProjectile->Damage = Damage;
				SpawnedProjectile->HeadShotDamage = HeadShotDamage;
			}
		}
	}
}
#pragma endregion
