// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpPickup.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/MPComponents/BuffComponent.h"

void AJumpPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComponent, OtherBodyIndex, bFromSweep, SweepResult);

	AMPCharacter* MPCharacter = Cast<AMPCharacter>(OtherActor);
	if (MPCharacter)
	{
		UBuffComponent* Buff = MPCharacter->GetBuff();
		if (Buff)
		{
			Buff->BuffJump(JumpZVelocityBuff, JumpBuffTime);
		}
	}

	Destroy();
}
