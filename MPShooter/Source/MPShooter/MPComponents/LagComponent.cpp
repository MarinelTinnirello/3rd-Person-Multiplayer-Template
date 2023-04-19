// Fill out your copyright notice in the Description page of Project Settings.


#include "LagComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MPShooter/MPShooter.h"
#include "MPShooter/Item/Weapon/Weapon.h"
#include "MPShooter/Interfaces/ProjectileInterface.h"
#include "MPShooter/Character/MPCharacter.h"
#include "DrawDebugHelpers.h"

ULagComponent::ULagComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void ULagComponent::BeginPlay()
{
	Super::BeginPlay();

}

void ULagComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	SaveFramePackage();
}

void ULagComponent::SaveFramePackage()
{
	if (Character == nullptr || !Character->HasAuthority())
	{
		return;
	}

	if (FrameHistory.Num() <= 1)
	{
		FFramePackage ThisFrame;
		SaveFramePackage(ThisFrame);
		FrameHistory.AddHead(ThisFrame);
	}
	else
	{
		float HistoryLength = FrameHistory.GetHead()->GetValue().Time - FrameHistory.GetTail()->GetValue().Time;
		while (HistoryLength > MaxRecordTime)
		{
			FrameHistory.RemoveNode(FrameHistory.GetTail());
			HistoryLength = FrameHistory.GetHead()->GetValue().Time - FrameHistory.GetTail()->GetValue().Time;
		}

		FFramePackage ThisFrame;
		SaveFramePackage(ThisFrame);
		FrameHistory.AddHead(ThisFrame);
		if (bDrawSSRFramePkg)
		{
			ShowFramePackage(ThisFrame, FColor::Orange);
		}
	}
}

void ULagComponent::SaveFramePackage(FFramePackage& Package)
{
	Character = Character == nullptr ? Cast<AMPCharacter>(GetOwner()) : Character;
	if (Character)
	{
		Package.Time = GetWorld()->GetTimeSeconds();

		/*if (!Character->HitCollisionBoxes.IsEmpty())
		{
			for (auto& BoxPair : Character->HitCollisionBoxes)
			{
				FBoxInformation BoxInformation;
				BoxInformation.Location = BoxPair.Value->GetComponentLocation();
				BoxInformation.Rotation = BoxPair.Value->GetComponentRotation();
				BoxInformation.BoxExtent = BoxPair.Value->GetScaledBoxExtent();
				Package.HitBoxInfo.Add(BoxPair.Key, BoxInformation);
			}
		}*/
		if (!Character->HitCollisionCapsules.IsEmpty())
		{
			for (auto& CapsulePair : Character->HitCollisionCapsules)
			{
				FCapsuleInformation CapsuleInformation;
				CapsuleInformation.Location = CapsulePair.Value->GetComponentLocation();
				CapsuleInformation.Rotation = CapsulePair.Value->GetComponentRotation();
				CapsuleInformation.CapsuleHalfHeight = CapsulePair.Value->GetScaledCapsuleHalfHeight();
				CapsuleInformation.CapsuleRadius = CapsulePair.Value->GetScaledCapsuleRadius();
				Package.HitCapsuleInfo.Add(CapsulePair.Key, CapsuleInformation);
			}
		}
	}
}

FFramePackage ULagComponent::GetFrameToCheck(AMPCharacter* HitCharacter, float HitTime)
{
	bool bReturn =
		HitCharacter == nullptr ||
		HitCharacter->GetLagCompensation() == nullptr ||
		HitCharacter->GetLagCompensation()->FrameHistory.GetHead() == nullptr ||
		HitCharacter->GetLagCompensation()->FrameHistory.GetTail() == nullptr;
	if (bReturn)
	{
		return FFramePackage();
	}

	FFramePackage FrameToCheck;
	bool bShouldInterpolate = true;

	const TDoubleLinkedList<FFramePackage>& History = HitCharacter->GetLagCompensation()->FrameHistory;
	const float OldestHistoryTime = History.GetTail()->GetValue().Time;
	const float NewestHistoryTime = History.GetHead()->GetValue().Time;
	// too far back to be stored in our records - too laggy to do SSR
	if (OldestHistoryTime > HitTime)
	{
		return FFramePackage();
	}
	if (OldestHistoryTime == HitTime)
	{
		FrameToCheck = History.GetTail()->GetValue();
		bShouldInterpolate = false;
	}
	if (NewestHistoryTime <= HitTime)
	{
		FrameToCheck = History.GetHead()->GetValue();
		bShouldInterpolate = false;
	}

	TDoubleLinkedList<FFramePackage>::TDoubleLinkedListNode* Younger = History.GetHead();
	TDoubleLinkedList<FFramePackage>::TDoubleLinkedListNode* Older = Younger;
	// while older is still younger than HitTime
	while (Older->GetValue().Time > HitTime)
	{
		// March back until: OlderTime < HitTime < YoungerTime
		if (Older->GetNextNode() == nullptr)
		{
			break;
		}

		Older = Older->GetNextNode();
		if (Older->GetValue().Time > HitTime)
		{
			Younger = Older;
		}
	}

	// found our frame to check (very unlikely)
	if (Older->GetValue().Time == HitTime)
	{
		FrameToCheck = Older->GetValue();
		bShouldInterpolate = false;
	}
	if (bShouldInterpolate)
	{
		FrameToCheck = InterpBetweenFrames(Older->GetValue(), Younger->GetValue(), HitTime);
	}

	return FrameToCheck;
}

FFramePackage ULagComponent::InterpBetweenFrames(const FFramePackage& OlderFrame, const FFramePackage& YoungerFrame, float HitTime)
{
	const float Distance = YoungerFrame.Time - OlderFrame.Time;
	const float InterpFraction = FMath::Clamp((HitTime - OlderFrame.Time) / Distance, 0.f, 1.f);

	FFramePackage InterpFramePackage;
	InterpFramePackage.Time = HitTime;

	/*for (auto& YoungerPair : YoungerFrame.HitBoxInfo)
	{
		const FName& BoxInfoName = YoungerPair.Key;
		const FBoxInformation& OlderBox = OlderFrame.HitBoxInfo[BoxInfoName];
		const FBoxInformation& YoungerBox = YoungerFrame.HitBoxInfo[BoxInfoName];
		FBoxInformation InterpBoxInfo;
		InterpBoxInfo.Location = FMath::VInterpTo(OlderBox.Location, YoungerBox.Location, 1.f, InterpFraction);
		InterpBoxInfo.Rotation = FMath::RInterpTo(OlderBox.Rotation, YoungerBox.Rotation, 1.f, InterpFraction);
		InterpBoxInfo.BoxExtent = YoungerBox.BoxExtent;
		InterpFramePackage.HitBoxInfo.Add(BoxInfoName, InterpBoxInfo);
	}*/
	for (auto& YoungerPair : YoungerFrame.HitCapsuleInfo)
	{
		const FName& CapsuleInfoName = YoungerPair.Key;
		const FCapsuleInformation& OlderCapsule = OlderFrame.HitCapsuleInfo[CapsuleInfoName];
		const FCapsuleInformation& YoungerCapsule = YoungerFrame.HitCapsuleInfo[CapsuleInfoName];
		FCapsuleInformation InterpCapsuleInfo;
		InterpCapsuleInfo.Location = FMath::VInterpTo(OlderCapsule.Location, YoungerCapsule.Location, 1.f, InterpFraction);
		InterpCapsuleInfo.Rotation = FMath::RInterpTo(OlderCapsule.Rotation, YoungerCapsule.Rotation, 1.f, InterpFraction);
		InterpCapsuleInfo.CapsuleHalfHeight = YoungerCapsule.CapsuleHalfHeight;
		InterpCapsuleInfo.CapsuleRadius = YoungerCapsule.CapsuleRadius;
		InterpFramePackage.HitCapsuleInfo.Add(CapsuleInfoName, InterpCapsuleInfo);
	}

	return InterpFramePackage;
}

void ULagComponent::ShowFramePackage(const FFramePackage& Package, const FColor& Color)
{
	/*if (!Character->HitCollisionBoxes.IsEmpty())
	{
		for (auto& BoxInfo : Package.HitBoxInfo)
		{
			DrawDebugBox(
				GetWorld(),
				BoxInfo.Value.Location,
				BoxInfo.Value.BoxExtent,
				FQuat(BoxInfo.Value.Rotation),
				Color,
				false,
				ShowFramePkgLifeSpan
			);
		}
	}*/
	if (!Character->HitCollisionCapsules.IsEmpty())
	{
		for (auto& CapsuleInfo : Package.HitCapsuleInfo)
		{
			DrawDebugCapsule(
				GetWorld(),
				CapsuleInfo.Value.Location,
				CapsuleInfo.Value.CapsuleHalfHeight,
				CapsuleInfo.Value.CapsuleRadius,
				FQuat(CapsuleInfo.Value.Rotation),
				Color,
				false,
				ShowFramePkgLifeSpan
			);
		}
	}
}

void ULagComponent::CacheHitPositions(AMPCharacter* HitCharacter, FFramePackage& OutFramePackage)
{
	if (HitCharacter == nullptr)
	{
		return;
	}

	/*for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
	{
		if (HitBoxPair.Value != nullptr)
		{
			FBoxInformation BoxInfo;
			BoxInfo.Location = HitBoxPair.Value->GetComponentLocation();
			BoxInfo.Rotation = HitBoxPair.Value->GetComponentRotation();
			BoxInfo.BoxExtent = HitBoxPair.Value->GetScaledBoxExtent();
			OutFramePackage.HitBoxInfo.Add(HitBoxPair.Key, BoxInfo);
		}
	}*/
	for (auto& HitCapsulePair : HitCharacter->HitCollisionCapsules)
	{
		if (HitCapsulePair.Value != nullptr)
		{
			FCapsuleInformation CapsuleInfo;
			CapsuleInfo.Location = HitCapsulePair.Value->GetComponentLocation();
			CapsuleInfo.Rotation = HitCapsulePair.Value->GetComponentRotation();
			CapsuleInfo.CapsuleHalfHeight = HitCapsulePair.Value->GetScaledCapsuleHalfHeight();
			CapsuleInfo.CapsuleRadius = HitCapsulePair.Value->GetScaledCapsuleRadius();
			OutFramePackage.HitCapsuleInfo.Add(HitCapsulePair.Key, CapsuleInfo);
		}
	}
}

void ULagComponent::MoveHitColliders(AMPCharacter* HitCharacter, const FFramePackage& Package)
{
	if (HitCharacter == nullptr)
	{
		return;
	}

	/*for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
	{
		if (HitBoxPair.Value != nullptr)
		{
			HitBoxPair.Value->SetWorldLocation(Package.HitBoxInfo[HitBoxPair.Key].Location);
			HitBoxPair.Value->SetWorldRotation(Package.HitBoxInfo[HitBoxPair.Key].Rotation);
			HitBoxPair.Value->SetBoxExtent(Package.HitBoxInfo[HitBoxPair.Key].BoxExtent);
		}
	}*/
	for (auto& HitCapsulePair : HitCharacter->HitCollisionCapsules)
	{
		if (HitCapsulePair.Value != nullptr)
		{
			HitCapsulePair.Value->SetWorldLocation(Package.HitCapsuleInfo[HitCapsulePair.Key].Location);
			HitCapsulePair.Value->SetWorldRotation(Package.HitCapsuleInfo[HitCapsulePair.Key].Rotation);
			HitCapsulePair.Value->SetCapsuleHalfHeight(Package.HitCapsuleInfo[HitCapsulePair.Key].CapsuleHalfHeight);
			HitCapsulePair.Value->SetCapsuleRadius(Package.HitCapsuleInfo[HitCapsulePair.Key].CapsuleRadius);
		}
	}
}

void ULagComponent::ResetHitColliders(AMPCharacter* HitCharacter, const FFramePackage& Package)
{
	if (HitCharacter == nullptr)
	{
		return;
	}

	/*for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
	{
		if (HitBoxPair.Value != nullptr)
		{
			HitBoxPair.Value->SetWorldLocation(Package.HitBoxInfo[HitBoxPair.Key].Location);
			HitBoxPair.Value->SetWorldRotation(Package.HitBoxInfo[HitBoxPair.Key].Rotation);
			HitBoxPair.Value->SetBoxExtent(Package.HitBoxInfo[HitBoxPair.Key].BoxExtent);
			HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}*/
	for (auto& HitCapsulePair : HitCharacter->HitCollisionCapsules)
	{
		if (HitCapsulePair.Value != nullptr)
		{
			HitCapsulePair.Value->SetWorldLocation(Package.HitCapsuleInfo[HitCapsulePair.Key].Location);
			HitCapsulePair.Value->SetWorldRotation(Package.HitCapsuleInfo[HitCapsulePair.Key].Rotation);
			HitCapsulePair.Value->SetCapsuleHalfHeight(Package.HitCapsuleInfo[HitCapsulePair.Key].CapsuleHalfHeight);
			HitCapsulePair.Value->SetCapsuleRadius(Package.HitCapsuleInfo[HitCapsulePair.Key].CapsuleRadius);
			HitCapsulePair.Value->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}

void ULagComponent::EnableCharacterMeshCollision(AMPCharacter* HitCharacter, ECollisionEnabled::Type CollisionEnabled)
{
	if (HitCharacter && HitCharacter->GetMesh())
	{
		HitCharacter->GetMesh()->SetCollisionEnabled(CollisionEnabled);
	}
}

FServerSideRewindResult ULagComponent::ServerSideRewind(AMPCharacter* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize& HitLocation, float HitTime)
{
	FFramePackage FrameToCheck = GetFrameToCheck(HitCharacter, HitTime);
	return ConfirmHit(FrameToCheck, HitCharacter, TraceStart, HitLocation);
}

void ULagComponent::ServerScoreRequest_Implementation(AMPCharacter* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize& HitLocation, float HitTime, AWeapon* DamageCauser)
{
	FServerSideRewindResult Confirm = ServerSideRewind(HitCharacter, TraceStart, HitLocation, HitTime);
	if (Character && HitCharacter && DamageCauser && Confirm.bHitConfirmed)
	{
		UGameplayStatics::ApplyDamage(
			HitCharacter,
			DamageCauser->GetDamage(),
			Character->Controller,
			DamageCauser,
			UDamageType::StaticClass()
		);
	}
}

FServerSideRewindResult ULagComponent::ConfirmHit(const FFramePackage& Package, AMPCharacter* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize& HitLocation)
{
	if (HitCharacter == nullptr)
	{
		return FServerSideRewindResult();
	}

	FFramePackage CurrentFrame;
	CacheHitPositions(HitCharacter, CurrentFrame);
	MoveHitColliders(HitCharacter, Package);
	EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::NoCollision);

	// Enable collision for the head 1st
	// TODO: Make this agnostic
	// might need to run a loop through our hit capsules & boxes to find a bone with that name
	UCapsuleComponent* HeadComp = HitCharacter->HitCollisionCapsules[FName(HeadBone)];
	HeadComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	HeadComp->SetCollisionResponseToChannel(ECC_HitBox, ECollisionResponse::ECR_Block);

	FHitResult ConfirmHitResult;
	const FVector TraceEnd = TraceStart + (HitLocation - TraceStart) * 1.25f;
	UWorld* World = GetWorld();
	if (World)
	{
		if (bDrawSSRConfirmHit)
		{
			World->LineTraceSingleByChannel(
				ConfirmHitResult,
				TraceStart,
				TraceEnd,
				ECC_HitBox
			);
		}

		// head shot, return early
		if (ConfirmHitResult.bBlockingHit)
		{
			if (ConfirmHitResult.Component.IsValid() && bDrawSSRConfirmHit)
			{
				UBoxComponent* Box = Cast<UBoxComponent>(ConfirmHitResult.Component);
				if (Box)
				{
					DrawDebugBox(
						GetWorld(), 
						Box->GetComponentLocation(), 
						Box->GetScaledBoxExtent(), 
						FQuat(Box->GetComponentRotation()), 
						FColor::Red, 
						false, 
						8.f
					);
				}
			}

			ResetHitColliders(HitCharacter, CurrentFrame);
			EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::QueryAndPhysics);
			return FServerSideRewindResult{ true, true };
		}
		else 
		{
			/*for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
			{
				if (HitBoxPair.Value != nullptr)
				{
					HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
					HitBoxPair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECollisionResponse::ECR_Block);
				}
			}*/
			for (auto& HitCapsulePair : HitCharacter->HitCollisionCapsules)
			{
				if (HitCapsulePair.Value != nullptr)
				{
					HitCapsulePair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
					HitCapsulePair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECollisionResponse::ECR_Block);
				}
			}

			if (bDrawSSRConfirmHit)
			{
				World->LineTraceSingleByChannel(
					ConfirmHitResult,
					TraceStart,
					TraceEnd,
					ECC_HitBox
				);
			}

			if (ConfirmHitResult.bBlockingHit)
			{
				if (ConfirmHitResult.Component.IsValid() && bDrawSSRConfirmHit)
				{
					UBoxComponent* Box = Cast<UBoxComponent>(ConfirmHitResult.Component);
					if (Box)
					{
						DrawDebugBox(
							GetWorld(),
							Box->GetComponentLocation(),
							Box->GetScaledBoxExtent(),
							FQuat(Box->GetComponentRotation()),
							FColor::Blue, 
							false, 
							8.f
						);
					}
				}

				ResetHitColliders(HitCharacter, CurrentFrame);
				EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::QueryAndPhysics);
				return FServerSideRewindResult{ true, false };
			}
		}
	}

	ResetHitColliders(HitCharacter, CurrentFrame);
	EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::QueryAndPhysics);
	return FServerSideRewindResult{ false, false };
}

FServerSideRewindShotgunResult ULagComponent::ServerSideRewindShotgun(const TArray<AMPCharacter*>& HitCharacters, const FVector_NetQuantize& TraceStart, const TArray<FVector_NetQuantize>& HitLocations, float HitTime)
{
	TArray<FFramePackage> FramesToCheck;
	for (AMPCharacter* HitCharacter : HitCharacters)
	{
		FramesToCheck.Add(GetFrameToCheck(HitCharacter, HitTime));
	}

	return ConfirmHitShotgun(FramesToCheck, TraceStart, HitLocations);
}

void ULagComponent::ServerScoreRequestShotgun_Implementation(const TArray<AMPCharacter*>& HitCharacters, const FVector_NetQuantize& TraceStart, const TArray<FVector_NetQuantize>& HitLocations, float HitTime)
{
	FServerSideRewindShotgunResult Confirm = ServerSideRewindShotgun(HitCharacters, TraceStart, HitLocations, HitTime);

	for (auto& HitCharacter : HitCharacters)
	{
		if (HitCharacter == nullptr || Character->GetEquippedWeapon() == nullptr || Character == nullptr)
		{
			continue;
		}

		float TotalDamage = 0.f;
		if (Confirm.HeadShots.Contains(HitCharacter))
		{
			float HeadShotDamage = Confirm.HeadShots[HitCharacter] * Character->GetEquippedWeapon()->GetDamage();
			TotalDamage += HeadShotDamage;
		}
		if (Confirm.BodyShots.Contains(HitCharacter))
		{
			float BodyShotDamage = Confirm.BodyShots[HitCharacter] * Character->GetEquippedWeapon()->GetDamage();
			TotalDamage += BodyShotDamage;
		}

		UGameplayStatics::ApplyDamage(
			HitCharacter,
			TotalDamage,
			Character->Controller,
			Character->GetEquippedWeapon(),
			UDamageType::StaticClass()
		);
	}
}

FServerSideRewindShotgunResult ULagComponent::ConfirmHitShotgun(const TArray<FFramePackage>& FramePackages, const FVector_NetQuantize& TraceStart, const TArray<FVector_NetQuantize>& HitLocations)
{
	for (auto& Frame : FramePackages)
	{
		if (Frame.Character == nullptr)
		{
			return FServerSideRewindShotgunResult();
		}
	}

	FServerSideRewindShotgunResult ShotgunResult;
	TArray<FFramePackage> CurrentFrames;
	for (auto& Frame : FramePackages)
	{
		FFramePackage CurrentFrame;
		CurrentFrame.Character = Frame.Character;
		CacheHitPositions(Frame.Character, CurrentFrame);
		MoveHitColliders(Frame.Character, Frame);
		EnableCharacterMeshCollision(Frame.Character, ECollisionEnabled::NoCollision);
		CurrentFrames.Add(CurrentFrame);
	}

	for (auto& Frame : FramePackages)
	{
		// Enable collision for the head 1st
		// TODO: Make this agnostic
		// might need to run a loop through our hit capsules & boxes to find a bone with that name
		UCapsuleComponent* HeadComp = Frame.Character->HitCollisionCapsules[FName(HeadBone)];
		HeadComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		HeadComp->SetCollisionResponseToChannel(ECC_HitBox, ECollisionResponse::ECR_Block);
	}

	UWorld* World = GetWorld();
	// check for head shots
	for (auto& HitLocation : HitLocations)
	{
		FHitResult ConfirmHitResult;
		const FVector TraceEnd = TraceStart + (HitLocation - TraceStart) * 1.25f;
		if (World)
		{
			if (bDrawSSRConfirmHit)
			{
				World->LineTraceSingleByChannel(
					ConfirmHitResult,
					TraceStart,
					TraceEnd,
					ECC_HitBox
				);
			}

			AMPCharacter* MPCharacter = Cast<AMPCharacter>(ConfirmHitResult.GetActor());
			if (MPCharacter)
			{
				if (ConfirmHitResult.Component.IsValid() && bDrawSSRConfirmHit)
				{
					UBoxComponent* Box = Cast<UBoxComponent>(ConfirmHitResult.Component);
					if (Box)
					{
						DrawDebugBox(
							GetWorld(),
							Box->GetComponentLocation(),
							Box->GetScaledBoxExtent(),
							FQuat(Box->GetComponentRotation()),
							FColor::Red, 
							false, 
							8.f
						);
					}
				}

				if (ShotgunResult.HeadShots.Contains(MPCharacter))
				{
					ShotgunResult.HeadShots[MPCharacter]++;
				}
				else
				{
					ShotgunResult.HeadShots.Emplace(MPCharacter, 1);
				}
			}
		}
	}

	// enable collision for all colliders, then disable for head collider
	for (auto& Frame : FramePackages)
	{
		/*for (auto& HitBoxPair : Frame.Character->HitCollisionBoxes)
		{
			if (HitBoxPair.Value != nullptr)
			{
				HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				HitBoxPair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECollisionResponse::ECR_Block);
			}
		}*/
		for (auto& HitCapsulePair : Frame.Character->HitCollisionCapsules)
		{
			if (HitCapsulePair.Value != nullptr)
			{
				HitCapsulePair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				HitCapsulePair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECollisionResponse::ECR_Block);
			}
		}

		// TODO: Make this agnostic
		// might need to run a loop through our hit capsules & boxes to find a bone with that name
		UCapsuleComponent* HeadComp = Frame.Character->HitCollisionCapsules[FName(HeadBone)];
		HeadComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	// check for body shots
	for (auto& HitLocation : HitLocations)
	{
		FHitResult ConfirmHitResult;
		const FVector TraceEnd = TraceStart + (HitLocation - TraceStart) * 1.25f;
		if (World)
		{
			if (bDrawSSRConfirmHit)
			{
				World->LineTraceSingleByChannel(
					ConfirmHitResult,
					TraceStart,
					TraceEnd,
					ECC_HitBox
				);
			}

			AMPCharacter* MPCharacter = Cast<AMPCharacter>(ConfirmHitResult.GetActor());
			if (MPCharacter)
			{
				if (ConfirmHitResult.Component.IsValid() && bDrawSSRConfirmHit)
				{
					UBoxComponent* Box = Cast<UBoxComponent>(ConfirmHitResult.Component);
					if (Box)
					{
						DrawDebugBox(
							GetWorld(),
							Box->GetComponentLocation(),
							Box->GetScaledBoxExtent(),
							FQuat(Box->GetComponentRotation()),
							FColor::Blue, 
							false, 
							8.f
						);
					}
				}

				if (ShotgunResult.BodyShots.Contains(MPCharacter))
				{
					ShotgunResult.BodyShots[MPCharacter]++;
				}
				else
				{
					ShotgunResult.BodyShots.Emplace(MPCharacter, 1);
				}
			}
		}
	}

	for (auto& Frame : CurrentFrames)
	{
		ResetHitColliders(Frame.Character, Frame);
		EnableCharacterMeshCollision(Frame.Character, ECollisionEnabled::QueryAndPhysics);
	}

	return ShotgunResult;
}

FServerSideRewindResult ULagComponent::ServerSideRewindProjectile(AMPCharacter* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize100& InitialVelocity, float HitTime)
{
	FFramePackage FrameToCheck = GetFrameToCheck(HitCharacter, HitTime);
	return ConfirmHitProjectile(FrameToCheck, HitCharacter, TraceStart, InitialVelocity, HitTime);
}

void ULagComponent::ServerScoreRequestProjectile_Implementation(AMPCharacter* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize100& InitialVelocity, float HitTime)
{
	FServerSideRewindResult Confirm = ServerSideRewindProjectile(HitCharacter, TraceStart, InitialVelocity, HitTime);
	if (Character && HitCharacter && Confirm.bHitConfirmed)
	{
		UGameplayStatics::ApplyDamage(
			HitCharacter,
			Character->GetEquippedWeapon()->GetDamage(),
			Character->Controller,
			Character->GetEquippedWeapon(),
			UDamageType::StaticClass()
		);
	}
}

FServerSideRewindResult ULagComponent::ConfirmHitProjectile(const FFramePackage& Package, AMPCharacter* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize100& InitialVelocity, float HitTime)
{
	FFramePackage CurrentFrame;
	CacheHitPositions(HitCharacter, CurrentFrame);
	MoveHitColliders(HitCharacter, Package);
	EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::NoCollision);

	// Enable collision for the head 1st
	// TODO: Make this agnostic
	// might need to run a loop through our hit capsules & boxes to find a bone with that name
	UCapsuleComponent* HeadComp = HitCharacter->HitCollisionCapsules[FName(HeadBone)];
	HeadComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	HeadComp->SetCollisionResponseToChannel(ECC_HitBox, ECollisionResponse::ECR_Block);

	float ProjectileRadius;
	if (Character->GetEquippedWeapon()->Implements<UProjectileInterface>())
	{
		IProjectileInterface* Interface = Cast<IProjectileInterface>(Character->GetEquippedWeapon());
		ProjectileRadius = Interface->GetProjectileRadius(Character->GetEquippedWeapon());
	}
	else
	{
		ProjectileRadius = 5.f;
	}
	
	FPredictProjectilePathParams PathParams;
	PathParams.bTraceWithCollision = true;
	PathParams.MaxSimTime = MaxRecordTime;
	PathParams.LaunchVelocity = InitialVelocity;
	PathParams.StartLocation = TraceStart;
	PathParams.SimFrequency = 15.f;
	PathParams.ProjectileRadius = ProjectileRadius;
	PathParams.TraceChannel = ECC_HitBox;
	PathParams.ActorsToIgnore.Add(GetOwner());
	PathParams.DrawDebugTime = 5.f;
	PathParams.DrawDebugType = EDrawDebugTrace::ForDuration;

	FPredictProjectilePathResult PathResult;
	UGameplayStatics::PredictProjectilePath(this, PathParams, PathResult);

	// head shot, return early
	if (PathResult.HitResult.bBlockingHit)
	{
		if (PathResult.HitResult.Component.IsValid() && bDrawSSRConfirmHit)
		{
			UBoxComponent* Box = Cast<UBoxComponent>(PathResult.HitResult.Component);
			if (Box)
			{
				DrawDebugBox(
					GetWorld(), 
					Box->GetComponentLocation(), 
					Box->GetScaledBoxExtent(), 
					FQuat(Box->GetComponentRotation()), 
					FColor::Red, 
					false, 
					8.f
				);
			}
		}

		ResetHitColliders(HitCharacter, CurrentFrame);
		EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::QueryAndPhysics);
		return FServerSideRewindResult{ true, true };
	}
	else
	{
		/*for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
		{
			if (HitBoxPair.Value != nullptr)
			{
				HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				HitBoxPair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECollisionResponse::ECR_Block);
			}
		}*/
		for (auto& HitCapsulePair : HitCharacter->HitCollisionCapsules)
		{
			if (HitCapsulePair.Value != nullptr)
			{
				HitCapsulePair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				HitCapsulePair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECollisionResponse::ECR_Block);
			}
		}

		UGameplayStatics::PredictProjectilePath(this, PathParams, PathResult);
		if (PathResult.HitResult.bBlockingHit)
		{
			if (PathResult.HitResult.Component.IsValid() && bDrawSSRConfirmHit)
			{
				UBoxComponent* Box = Cast<UBoxComponent>(PathResult.HitResult.Component);
				if (Box)
				{
					DrawDebugBox(
						GetWorld(), 
						Box->GetComponentLocation(), 
						Box->GetScaledBoxExtent(),
						FQuat(Box->GetComponentRotation()),
						FColor::Blue, 
						false, 
						8.f
					);
				}
			}

			ResetHitColliders(HitCharacter, CurrentFrame);
			EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::QueryAndPhysics);
			return FServerSideRewindResult{ true, false };
		}
	}

	ResetHitColliders(HitCharacter, CurrentFrame);
	EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::QueryAndPhysics);
	return FServerSideRewindResult{ false, false };
}

