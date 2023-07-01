// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MPGameState.generated.h"

#pragma region Forward Declarations
class AMPPlayerState;
#pragma endregion

UCLASS()
class MPSHOOTER_API AMPGameState : public AGameState
{
	GENERATED_BODY()
	
public:
	#pragma region Game State Properties
	UPROPERTY(Replicated)
	TArray<AMPPlayerState*> TopScoringPlayers;

	#pragma region Teams
	//
	// Teams
	//
	TArray<AMPPlayerState*> RedTeam;
	TArray<AMPPlayerState*> BlueTeam;
	UPROPERTY(ReplicatedUsing = OnRep_RedTeamScore)
	float RedTeamScore = 0.f;
	UPROPERTY(ReplicatedUsing = OnRep_BlueTeamScore)
	float BlueTeamScore = 0.f;

	#pragma region OnRep
	UFUNCTION()
	void OnRep_RedTeamScore();
	UFUNCTION()
	void OnRep_BlueTeamScore();
	#pragma endregion

	#pragma endregion

	#pragma endregion

	#pragma region Engine Overrides
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	#pragma endregion

	#pragma region Actions
	void UpdateTopScore(class AMPPlayerState* ScoringPlayer);

	void RedTeamScores();
	void RedTeamLosesPoint();
	void BlueTeamScores();
	void BlueTeamLosesPoint();
	#pragma endregion

private:
	#pragma region Game State Properties
	float TopScore = 0.f;
	#pragma endregion

};
