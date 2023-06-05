// Fill out your copyright notice in the Description page of Project Settings.

#include "ShotgunWeapon.h"
//#include "Engine/SkeletalMeshSocket.h"
//#include "Kismet/GameplayStatics.h"
//#include "Kismet/KismetMathLibrary.h"
//#include "Particles/ParticleSystemComponent.h"
//#include "Sound/SoundCue.h"
//#include "MPShooter/Character/MPCharacter.h"
//#include "MPShooter/Character/MPAnimInstance.h"
//#include "MPShooter/PlayerController/MPPlayerController.h"
//#include "MPShooter/MPComponents/LagComponent.h"
//
//void AShotgunWeapon::FireShotgun(const TArray<FVector_NetQuantize>& HitTargets)
//{
//	AWeapon::Fire(FVector());
//	APawn* OwnerPawn = Cast<APawn>(GetOwner());
//	if (OwnerPawn == nullptr)
//	{
//		return;
//	}
//
//	AController* InstigatorController = OwnerPawn->GetController();
//
//	const USkeletalMeshSocket* MuzzleFlashSocket = GetItemMesh()->GetSocketByName(MuzzleFlash);
//	if (MuzzleFlashSocket && InstigatorController)
//	{
//		const FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetItemMesh());
//		const FVector Start = SocketTransform.GetLocation();
//
//		TMap<AMPCharacter*, uint32> HitMap;
//		TMap<AMPCharacter*, uint32> HeadShotHitMap;
//		for (FVector_NetQuantize HitTarget : HitTargets)
//		{
//			FHitResult FireHit;
//			WeaponTraceHit(Start, HitTarget, FireHit);
//
//			AMPCharacter* MPCharacter = Cast<AMPCharacter>(FireHit.GetActor());
//			if (MPCharacter)
//			{
//				UMPAnimInstance* AnimInstance = Cast<UMPAnimInstance>(MPCharacter->GetMesh()->GetAnimInstance());
//				if (AnimInstance)
//				{
//					const bool bHeadShot = FireHit.BoneName == AnimInstance->GetHeadBone();
//					if (bHeadShot)
//					{
//						if (HeadShotHitMap.Contains(MPCharacter)) HeadShotHitMap[MPCharacter]++;
//						else HeadShotHitMap.Emplace(MPCharacter, 1);
//					}
//					else
//					{
//						if (HitMap.Contains(MPCharacter)) HitMap[MPCharacter]++;
//						else HitMap.Emplace(MPCharacter, 1);
//					}
//				}
//			}
//
//			if (ImpactParticles)
//			{
//				UGameplayStatics::SpawnEmitterAtLocation(
//					GetWorld(),
//					ImpactParticles,
//					FireHit.ImpactPoint,
//					FireHit.ImpactNormal.Rotation()
//				);
//			}
//			if (ImpactSound)
//			{
//				UGameplayStatics::PlaySoundAtLocation(
//					this,
//					ImpactSound,
//					FireHit.ImpactPoint,
//					.5f,
//					FMath::FRandRange(-.5f, .5f)
//				);
//			}
//		}
//
//		TArray<AMPCharacter*> HitCharacters;
//		TMap<AMPCharacter*, float> DamageMap;
//		// Calculate body shot damage by multiplying hit by Damage
//		for (auto HitPair : HitMap)
//		{
//			if (HitPair.Key)
//			{
//				DamageMap.Emplace(HitPair.Key, HitPair.Value * Damage);
//
//				HitCharacters.AddUnique(HitPair.Key);
//			}
//		}
//		// Calculate head shot damage by multiplying hit by HeadShotDamage
//		for (auto HeadShotHitPair : HeadShotHitMap)
//		{
//			if (HeadShotHitPair.Key)
//			{
//				if (DamageMap.Contains(HeadShotHitPair.Key)) DamageMap[HeadShotHitPair.Key] += HeadShotHitPair.Value * HeadShotDamage;
//				else DamageMap.Emplace(HeadShotHitPair.Key, HeadShotHitPair.Value * HeadShotDamage);
//
//				HitCharacters.AddUnique(HeadShotHitPair.Key);
//			}
//		}
//		// Loop through DamageMap to get total damage for each character
//		for (auto DamagePair : DamageMap)
//		{
//			if (DamagePair.Key && InstigatorController)
//			{
//				bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();
//				if (HasAuthority() && bCauseAuthDamage)
//				{
//					UGameplayStatics::ApplyDamage(
//						DamagePair.Key, // Character hit
//						DamagePair.Value, // Damage calculated in the two for loops above
//						InstigatorController,
//						this,
//						UDamageType::StaticClass()
//					);
//				}
//			}
//		}
//
//		if (!HasAuthority() && bUseServerSideRewind)
//		{
//			MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(OwnerPawn) : MPOwnerCharacter;
//			MPOwnerController = MPOwnerController == nullptr ? Cast<AMPPlayerController>(InstigatorController) : MPOwnerController;
//			if (MPOwnerController && MPOwnerCharacter && MPOwnerCharacter->GetLagCompensation() && MPOwnerCharacter->IsLocallyControlled())
//			{
//				MPOwnerCharacter->GetLagCompensation()->ServerScoreRequestShotgun(
//					HitCharacters,
//					Start,
//					HitTargets,
//					MPOwnerController->GetServerTime() - MPOwnerController->SingleTripTime
//				);
//			}
//		}
//	}
//}
//
//void AShotgunWeapon::ShotgunTraceEndWithScatter(const FVector& HitTarget, TArray<FVector_NetQuantize>& HitTargets)
//{
//	const USkeletalMeshSocket* MuzzleFlashSocket = GetItemMesh()->GetSocketByName(MuzzleFlash);
//	if (MuzzleFlashSocket == nullptr)
//	{
//		return;
//	}
//
//	const FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetItemMesh());
//	const FVector TraceStart = SocketTransform.GetLocation();
//
//	const FVector ToTargetNormalized = (HitTarget - TraceStart).GetSafeNormal();
//	const FVector SphereCenter = TraceStart + ToTargetNormalized * DistanceToSphere;
//
//	for (uint32 i = 0; i < NumOfSlugs; i++)
//	{
//		const FVector RandVec = UKismetMathLibrary::RandomUnitVector() * FMath::FRandRange(0.f, SphereRadius);
//		const FVector EndLoc = SphereCenter + RandVec;
//		FVector ToEndLoc = EndLoc - TraceStart;
//		ToEndLoc = TraceStart + ToEndLoc * TRACE_LENGTH / ToEndLoc.Size();
//
//		HitTargets.Add(ToEndLoc);
//	}
//}
