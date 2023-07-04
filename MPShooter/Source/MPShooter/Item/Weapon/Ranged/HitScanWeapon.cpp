// Fill out your copyright notice in the Description page of Project Settings.

#include "HitScanWeapon.h"
#include "Net/UnrealNetwork.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Sound/SoundCue.h"
#include "MPShooter/MPComponents/LagComponent.h"
#include "MPShooter/Interfaces/InteractWithCrosshairsInterface.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/Character/MPAnimInstance.h"
#include "MPShooter/PlayerController/MPPlayerController.h"

#pragma region Overriden Actions
#pragma region Fire
void AHitScanWeapon::Fire(const FVector& HitTarget)
{
	Super::Fire(HitTarget);

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr)
	{
		return;
	}

	AController* InstigatorController = OwnerPawn->GetController();
	const USkeletalMeshSocket* MuzzleFlashSocket = GetItemMesh()->GetSocketByName(MuzzleFlash);
	if (MuzzleFlashSocket && InstigatorController)
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetItemMesh());
		FVector Start = SocketTransform.GetLocation();
		FHitResult FireHit;
		WeaponTraceHit(Start, HitTarget, FireHit);

		HitActor = FireHit.GetActor()->Implements<UInteractWithCrosshairsInterface>() ? EHitActor::EHA_Character : EHitActor::EHA_Environment;
		MulticastActorOnHit(HitActor);
		if (HitActor == EHitActor::EHA_Environment)
		{
			ServerSpawnMaterialDecal(FireHit);
		}

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
		if (ImpactNiagaraParticles)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(
				GetWorld(),
				ImpactNiagaraParticles,
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

void AHitScanWeapon::FireMulti(const TArray<FVector_NetQuantize>& HitTargets)
{
	AWeapon::FireMulti(HitTargets);

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr)
	{
		return;
	}

	AController* InstigatorController = OwnerPawn->GetController();
	const USkeletalMeshSocket* MuzzleFlashSocket = GetItemMesh()->GetSocketByName(MuzzleFlash);
	if (MuzzleFlashSocket && InstigatorController)
	{
		const FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetItemMesh());
		const FVector Start = SocketTransform.GetLocation();

		TMap<AMPCharacter*, uint32> HitMap;
		TMap<AMPCharacter*, uint32> HeadShotHitMap;
		for (FVector_NetQuantize HitTarget : HitTargets)
		{
			FHitResult FireHit;
			WeaponTraceHit(Start, HitTarget, FireHit);

			/*HitActor = FireHit.GetActor()->Implements<UInteractWithCrosshairsInterface>() ? EHitActor::EHA_Character : EHitActor::EHA_Environment;
			MulticastActorOnHit(HitActor);
			if (HitActor == EHitActor::EHA_Environment)
			{
				ServerSpawnMaterialDecal(FireHit);
			}*/

			AMPCharacter* MPCharacter = Cast<AMPCharacter>(FireHit.GetActor());
			if (MPCharacter)
			{
				UMPAnimInstance* AnimInstance = Cast<UMPAnimInstance>(MPCharacter->GetMesh()->GetAnimInstance());
				if (AnimInstance)
				{
					const bool bHeadShot = FireHit.BoneName == AnimInstance->GetHeadBone();
					if (bHeadShot)
					{
						if (HeadShotHitMap.Contains(MPCharacter)) HeadShotHitMap[MPCharacter]++;
						else HeadShotHitMap.Emplace(MPCharacter, 1);
					}
					else
					{
						if (HitMap.Contains(MPCharacter)) HitMap[MPCharacter]++;
						else HitMap.Emplace(MPCharacter, 1);
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
			if (ImpactNiagaraParticles)
			{
				UNiagaraFunctionLibrary::SpawnSystemAtLocation(
					GetWorld(),
					ImpactNiagaraParticles,
					FireHit.ImpactPoint,
					FireHit.ImpactNormal.Rotation()
				);
			}
			if (ImpactSound)
			{
				UGameplayStatics::PlaySoundAtLocation(
					this,
					ImpactSound,
					FireHit.ImpactPoint,
					.5f,
					FMath::FRandRange(-.5f, .5f)
				);
			}
		}

		TArray<AMPCharacter*> HitCharacters;
		TMap<AMPCharacter*, float> DamageMap;
		// Calculate body shot damage by multiplying hit by Damage
		for (auto HitPair : HitMap)
		{
			if (HitPair.Key)
			{
				DamageMap.Emplace(HitPair.Key, HitPair.Value * Damage);

				HitCharacters.AddUnique(HitPair.Key);
			}
		}
		// Calculate head shot damage by multiplying hit by HeadShotDamage
		for (auto HeadShotHitPair : HeadShotHitMap)
		{
			if (HeadShotHitPair.Key)
			{
				if (DamageMap.Contains(HeadShotHitPair.Key)) DamageMap[HeadShotHitPair.Key] += HeadShotHitPair.Value * HeadShotDamage;
				else DamageMap.Emplace(HeadShotHitPair.Key, HeadShotHitPair.Value * HeadShotDamage);

				HitCharacters.AddUnique(HeadShotHitPair.Key);
			}
		}
		// Loop through DamageMap to get total damage for each character
		for (auto DamagePair : DamageMap)
		{
			if (DamagePair.Key && InstigatorController)
			{
				FHitResult FireHit;
				bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();
				if (HasAuthority() && bCauseAuthDamage)
				{
					UGameplayStatics::ApplyDamage(
						DamagePair.Key, // Character hit
						DamagePair.Value, // Damage calculated in the two for loops above
						InstigatorController,
						this,
						UDamageType::StaticClass()
					);
					//HitCharacters[DamagePair.Key]->DirectionalHitReact(FireHit.ImpactPoint);
				}
			}
		}

		if (!HasAuthority() && bUseServerSideRewind)
		{
			MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(OwnerPawn) : MPOwnerCharacter;
			MPOwnerController = MPOwnerController == nullptr ? Cast<AMPPlayerController>(InstigatorController) : MPOwnerController;
			if (MPOwnerController && MPOwnerCharacter && MPOwnerCharacter->GetLagCompensation() && MPOwnerCharacter->IsLocallyControlled())
			{
				MPOwnerCharacter->GetLagCompensation()->ServerScoreRequestShotgun(
					HitCharacters,
					Start,
					HitTargets,
					MPOwnerController->GetServerTime() - MPOwnerController->SingleTripTime
				);
			}
		}
	}
}
#pragma endregion

#pragma region Trace
void AHitScanWeapon::WeaponTraceHit(const FVector& TraceStart, const FVector& HitTarget, FHitResult& OutHit)
{
	UWorld* World = GetWorld();
	if (World)
	{
		FVector End = TraceStart + (HitTarget - TraceStart) * 1.25f;
		World->LineTraceSingleByChannel(
			OutHit,
			TraceStart,
			End,
			ECollisionChannel::ECC_Visibility
		);
		FVector BeamEnd = End;

		if (OutHit.bBlockingHit)
		{
			BeamEnd = OutHit.ImpactPoint;
		}
		else
		{
			OutHit.ImpactPoint = End;
		}

		if (BeamParticles)
		{
			UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(
				World,
				BeamParticles,
				TraceStart,
				FRotator::ZeroRotator,
				true
			);
			if (Beam)
			{
				Beam->SetVectorParameter(FName("Target"), BeamEnd);
			}
		}
		if (BeamNiagaraParticles)
		{
			UNiagaraComponent* Beam = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
				World,
				ImpactNiagaraParticles,
				TraceStart,
				FRotator::ZeroRotator
			);
			if (Beam)
			{
				Beam->SetVectorParameter(FName("Target"), BeamEnd);
			}
		}
	}
}

void AHitScanWeapon::MultiTraceEndWithScatter(const FVector& HitTarget, TArray<FVector_NetQuantize>& HitTargets)
{
	const USkeletalMeshSocket* MuzzleFlashSocket = GetItemMesh()->GetSocketByName(MuzzleFlash);
	if (MuzzleFlashSocket == nullptr)
	{
		return;
	}

	const FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetItemMesh());
	const FVector TraceStart = SocketTransform.GetLocation();

	const FVector ToTargetNormalized = (HitTarget - TraceStart).GetSafeNormal();
	const FVector SphereCenter = TraceStart + ToTargetNormalized * DistanceToSphere;

	for (uint32 i = 0; i < NumOfSlugs; i++)
	{
		const FVector RandVec = UKismetMathLibrary::RandomUnitVector() * FMath::FRandRange(0.f, SphereRadius);
		const FVector EndLoc = SphereCenter + RandVec;
		FVector ToEndLoc = EndLoc - TraceStart;
		ToEndLoc = TraceStart + ToEndLoc * TRACE_LENGTH / ToEndLoc.Size();

		HitTargets.Add(ToEndLoc);
	}
}
#pragma endregion

#pragma endregion

#pragma region Overrideable Actions
void AHitScanWeapon::ActorHitType(EHitActor HitActorType)
{
	UWorld* World = GetWorld();
	if (World)
	{
		switch (HitActorType)
		{
		case EHitActor::EHA_None:
			break;
		case EHitActor::EHA_Character:
			if (ImpactCharacterParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(
					World,
					ImpactCharacterParticles,
					GetActorTransform()
				);
			}
			if (ImpactCharacterNiagaraParticles)
			{
				UNiagaraFunctionLibrary::SpawnSystemAtLocation(
					GetWorld(),
					ImpactCharacterNiagaraParticles,
					GetActorLocation(),
					GetActorRotation()
				);
			}
			if (ImpactCharacterSound)
			{
				UGameplayStatics::PlaySoundAtLocation(
					this,
					ImpactCharacterSound,
					GetActorLocation()
				);
			}
			break;
		case EHitActor::EHA_Environment:
			if (ImpactParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(
					World,
					ImpactParticles,
					GetActorTransform()
				);
			}
			if (ImpactNiagaraParticles)
			{
				UNiagaraFunctionLibrary::SpawnSystemAtLocation(
					GetWorld(),
					ImpactNiagaraParticles,
					GetActorLocation(),
					GetActorRotation()
				);
			}
			if (ImpactSound)
			{
				UGameplayStatics::PlaySoundAtLocation(
					this,
					ImpactSound,
					GetActorLocation()
				);
			}
			break;
		case EHitActor::EHA_MAX:
			break;
		default:
			break;
		}
	}
}
#pragma endregion

#pragma region Actions
#pragma region Multicast
void AHitScanWeapon::MulticastActorOnHit_Implementation(EHitActor HitActorType)
{
	ActorHitType(HitActorType);
}

void AHitScanWeapon::MulticastSpawnMaterialDecal_Implementation(const FHitResult& Hit)
{
	if (ImpactDecalMaterial)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			FVector HitLocation = Hit.Location;
			FVector HitNormal = Hit.ImpactNormal;
			FRotator HitRotation = HitNormal.Rotation();
			float Offset = FMath::RandRange(-180.f, 180.f);
			HitRotation = FRotator(HitRotation.Pitch, HitRotation.Yaw, HitRotation.Roll + Offset);
			UMaterialInterface* DecalMaterial = ImpactDecalMaterial;
			UGameplayStatics::SpawnDecalAtLocation(
				World,
				DecalMaterial,
				DecalSize,
				HitLocation,
				HitRotation,
				DecalLifeSpan
			);
		}
	}
}
#pragma endregion

#pragma region Server
void AHitScanWeapon::ServerSpawnMaterialDecal_Implementation(const FHitResult& Hit)
{
	MulticastSpawnMaterialDecal(Hit);
}

bool AHitScanWeapon::ServerSpawnMaterialDecal_Validate(const FHitResult& Hit)
{
	if (ImpactDecalMaterial == nullptr) return false;
	// hit data isn't null
	if (Hit.bBlockingHit == false) return false;
	// hit location is in a reasonable range (1000 units squared) from projectile's current location
	if (FVector::DistSquared(Hit.Location, GetActorLocation()) > 1000000.f) return false;
	// player who fired projectile has authority to spawn projectiles on server
	if (GetOwner()->HasAuthority() == false) return false;

	return true;
}
#pragma endregion

#pragma endregion