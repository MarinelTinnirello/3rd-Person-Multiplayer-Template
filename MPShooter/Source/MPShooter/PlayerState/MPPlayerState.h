// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MPPlayerState.generated.h"

UCLASS()
class MPSHOOTER_API AMPPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	#pragma region Engine Overrides
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnRep_Score() override;
	#pragma endregion
	
	#pragma region Actions
	void AddToScore(float ScoreAmount);
	void AddToDefeat(int32 DefeatAmount);

	#pragma region OnRep
	UFUNCTION()
	virtual void OnRep_Defeat();
	#pragma endregion

	#pragma endregion

private:
	#pragma region References
	UPROPERTY()
	class AMPCharacter* Character;
	UPROPERTY()
	class AMPPlayerController* Controller;
	#pragma endregion

	#pragma region Player State Properties
	UPROPERTY(ReplicatedUsing = OnRep_Defeat)
	int32 Defeat;
	#pragma endregion

};
