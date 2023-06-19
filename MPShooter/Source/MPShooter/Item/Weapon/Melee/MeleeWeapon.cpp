// Fill out your copyright notice in the Description page of Project Settings.

#include "MeleeWeapon.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"
#include "MPShooter/MPComponents/LagComponent.h"
#include "MPShooter/Interfaces/InteractWithCrosshairsInterface.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/Character/MPAnimInstance.h"
#include "MPShooter/PlayerController/MPPlayerController.h"

void AMeleeWeapon::Fire(const FVector& HitTarget)
{
	if (FireAnimation)
	{
		GetItemMesh()->PlayAnimation(FireAnimation, false);
	}

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr)
	{
		return;
	}

	AController* InstigatorController = OwnerPawn->GetController();
	const USkeletalMeshSocket* StartTraceSocket = GetItemMesh()->GetSocketByName(StartSocket);
	const USkeletalMeshSocket* EndTraceSocket = GetItemMesh()->GetSocketByName(EndSocket);
	if (StartTraceSocket && EndTraceSocket && InstigatorController)
	{
		FTransform StartSocketTransform = StartTraceSocket->GetSocketTransform(GetItemMesh());
		FVector Start = StartSocketTransform.GetLocation();
		FTransform EndSocketTransform = EndTraceSocket->GetSocketTransform(GetItemMesh());
		FVector End = EndSocketTransform.GetLocation();
		FHitResult FireHit;
		WeaponTraceHit(Start, End, FireHit);

		AMPCharacter* MPCharacter = Cast<AMPCharacter>(FireHit.GetActor());
		if (MPCharacter && InstigatorController)
		{
			bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();
			UMPAnimInstance* AnimInstance = Cast<UMPAnimInstance>(MPCharacter->GetMesh()->GetAnimInstance());
			if (HasAuthority() && bCauseAuthDamage && AnimInstance)
			{
				const float DamageToCause = FireHit.BoneName == AnimInstance->GetHeadBone() ? HeadShotDamage : Damage;
				UGameplayStatics::ApplyDamage(
					MPCharacter,
					DamageToCause,
					InstigatorController,
					this,
					UDamageType::StaticClass()
				);
				UE_LOG(LogTemp, Warning, TEXT("Poo poo :)"));
				MPCharacter->DirectionalHitReact(FireHit.ImpactPoint);
			}
			if (!HasAuthority() && bUseServerSideRewind)
			{
				MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(OwnerPawn) : MPOwnerCharacter;
				MPOwnerController = MPOwnerController == nullptr ? Cast<AMPPlayerController>(InstigatorController) : MPOwnerController;
				if (MPOwnerController && MPOwnerCharacter && MPOwnerCharacter->GetLagCompensation())
				{
					MPOwnerCharacter->GetLagCompensation()->ServerScoreRequest(
						MPCharacter,
						Start,
						HitTarget,
						MPOwnerController->GetServerTime() - MPOwnerController->SingleTripTime
					);
				}
			}
		}
		if (ImpactParticles)
		{
			UGameplayStatics::SpawnEmitterAtLocation(
				GetWorld(),
				ImpactParticles,
				FireHit.ImpactPoint,
				FireHit.ImpactNormal.Rotation()
			);
		}
		if (ImpactSound)
		{
			UGameplayStatics::PlaySoundAtLocation(
				this,
				ImpactSound,
				FireHit.ImpactPoint
			);
		}
	}
}

void AMeleeWeapon::WeaponTraceHit(const FVector& TraceStart, const FVector& TraceEnd, FHitResult& OutHit)
{
	UWorld* World = GetWorld();
	if (World)
	{
		World->LineTraceSingleByChannel(
			OutHit,
			TraceStart,
			TraceEnd,
			ECollisionChannel::ECC_Visibility
		);
		FVector BeamEnd = TraceEnd;

		if (OutHit.bBlockingHit)
		{
			BeamEnd = OutHit.ImpactPoint;
		}
		else
		{
			OutHit.ImpactPoint = TraceEnd;
		}
	}
}
