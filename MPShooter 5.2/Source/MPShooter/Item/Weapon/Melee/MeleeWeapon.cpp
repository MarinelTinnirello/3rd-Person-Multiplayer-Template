// Fill out your copyright notice in the Description page of Project Settings.

#include "MeleeWeapon.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"
#include "MPShooter/MPComponents/LagComponent.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/Character/MPAnimInstance.h"
#include "MPShooter/PlayerController/MPPlayerController.h"

void AMeleeWeapon::Fire(const FVector& HitTarget)
{
	if (FireAnimation)
	{
		GetItemMesh()->PlayAnimation(FireAnimation, false);
	}


}
