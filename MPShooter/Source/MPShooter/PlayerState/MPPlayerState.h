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
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnRep_Score() override;
	UFUNCTION()
	virtual void OnRep_Defeat();

	void AddToScore(float ScoreAmount);
	void AddToDefeat(int32 DefeatAmount);

private:
	UPROPERTY()
	class AMPCharacter* Character;
	UPROPERTY()
	class AMPPlayerController* Controller;

	UPROPERTY(ReplicatedUsing = OnRep_Defeat)
	int32 Defeat;

};
