// Fill out your copyright notice in the Description page of Project Settings.

#include "MeleeWeapon.h"
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
void AMeleeWeapon::Fire(const FVector& HitTarget)
{
	if (FireAnimation)
	{
		GetItemMesh()->PlayAnimation(FireAnimation, false);
	}

	//APawn* OwnerPawn = Cast<APawn>(GetOwner());
	//if (OwnerPawn == nullptr)
	//{
	//	return;
	//}

	//AController* InstigatorController = OwnerPawn->GetController();
	//const USkeletalMeshSocket* StartTraceSocket = GetItemMesh()->GetSocketByName(StartSocket);
	//const USkeletalMeshSocket* EndTraceSocket = GetItemMesh()->GetSocketByName(EndSocket);
	//if (StartTraceSocket && EndTraceSocket && InstigatorController)
	//{
	//	FTransform StartSocketTransform = StartTraceSocket->GetSocketTransform(GetItemMesh());
	//	FVector Start = StartSocketTransform.GetLocation();
	//	FTransform EndSocketTransform = EndTraceSocket->GetSocketTransform(GetItemMesh());
	//	FVector End = EndSocketTransform.GetLocation();
	//	FHitResult FireHit;
	//	WeaponTraceHit(Start, End, FireHit);

	//	//HitActor = FireHit.GetActor()->Implements<UInteractWithCrosshairsInterface>() ? EHitActor::EHA_Character : EHitActor::EHA_Environment;
	//	//MulticastActorOnHit(HitActor);
	//	//if (HitActor == EHitActor::EHA_Environment)
	//	//{
	//	//	ServerSpawnMaterialDecal(FireHit);
	//	//}

	//	AMPCharacter* MPCharacter = Cast<AMPCharacter>(FireHit.GetActor());
	//	if (MPCharacter && InstigatorController)
	//	{
	//		bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();
	//		UMPAnimInstance* AnimInstance = Cast<UMPAnimInstance>(MPCharacter->GetMesh()->GetAnimInstance());
	//		if (HasAuthority() && bCauseAuthDamage && AnimInstance)
	//		{
	//			const float DamageToCause = FireHit.BoneName == AnimInstance->GetHeadBone() ? HeadShotDamage : Damage;
	//			UGameplayStatics::ApplyDamage(
	//				MPCharacter,
	//				DamageToCause,
	//				InstigatorController,
	//				this,
	//				UDamageType::StaticClass()
	//			);
	//			MPCharacter->DirectionalHitReact(FireHit.ImpactPoint);
	//		}
	//		if (!HasAuthority() && bUseServerSideRewind)
	//		{
	//			MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(OwnerPawn) : MPOwnerCharacter;
	//			MPOwnerController = MPOwnerController == nullptr ? Cast<AMPPlayerController>(InstigatorController) : MPOwnerController;
	//			if (MPOwnerController && MPOwnerCharacter && MPOwnerCharacter->GetLagCompensation())
	//			{
	//				MPOwnerCharacter->GetLagCompensation()->ServerScoreRequest(
	//					MPCharacter,
	//					Start,
	//					HitTarget,
	//					MPOwnerController->GetServerTime() - MPOwnerController->SingleTripTime
	//				);
	//			}
	//		}
	//	}
	//	if (ImpactParticles)
	//	{
	//		UGameplayStatics::SpawnEmitterAtLocation(
	//			GetWorld(),
	//			ImpactParticles,
	//			FireHit.ImpactPoint,
	//			FireHit.ImpactNormal.Rotation()
	//		);
	//	}
	//	if (ImpactNiagaraParticles)
	//	{
	//		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
	//			GetWorld(),
	//			ImpactNiagaraParticles,
	//			FireHit.ImpactPoint,
	//			FireHit.ImpactNormal.Rotation()
	//		);
	//	}
	//	if (ImpactSound)
	//	{
	//		UGameplayStatics::PlaySoundAtLocation(
	//			this,
	//			ImpactSound,
	//			FireHit.ImpactPoint
	//		);
	//	}
	//}
}

void AMeleeWeapon::WeaponTraceHit(const FVector& TraceStart, const FVector& HitTarget, FHitResult& OutHit)
{
	UWorld* World = GetWorld();
	if (World)
	{
		World->LineTraceSingleByChannel(
			OutHit,
			TraceStart,
			HitTarget,
			ECollisionChannel::ECC_Visibility
		);
		//FVector HalfSize(8.f, 8.f, 45.f);
		/*UKismetSystemLibrary::BoxTraceSingleForObjects(
			World,
			TraceStart,
			HitTarget,
			HalfSize,
			GetActorRotation(),
			TArray<TEnumAsByte<EObjectTypeQuery>>(),
			true,
			TArray<AActor*>(),
			EDrawDebugTrace::None,
			OutHit,
			true
		);*/

		FVector BeamEnd = HitTarget;
		if (OutHit.bBlockingHit)
		{
			BeamEnd = OutHit.ImpactPoint;
		}
		else
		{
			OutHit.ImpactPoint = HitTarget;
		}
	}
}
#pragma endregion

#pragma region Overrideable Actions
void AMeleeWeapon::HitActorDamage()
{
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

		TArray<AActor*> IgnoreActors;
		IgnoreActors.Add(OwnerPawn);
		bool bHitActor = UKismetSystemLibrary::SphereTraceSingle(
			GetWorld(),
			Start,
			End,
			Radius,
			UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Visibility),
			false,
			IgnoreActors,
			bDrawHitCollision ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
			FireHit,
			true
		);
		if (bHitActor)
		{
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
							FireHit.ImpactPoint,
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
}

void AMeleeWeapon::ActorHitType(EHitActor HitActorType)
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
void AMeleeWeapon::MulticastActorOnHit_Implementation(EHitActor HitActorType)
{
	ActorHitType(HitActorType);
}

void AMeleeWeapon::MulticastSpawnMaterialDecal_Implementation(const FHitResult& Hit)
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
void AMeleeWeapon::ServerSpawnMaterialDecal_Implementation(const FHitResult& Hit)
{
	MulticastSpawnMaterialDecal(Hit);
}

bool AMeleeWeapon::ServerSpawnMaterialDecal_Validate(const FHitResult& Hit)
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