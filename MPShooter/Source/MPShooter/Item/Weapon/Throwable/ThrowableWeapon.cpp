// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowableWeapon.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Animation/AnimationAsset.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"
#include "MPShooter/MPShooter.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/PlayerController/MPPlayerController.h"
#include "MPShooter/MPComponents/CombatComponent.h"

AThrowableWeapon::AThrowableWeapon()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CollisionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
	CollisionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Block);
	CollisionBox->SetCollisionResponseToChannel(ECC_SkeletalMesh, ECollisionResponse::ECR_Block);
}

void AThrowableWeapon::BeginPlay()
{
	Super::BeginPlay();

	// TODO:
	// needs to be taken out of BeginPlay() and put whenever this is spawned
	// need to move the Throw functions around in Combat to conform to new psuedo-weapon
	// do a bit more of pickups before continuing this
	
}

void AThrowableWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AThrowableWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AThrowableWeapon, Ammo);
	DOREPLIFETIME(AThrowableWeapon, HitActor);
}

void AThrowableWeapon::OnRep_Owner()
{
	Super::OnRep_Owner();

	if (Owner == nullptr)
	{
		MPOwnerCharacter = nullptr;
		MPOwnerController = nullptr;
	}
	else
	{
		SetHUDAmmo();
	}
}

void AThrowableWeapon::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMPCharacter* MPCharacter = Cast<AMPCharacter>(OtherActor);
	if (MPCharacter)
	{
		//MPCharacter->SetOverlappingThrowableWeapon(this);
	}
}

void AThrowableWeapon::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
	AMPCharacter* MPCharacter = Cast<AMPCharacter>(OtherActor);
	if (MPCharacter)
	{
		//MPCharacter->SetOverlappingThrowableWeapon(nullptr);
	}
}

void AThrowableWeapon::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	HitActor = OtherActor->Implements<UInteractWithCrosshairsInterface>() ? EHitActor::EHA_Character : EHitActor::EHA_Environment;
	MulticastOnHit(HitActor);
}

void AThrowableWeapon::MulticastOnHit_Implementation(EHitActor HitActorType)
{
	ActorHitType(HitActorType);

	Destroy();
}

void AThrowableWeapon::ActorHitType(EHitActor HitActorType)
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
				UGameplayStatics::SpawnEmitterAtLocation(World, ImpactCharacterParticles, GetActorTransform());
			}
			if (ImpactCharacterSound)
			{
				UGameplayStatics::PlaySoundAtLocation(this, ImpactCharacterSound, GetActorLocation());
			}
			break;
		case EHitActor::EHA_Environment:
			if (ImpactParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(World, ImpactParticles, GetActorTransform());
			}
			if (ImpactSound)
			{
				UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, GetActorLocation());
			}
			break;
		case EHitActor::EHA_MAX:
			break;
		default:
			break;
		}
	}
}

void AThrowableWeapon::StartDestroyTimer()
{
	// we want to delay the destruction of the projectile, but still have the impact components play
	// so we use a timer instead of calling the Super()
	GetWorldTimerManager().SetTimer(
		DestroyTimer,
		this,
		&AThrowableWeapon::DestroyTimerFinished,
		DestroyTime
	);
}

void AThrowableWeapon::DestroyTimerFinished()
{
	Destroy();
}

void AThrowableWeapon::SpawnTrailSystem()
{
	if (TrailSystem)
	{
		TrailSystemComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
			TrailSystem,
			GetRootComponent(),
			FName(),
			GetActorLocation(),
			GetActorRotation(),
			EAttachLocation::KeepWorldPosition,
			false
		);
	}
}

void AThrowableWeapon::ExplodeDamage()
{
	APawn* FiringPawn = GetInstigator();
	if (FiringPawn && HasAuthority())
	{
		AController* FiringController = FiringPawn->GetController();

		if (FiringController)
		{
			UGameplayStatics::ApplyRadialDamageWithFalloff(
				this,
				Damage,
				MinimumDamageFromFalloff,
				GetActorLocation(),
				DamageInnerRadius,
				DamageOuterRadius,
				1.f,	// linear damage falloff, since this is exponential
				UDamageType::StaticClass(),
				TArray<AActor*>(),
				this,
				FiringController
			);
		}
	}
}

void AThrowableWeapon::OnEquipped()
{
	Super::OnEquipped();

}

void AThrowableWeapon::OnDropped()
{
	Super::OnDropped();

}

void AThrowableWeapon::Dropped()
{
	Super::Dropped();

	MPOwnerCharacter = nullptr;
	MPOwnerController = nullptr;
}

void AThrowableWeapon::OnSpawn()
{
	if (Tracer)
	{
		TracerComponent = UGameplayStatics::SpawnEmitterAttached(
			Tracer,
			CollisionBox,
			FName(),
			GetActorLocation(),
			GetActorRotation(),
			EAttachLocation::KeepWorldPosition
		);
	}

	if (HasAuthority())
	{
		CollisionBox->OnComponentHit.AddDynamic(this, &AThrowableWeapon::OnHit);
	}
}

void AThrowableWeapon::OnRep_Ammo()
{
	MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(GetOwner()) : MPOwnerCharacter;
	if (MPOwnerCharacter && MPOwnerCharacter->GetCombat() && IsMagFull())
	{
		MPOwnerCharacter->GetCombat()->JumpToShotgunEnd();
	}

	SetHUDAmmo();
}

void AThrowableWeapon::SpendRound()
{
	// we're only spending 1 ammo per fire
	// if we wanted to have more for a given weapon, subtract it by a weapon's round ammount
	Ammo = FMath::Clamp(Ammo - 1, 0, MagCapacity);
	SetHUDAmmo();
}

void AThrowableWeapon::SetHUDAmmo()
{
	MPOwnerCharacter = MPOwnerCharacter == nullptr ? Cast<AMPCharacter>(GetOwner()) : MPOwnerCharacter;

	if (MPOwnerCharacter)
	{
		MPOwnerController = MPOwnerController == nullptr ? Cast<AMPPlayerController>(MPOwnerCharacter->Controller) : MPOwnerController;

		if (MPOwnerController)
		{
			MPOwnerController->SetHUDCarriedThrowables(Ammo);
		}
	}
}

void AThrowableWeapon::AddAmmo(int32 AmmoToAdd)
{
	Ammo = FMath::Clamp(Ammo - AmmoToAdd, 0, MagCapacity);
	SetHUDAmmo();
}

bool AThrowableWeapon::IsMagEmpty()
{
	return Ammo <= 0;
}

bool AThrowableWeapon::IsMagFull()
{
	return Ammo == MagCapacity;
}
