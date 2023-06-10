// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "MPShooter/MPTypes/WeaponTypes.h"
#include "ThrowableWeaponPickup.generated.h"

UCLASS()
class MPSHOOTER_API AThrowableWeaponPickup : public APickup
{
	GENERATED_BODY()

protected:
	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

private:
	UPROPERTY(EditAnywhere, Category = "Throwable Pickup Properties", meta = (ToolTip = "Amount of ammo contained in the pickup."))
	int32 AmmoAmount = 3;
	UPROPERTY(EditAnywhere, Category = "Throwable Pickup Properties", meta = (ToolTip = "Type of weapon associated with the ammo."))
	EThrowableWeaponType ThrowableWeaponType;
	UPROPERTY(EditAnywhere, Category = "Throwable Pickup Properties", meta = (ToolTip = "Throwable class."))
	TSubclassOf<class AThrowableWeapon> ThrowableClass;
};
