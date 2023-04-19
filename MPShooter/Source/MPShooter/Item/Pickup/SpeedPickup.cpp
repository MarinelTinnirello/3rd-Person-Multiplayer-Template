// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedPickup.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/MPComponents/BuffComponent.h"

void ASpeedPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComponent, OtherBodyIndex, bFromSweep, SweepResult);

	AMPCharacter* MPCharacter = Cast<AMPCharacter>(OtherActor);
	if (MPCharacter)
	{
		UBuffComponent* Buff = MPCharacter->GetBuff();
		if (Buff)
		{
			Buff->BuffSpeed(BaseSpeedBuff, CrouchSpeedBuff, SpeedBuffTime);
		}
	}

	Destroy();
}
