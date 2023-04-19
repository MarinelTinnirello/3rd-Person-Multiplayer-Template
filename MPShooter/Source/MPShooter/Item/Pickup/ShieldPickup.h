// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "ShieldPickup.generated.h"

UCLASS()
class MPSHOOTER_API AShieldPickup : public APickup
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
	UPROPERTY(EditAnywhere, Category = "Shield Pickup Properties", meta = (ToolTip = "Amount replenished on pickup."))
	float ShieldReplenishAmount = 100.f;
	UPROPERTY(EditAnywhere, Category = "Shield Pickup Properties", meta = (ToolTip = "Amount of time it takes to reach ShieldReplenishAmount."))
	float ShieldReplenishTime = 5.f;

};
