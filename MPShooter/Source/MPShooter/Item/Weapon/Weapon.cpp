// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Animation/AnimationAsset.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/PlayerController/MPPlayerController.h"
#include "MPShooter/MPComponents/CombatComponent.h"
#include "MPShooter/Item/Weapon/Ranged/Projectile/Misc/Casing.h"
#include "DrawDebugHelpers.h"

void AWeapon::PostEditChangeProperty(FPropertyChangedEvent& Event)
{
	FName PropertyName = Event.Property != nullptr ? Event.Property->GetFName() : NAME_None;
	if (PropertyName == GET_MEMBER_NAME_CHECKED(AWeapon, bUseServerSideRewind))
	{
		if (bUseServerSideRewind)
		{
			bReplicates = false;
		}
		else
		{
			bReplicates = true;
		}
	}
}

void AWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AWeapon, bUseServerSideRewind, COND_OwnerOnly);
}

void AWeapon::OnRep_Owner()
{
	Super::OnRep_Owner();

	if (Owner == nullptr)
	{
		MPOwnerCharacter = nullptr;
		MPOwnerController = nullptr;
	}
	else
	{
		MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(Owner) : MPOwnerCharacter;
		if (MPOwnerCharacter && MPOwnerCharacter->GetEquippedWeapon() && MPOwnerCharacter->GetEquippedWeapon() == this)
		{
			SetHUDAmmo();
		}
	}
}

void AWeapon::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMPCharacter* MPCharacter = Cast<AMPCharacter>(OtherActor);
	if (MPCharacter)
	{
		MPCharacter->SetOverlappingWeapon(this);
	}
}

void AWeapon::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
	AMPCharacter* MPCharacter = Cast<AMPCharacter>(OtherActor);
	if (MPCharacter)
	{
		MPCharacter->SetOverlappingWeapon(nullptr);
	}
}

bool AWeapon::IsAttachedToRightHand()
{
	return bAttachToRightHand;
}

bool AWeapon::IsDoubleHanded()
{
	return bDoubleHanded;
}

bool AWeapon::IsDualWield()
{
	return bDualWield;
}

void AWeapon::OnPingTooHigh(bool bPingTooHigh)
{
	bUseServerSideRewind = !bPingTooHigh;
}

void AWeapon::OnEquipped()
{
	Super::OnEquipped();

	OnEquippedWeaponType();

	MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(GetOwner()) : MPOwnerCharacter;
	if (MPOwnerCharacter && bUseServerSideRewind)
	{
		MPOwnerController = MPOwnerController == nullptr ? Cast<AMPPlayerController>(MPOwnerCharacter->Controller) : MPOwnerController;
		if (MPOwnerController && HasAuthority() && !MPOwnerController->HighPingDelegate.IsBound())
		{
			MPOwnerController->HighPingDelegate.AddDynamic(this, &AWeapon::OnPingTooHigh);
		}
	}
}

void AWeapon::OnEquippedWeaponType()
{
	if (bHasPhysicsAttachment == true)
	{
		GetItemMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		GetItemMesh()->SetEnableGravity(true);
		GetItemMesh()->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	}
}

void AWeapon::OnEquippedSecondary()
{
	Super::OnEquippedSecondary();

	OnEquippedWeaponType();

	MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(GetOwner()) : MPOwnerCharacter;
	if (MPOwnerCharacter)
	{
		MPOwnerController = MPOwnerController == nullptr ? Cast<AMPPlayerController>(MPOwnerCharacter->Controller) : MPOwnerController;
		if (MPOwnerController && HasAuthority() && MPOwnerController->HighPingDelegate.IsBound())
		{
			MPOwnerController->HighPingDelegate.RemoveDynamic(this, &AWeapon::OnPingTooHigh);
		}
	}
}

void AWeapon::OnDropped()
{
	Super::OnDropped();

	OnEquippedWeaponType();

	MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(GetOwner()) : MPOwnerCharacter;
	if (MPOwnerCharacter)
	{
		MPOwnerController = MPOwnerController == nullptr ? Cast<AMPPlayerController>(MPOwnerCharacter->Controller) : MPOwnerController;
		if (MPOwnerController && HasAuthority() && MPOwnerController->HighPingDelegate.IsBound())
		{
			MPOwnerController->HighPingDelegate.RemoveDynamic(this, &AWeapon::OnPingTooHigh);
		}
	}
}

void AWeapon::Dropped()
{
	Super::Dropped();

	MPOwnerCharacter = nullptr;
	MPOwnerController = nullptr;
}

void AWeapon::Fire(const FVector& HitTarget)
{
	if (FireAnimation)
	{
		GetItemMesh()->PlayAnimation(FireAnimation, false);
	}

	if (CasingClass)
	{
		const USkeletalMeshSocket* AmmoEjectSocket = GetItemMesh()->GetSocketByName(AmmoEject);

		if (AmmoEjectSocket)
		{
			FTransform SocketTransform = AmmoEjectSocket->GetSocketTransform(GetItemMesh());
			UWorld* World = GetWorld();

			if (World)
			{
				World->SpawnActor<ACasing>(
					CasingClass,
					SocketTransform.GetLocation(),
					SocketTransform.GetRotation().Rotator()
					);
			}
		}
	}

	SpendRound();
}

void AWeapon::FireMulti(const TArray<FVector_NetQuantize>& HitTargets)
{
	Fire(FVector());
}

void AWeapon::SpendRound()
{
	// we're only spending 1 ammo per fire
	// if we wanted to have more for a given weapon, subtract it by a weapon's round ammount
	Ammo = FMath::Clamp(Ammo - 1, 0, MagCapacity);
	SetHUDAmmo();

	if (HasAuthority())
	{
		ClientUpdateAmmo(Ammo);
	}
	else if (MPOwnerCharacter && MPOwnerCharacter->IsLocallyControlled())
	{
		++Sequence;
	}
}

void AWeapon::SetHUDAmmo()
{
	MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(GetOwner()) : MPOwnerCharacter;

	if (MPOwnerCharacter)
	{
		MPOwnerController = MPOwnerController == nullptr ? Cast<AMPPlayerController>(MPOwnerCharacter->Controller) : MPOwnerController;

		if (MPOwnerController)
		{
			MPOwnerController->SetHUDWeaponAmmo(Ammo);
		}
	}
}

void AWeapon::AddAmmo(int32 AmmoToAdd)
{
	Ammo = FMath::Clamp(Ammo + AmmoToAdd, 0, MagCapacity);
	SetHUDAmmo();
	ClientAddAmmo(AmmoToAdd);
}

void AWeapon::ClientAddAmmo_Implementation(int32 AmmoToAdd)
{
	if (HasAuthority())
	{
		return;
	}

	Ammo = FMath::Clamp(Ammo + AmmoToAdd, 0, MagCapacity);
	MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(GetOwner()) : MPOwnerCharacter;
	if (MPOwnerCharacter && MPOwnerCharacter->GetCombat() && IsMagFull())
	{
		MPOwnerCharacter->GetCombat()->JumpToShotgunEnd();
	}

	SetHUDAmmo();
}

void AWeapon::ClientUpdateAmmo_Implementation(int32 ServerAmmo)
{
	if (HasAuthority())
	{
		return;
	}

	Ammo = ServerAmmo;
	--Sequence;
	Ammo -= Sequence;
	SetHUDAmmo();
}

bool AWeapon::IsMagEmpty()
{
	return Ammo <= 0;
}

bool AWeapon::IsMagFull()
{
	return Ammo == MagCapacity;
}

FVector AWeapon::TraceEndWithScatter(const FVector& HitTarget)
{
	const USkeletalMeshSocket* MuzzleFlashSocket = GetItemMesh()->GetSocketByName(MuzzleFlash);
	if (MuzzleFlashSocket == nullptr)
	{
		return FVector();
	}

	const FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetItemMesh());
	const FVector TraceStart = SocketTransform.GetLocation();

	const FVector ToTargetNormalized = (HitTarget - TraceStart).GetSafeNormal();
	const FVector SphereCenter = TraceStart + ToTargetNormalized * DistanceToSphere;
	const FVector RandVec = UKismetMathLibrary::RandomUnitVector() * FMath::FRandRange(0.f, SphereRadius);
	const FVector EndLoc = SphereCenter + RandVec;
	const FVector ToEndLoc = EndLoc - TraceStart;

	return FVector(TraceStart + ToEndLoc * TRACE_LENGTH / ToEndLoc.Size());
}

void AWeapon::MultiTraceEndWithScatter(const FVector& HitTarget, TArray<FVector_NetQuantize>& HitTargets)
{
	// done in HitScanWeapon
}