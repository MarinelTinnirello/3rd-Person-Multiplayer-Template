// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "HealthPickup.generated.h"

UCLASS()
class MPSHOOTER_API AHealthPickup : public APickup
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
	UPROPERTY(EditAnywhere, Category = "Health Pickup Properties", meta = (ToolTip = "Amount healed on pickup."))
	float HealAmount = 100.f;
	UPROPERTY(EditAnywhere, Category = "Health Pickup Properties", meta = (ToolTip = "Amount of time it takes to reach HealAmount."))
	float HealingTime = 5.f;

};
