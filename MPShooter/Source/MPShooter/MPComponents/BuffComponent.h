// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BuffComponent.generated.h"

#pragma region Forward Declarations
class AMPCharacter;
#pragma endregion

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MPSHOOTER_API UBuffComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	friend class AMPCharacter;

	#pragma region Constructor & Engine Overrides
	UBuffComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	#pragma endregion

	#pragma region Actions
	void Heal(float HealAmount, float HealingTime);
	void ReplenishShield(float ShieldAmount, float ReplenishTime);
	void BuffSpeed(float BuffBaseSpeed, float BuffCrouchSpeed, float BuffTime);
	void SetInitialSpeeds(float BaseSpeed, float CrouchSpeed);
	void BuffJump(float BuffJumpVelocity, float BuffTime);
	void SetInitialJumpVelocity(float Velocity);
	#pragma endregion

protected:
	#pragma region Engine Overrides
	virtual void BeginPlay() override;
	#pragma endregion

	#pragma region Actions
	void HealRampUp(float DeltaTime);
	void ShieldRampUp(float DeltaTime);
	#pragma endregion

private:
	#pragma region References
	UPROPERTY()
	AMPCharacter* Character;
	#pragma endregion

	#pragma region Healing
	//
	// Healing
	//
	bool bHealing = false;
	float HealingRate = 0.f;
	float AmountToHeal = 0.f;
	#pragma endregion

	#pragma region Shield
	//
	// Shield
	//
	bool bReplenishingShield = false;
	float ShieldReplenishRate = 0.f;
	float ShieldReplenishAmount = 0.f;
	#pragma endregion

	#pragma region Speed
	//
	// Speed Buff
	//
	FTimerHandle SpeedBuffTimer;
	float InitialBaseSpeed;
	float InitialCrouchSpeed;

	void ResetSpeeds();

	#pragma region Multicast
	UFUNCTION(NetMulticast, Reliable)
	void MulticastSpeedBuff(float BaseSpeed, float CrouchSpeed);
	#pragma endregion

	#pragma endregion

	#pragma region Jump
	//
	// Jump Buff
	//
	FTimerHandle JumpBuffTimer;
	void ResetJump();
	float InitialJumpVelocity;

	#pragma region Multicast
	UFUNCTION(NetMulticast, Reliable)
	void MulticastJumpBuff(float JumpVelocity);
	#pragma endregion

	#pragma endregion

public:	

		
};
