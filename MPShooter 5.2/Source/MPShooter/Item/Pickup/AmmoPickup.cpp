// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoPickup.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/MPComponents/CombatComponent.h"

void AAmmoPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComponent, OtherBodyIndex, bFromSweep, SweepResult);

	AMPCharacter* MPCharacter = Cast<AMPCharacter>(OtherActor);
	if (MPCharacter)
	{
		UCombatComponent* Combat = MPCharacter->GetCombat();
		if (Combat)
		{
			Combat->PickupAmmo(WeaponType, AmmoAmount);
		}
	}

	Destroy();
}