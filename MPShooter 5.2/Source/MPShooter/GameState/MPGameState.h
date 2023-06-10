// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MPGameState.generated.h"

UCLASS()
class MPSHOOTER_API AMPGameState : public AGameState
{
	GENERATED_BODY()
	
public:
	UPROPERTY(Replicated)
		TArray<class AMPPlayerState*> TopScoringPlayers;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void UpdateTopScore(class AMPPlayerState* ScoringPlayer);

private:
	float TopScore = 0.f;
};
