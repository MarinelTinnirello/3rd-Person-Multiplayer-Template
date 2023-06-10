// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "SpeedPickup.generated.h"

UCLASS()
class MPSHOOTER_API ASpeedPickup : public APickup
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
	UPROPERTY(EditAnywhere, Category = "Speed Pickup Properties", meta = (ToolTip = "Amount max walk speed is set on pickup."))
	float BaseSpeedBuff = 1600.f;
	UPROPERTY(EditAnywhere, Category = "Speed Pickup Properties", meta = (ToolTip = "Amount max crouch speed is set on pickup."))
	float CrouchSpeedBuff = 850.f;
	UPROPERTY(EditAnywhere, Category = "Speed Pickup Properties", meta = (ToolTip = "Amount of time it takes to reach the buff."))
	float SpeedBuffTime = 30.f;

};
