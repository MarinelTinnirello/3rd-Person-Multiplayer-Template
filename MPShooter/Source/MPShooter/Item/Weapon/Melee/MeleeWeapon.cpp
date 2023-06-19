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

//AMeleeWeapon::AMeleeWeapon()
//{
//	WeaponBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Weapon Box"));
//	WeaponBox->SetupAttachment(GetRootComponent());
//	WeaponBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
//	WeaponBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
//	WeaponBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
//
//	BoxTraceStart = CreateDefaultSubobject<USceneComponent>(TEXT("Box Trace Start"));
//	BoxTraceStart->SetupAttachment(GetRootComponent());
//
//	BoxTraceEnd = CreateDefaultSubobject<USceneComponent>(TEXT("Box Trace End"));
//	BoxTraceEnd->SetupAttachment(GetRootComponent());
//}
//
//void AMeleeWeapon::BeginPlay()
//{
//	Super::BeginPlay();
//
//	WeaponBox->OnComponentBeginOverlap.AddDynamic(this, &AMeleeWeapon::OnBoxOverlap);
//}
//
//void AMeleeWeapon::OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	APawn* OwnerPawn = Cast<APawn>(GetOwner());
//	if (OwnerPawn == nullptr)
//	{
//		return;
//	}
//
//	AController* InstigatorController = OwnerPawn->GetController();
//	if (InstigatorController)
//	{
//		FHitResult BoxHit;
//		BoxTrace(BoxHit);
//
//		AMPCharacter* MPCharacter = Cast<AMPCharacter>(BoxHit.GetActor());
//		if (MPCharacter && InstigatorController)
//		{
//			bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();
//			UMPAnimInstance* AnimInstance = Cast<UMPAnimInstance>(MPCharacter->GetMesh()->GetAnimInstance());
//			if (HasAuthority() && bCauseAuthDamage && AnimInstance)
//			{
//				/*const float DamageToCause = BoxHit.BoneName == AnimInstance->GetHeadBone() ? HeadShotDamage : Damage;
//				UGameplayStatics::ApplyDamage(
//					MPCharacter,
//					DamageToCause,
//					InstigatorController,
//					this,
//					UDamageType::StaticClass()
//				);*/
//				MPCharacter->DirectionalHitReact(BoxHit.ImpactPoint);
//			}
//			if (!HasAuthority() && bUseServerSideRewind)
//			{
//				MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(OwnerPawn) : MPOwnerCharacter;
//				MPOwnerController = MPOwnerController == nullptr ? Cast<AMPPlayerController>(InstigatorController) : MPOwnerController;
//				if (MPOwnerController && MPOwnerCharacter && MPOwnerCharacter->GetLagCompensation())
//				{
//					/*MPOwnerCharacter->GetLagCompensation()->ServerScoreRequest(
//						MPCharacter,
//						BoxTraceStart,
//						HitTarget,
//						MPOwnerController->GetServerTime() - MPOwnerController->SingleTripTime
//					);*/
//				}
//			}
//		}
//		if (ImpactParticles)
//		{
//			UGameplayStatics::SpawnEmitterAtLocation(
//				GetWorld(),
//				ImpactParticles,
//				BoxHit.ImpactPoint,
//				BoxHit.ImpactNormal.Rotation()
//			);
//		}
//		if (ImpactSound)
//		{
//			UGameplayStatics::PlaySoundAtLocation(
//				this,
//				ImpactSound,
//				BoxHit.ImpactPoint
//			);
//		}
//	}
//}
//
//void AMeleeWeapon::SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled)
//{
//	if (WeaponBox)
//	{
//		WeaponBox->SetCollisionEnabled(CollisionEnabled);
//	}
//}

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
					/*MPOwnerCharacter->GetLagCompensation()->ServerScoreRequest(
						MPCharacter,
						Start,
						HitTarget,
						MPOwnerController->GetServerTime() - MPOwnerController->SingleTripTime
					);*/
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

//void AMeleeWeapon::BoxTrace(FHitResult& BoxHit)
//{
//	const FVector Start = BoxTraceStart->GetComponentLocation();
//	const FVector End = BoxTraceEnd->GetComponentLocation();
//
//	TArray<AActor*> ActorsToIgnore;
//	ActorsToIgnore.Add(this);
//	ActorsToIgnore.Add(GetOwner());
//	for (AActor* Actor : IgnoreActors)
//	{
//		ActorsToIgnore.AddUnique(Actor);
//	}
//
//	UKismetSystemLibrary::BoxTraceSingle(
//		this,
//		Start,
//		End,
//		BoxTraceExtent,
//		BoxTraceStart->GetComponentRotation(),
//		ETraceTypeQuery::TraceTypeQuery1,
//		false,
//		ActorsToIgnore,
//		bDrawHitCollision ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None, BoxHit,
//		true
//	);
//	IgnoreActors.AddUnique(BoxHit.GetActor());
//}

