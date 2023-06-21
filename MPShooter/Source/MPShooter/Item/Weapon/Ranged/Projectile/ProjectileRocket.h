// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "ProjectileRocket.generated.h"

UCLASS()
class MPSHOOTER_API AProjectileRocket : public AProjectile
{
	GENERATED_BODY()
	
public:
	#pragma region Constructors & Engine Overrides
	AProjectileRocket();
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif
	virtual void Destroyed() override;
	#pragma endregion

protected:
	#pragma region Projectile Rocket Properties
	//
	// Projectile Rocket Properties
	//
	UPROPERTY(VisibleAnywhere)
	class URocketMovementComponent* RocketMovementComponent;
	UPROPERTY(EditAnywhere, Category = "Projectile Rocket Properties", meta = (ToolTip = "Looping sound that plays alongside projectile as it's flying."))
	class USoundCue* ProjectileLoop;
	UPROPERTY()
	class UAudioComponent* ProjectileLoopComponent;
	UPROPERTY(EditAnywhere, Category = "Projectile Rocket Properties", meta = (ToolTip = "Attenuation sound that plays alongside projectile as it's flying."))
	class USoundAttenuation* LoopingSoundAttenuation;
	#pragma endregion

	#pragma region Engine Overrides
	virtual void BeginPlay() override;
	virtual void OnHit(
		UPrimitiveComponent* HitComp, 
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		FVector NormalImpulse, 
		const FHitResult& Hit
	) override;
	#pragma endregion

};
