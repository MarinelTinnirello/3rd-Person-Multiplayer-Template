// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "JumpPickup.generated.h"

UCLASS()
class MPSHOOTER_API AJumpPickup : public APickup
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
	UPROPERTY(EditAnywhere, Category = "Jump Pickup Properties", meta = (ToolTip = "Amount jump velocity is set on pickup."))
	float JumpZVelocityBuff = 2500.f;
	UPROPERTY(EditAnywhere, Category = "Jump Pickup Properties", meta = (ToolTip = "Amount of time it takes to reach the buff."))
	float JumpBuffTime = 30.f;

};
