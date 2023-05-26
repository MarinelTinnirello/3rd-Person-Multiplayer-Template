// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBullet.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/Character/MPAnimInstance.h"
#include "MPShooter/PlayerController/MPPlayerController.h"
#include "MPShooter/MPComponents/LagComponent.h"

AProjectileBullet::AProjectileBullet()
{
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->SetIsReplicated(true);
	ProjectileMovementComponent->InitialSpeed = InitialSpeed;
	ProjectileMovementComponent->MaxSpeed = InitialSpeed;
}

void AProjectileBullet::BeginPlay()
{
	Super::BeginPlay();

}

void AProjectileBullet::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AMPCharacter* OwnerCharacter = Cast<AMPCharacter>(GetOwner());
	if (OwnerCharacter)
	{
		AMPPlayerController* OwnerController = Cast<AMPPlayerController>(OwnerCharacter->Controller);
		UMPAnimInstance* AnimInstance = Cast<UMPAnimInstance>(OwnerCharacter->GetMesh()->GetAnimInstance());
		if (OwnerCharacter->HasAuthority() && !bUseServerSideRewind && AnimInstance)
		{
			const float DamageToCause = Hit.BoneName == AnimInstance->GetHeadBone() ? HeadShotDamage : Damage;
			UGameplayStatics::ApplyDamage(
				OtherActor, 
				DamageToCause, 
				OwnerController, 
				this, 
				UDamageType::StaticClass()
			);
			Super::OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
			return;
		}

		AMPCharacter* HitCharacter = Cast<AMPCharacter>(OtherActor);
		if (bUseServerSideRewind && OwnerCharacter->GetLagCompensation() && OwnerCharacter->IsLocallyControlled() && HitCharacter)
		{
			OwnerCharacter->GetLagCompensation()->ServerScoreRequestProjectile(
				HitCharacter,
				TraceStart,
				InitialVelocity,
				OwnerController->GetServerTime() - OwnerController->SingleTripTime
			);
		}
	}
}