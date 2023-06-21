// Fill out your copyright notice in the Description page of Project Settings.


#include "MPGameState.h"
#include "Net/UnrealNetwork.h"
#include "MPShooter/PlayerState/MPPlayerState.h"

#pragma region Engine Overrides
#pragma region Replication
void AMPGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMPGameState, TopScoringPlayers);
}
#pragma endregion

#pragma endregion

#pragma region Actions
void AMPGameState::UpdateTopScore(AMPPlayerState* ScoringPlayer)
{
	if (TopScoringPlayers.Num() == 0)
	{
		TopScoringPlayers.Add(ScoringPlayer);
		TopScore = ScoringPlayer->GetScore();
	}
	else if (ScoringPlayer->GetScore() == TopScore)
	{
		TopScoringPlayers.AddUnique(ScoringPlayer);
	}
	else if (ScoringPlayer->GetScore() > TopScore)
	{
		TopScoringPlayers.Empty();
		TopScoringPlayers.AddUnique(ScoringPlayer);
		TopScore = ScoringPlayer->GetScore();
	}
}
#pragma endregion
