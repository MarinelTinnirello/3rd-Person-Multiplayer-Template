// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "MPShooter/MPShooter.h"
#include "MPShooter/Interfaces/HitActorInterface.h"
#include "MPShooter/Character/MPCharacter.h"

#pragma region Constructor
AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	SetRootComponent(CollisionBox);
	CollisionBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CollisionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
	CollisionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Block);
	CollisionBox->SetCollisionResponseToChannel(ECC_SkeletalMesh, ECollisionResponse::ECR_Block);
}
#pragma endregion

#pragma region Engine Overrides
void AProjectile::BeginPlay()
{
	Super::BeginPlay();

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
	if (TracerNiagara)
	{
		TracerNiagaraComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
			TracerNiagara,
			CollisionBox,
			FName(),
			GetActorLocation(),
			GetActorRotation(),
			EAttachLocation::KeepWorldPosition,
			false
		);
	}

	if (HasAuthority())
	{
		CollisionBox->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
	}
}

void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

#pragma region Initialization
void AProjectile::PostEditChangeProperty(FPropertyChangedEvent& Event)
{
	Super::PostEditChangeProperty(Event);

	FName PropertyName = Event.Property != nullptr ? Event.Property->GetFName() : NAME_None;
	if (PropertyName == GET_MEMBER_NAME_CHECKED(AProjectile, InitialSpeed))
	{
		if (ProjectileMovementComponent)
		{
			ProjectileMovementComponent->InitialSpeed = InitialSpeed;
			ProjectileMovementComponent->MaxSpeed = InitialSpeed;
		}
	}
}
#pragma endregion

#pragma region Replication
void AProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AProjectile, HitActor);
}
#pragma endregion

#pragma region OnHit
void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	HitActor = OtherActor->Implements<UInteractWithCrosshairsInterface>() ? EHitActor::EHA_Character : EHitActor::EHA_Environment;
	MulticastOnHit(HitActor);
	if (HitActor == EHitActor::EHA_Environment)
	{
		ServerSpawnMaterialDecal(Hit);
	}
	/*IHitActorInterface* Interface = Cast<IHitActorInterface>(this);
	Interface->ServerSpawnMaterialDecal(
		Hit,
		GetWorld(),
		this,
		ImpactDecalMaterial,
		DecalSize,
		DecalLifeSpan
	);*/
}

#pragma region Multicast
void AProjectile::MulticastOnHit_Implementation(EHitActor HitActorType)
{
	ActorHitType(HitActorType);
	/*IHitActorInterface* Interface = Cast<IHitActorInterface>(this);
	Interface->ActorHitType(
		HitActorType,
		GetWorld(),
		this,
		this,
		ImpactParticles,
		ImpactSound,
		ImpactCharacterParticles,
		ImpactCharacterSound
	);*/

	Destroy();
}
#pragma endregion

#pragma endregion

#pragma endregion

#pragma region Overrideable Actions
float AProjectile::GetCollisionSphereRadius()
{
	float SphereRadius = 0.f;

	if (CollisionBox)
	{
		FVector Origin;		// not used, but needed
		FVector BoxExtent;	// not used, but needed

		UKismetSystemLibrary::GetComponentBounds(CollisionBox, Origin, BoxExtent, SphereRadius);
	}
	
	return SphereRadius;
}

void AProjectile::ActorHitType(EHitActor HitActorType)
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
void AProjectile::SpawnTrailSystem()
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

void AProjectile::ExplodeDamage()
{
	APawn* FiringPawn = GetInstigator();
	if (FiringPawn && HasAuthority())
	{
		AController* FiringController = FiringPawn->GetController();
		//AMPCharacter* MPCharacter = Cast<AMPCharacter>(FiringPawn);
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
			//MPCharacter->DirectionalHitReact(GetActorLocation());
		}
	}
}

#pragma region Effects
#pragma region Timers
void AProjectile::StartDestroyTimer()
{
	// we want to delay the destruction of the projectile, but still have the impact components play
	// so we use a timer instead of calling the Super()
	GetWorldTimerManager().SetTimer(
		DestroyTimer,
		this,
		&AProjectile::DestroyTimerFinished,
		DestroyTime
	);
}

void AProjectile::DestroyTimerFinished()
{
	Destroy();
}
#pragma endregion

#pragma endregion

#pragma region Multicast
void AProjectile::MulticastSpawnMaterialDecal_Implementation(const FHitResult& Hit)
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
void AProjectile::ServerSpawnMaterialDecal_Implementation(const FHitResult& Hit)
{
	MulticastSpawnMaterialDecal(Hit);
}

bool AProjectile::ServerSpawnMaterialDecal_Validate(const FHitResult& Hit)
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
