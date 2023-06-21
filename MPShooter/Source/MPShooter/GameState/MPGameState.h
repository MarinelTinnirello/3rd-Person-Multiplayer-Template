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
	#pragma region Game State Properties
	UPROPERTY(Replicated)
	TArray<class AMPPlayerState*> TopScoringPlayers;
	#pragma endregion

	#pragma region Engine Overrides
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	#pragma endregion

	#pragma region Actions
	void UpdateTopScore(class AMPPlayerState* ScoringPlayer);
	#pragma endregion

private:
	#pragma region Game State Properties
	float TopScore = 0.f;
	#pragma endregion

};
