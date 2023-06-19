// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MPShooter/Item/Weapon/Weapon.h"
#include "MeleeWeapon.generated.h"

UCLASS()
class MPSHOOTER_API AMeleeWeapon : public AWeapon
{
	GENERATED_BODY()

public:
	/*AMeleeWeapon();
	virtual void BeginPlay() override;*/

	virtual void Fire(const FVector& HitTarget) override;

	void WeaponTraceHit(const FVector& TraceStart, const FVector& TraceEnd, FHitResult& OutHit);
	/*UFUNCTION(BlueprintCallable)
	void SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled);*/

protected:
	//
	// Weapon Properties
	//
	//UPROPERTY(VisibleAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Collision box for the weapon."))
	//class UBoxComponent* WeaponBox;
	//UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Extents for the box trace for the weapon."))
	//FVector BoxTraceExtent = FVector(5.f);
	//UPROPERTY(VisibleAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Start for the box trace for the weapon."))
	//class USceneComponent* BoxTraceStart;
	//UPROPERTY(VisibleAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "End for the box trace for the weapon."))
	//USceneComponent* BoxTraceEnd;

	//
	// Melee Properties
	//
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Particles seen on impact from the weapon."))
	class UParticleSystem* ImpactParticles;
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Sound that plays on impact with the environment or character."))
	class USoundCue* ImpactSound;

	/*UFUNCTION()
	void OnBoxOverlap(
		UPrimitiveComponent* OverlappedComponent, 
		AActor* OtherActor, UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, 
		bool bFromSweep, 
		const FHitResult& SweepResult
	);*/

private:
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Start socket name for a line trace on a weapon."))
	FName StartSocket = "StartSocket";
	UPROPERTY(EditAnywhere, Category = "Melee Weapon Properties", meta = (ToolTip = "Start socket name for a line trace on a weapon."))
	FName EndSocket = "EndSocket";

	/*void BoxTrace(FHitResult& BoxHit);*/

//public:
//	FORCEINLINE UBoxComponent* GetWeaponBox() const { return WeaponBox; }

};
