// Fill out your copyright notice in the Description page of Project Settings.


#include "MPGameState.h"
#include "Net/UnrealNetwork.h"
#include "MPShooter/PlayerState/MPPlayerState.h"
#include "MPShooter/PlayerController/MPPlayerController.h"

#pragma region Engine Overrides
#pragma region Replication
void AMPGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMPGameState, TopScoringPlayers);
	DOREPLIFETIME(AMPGameState, RedTeamScore);
	DOREPLIFETIME(AMPGameState, BlueTeamScore);
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

void AMPGameState::RedTeamScores()
{
	++RedTeamScore;
}

void AMPGameState::BlueTeamScores()
{
	++BlueTeamScore;
}

void AMPGameState::RedTeamLosesPoint()
{
	--RedTeamScore;
	RedTeamScore = RedTeamScore < 0 ? 0 : RedTeamScore;

	AMPPlayerController* MPPlayerController = Cast<AMPPlayerController>(GetWorld()->GetFirstPlayerController());
	if (MPPlayerController)
	{
		MPPlayerController->SetHUDRedTeamScore(RedTeamScore);
	}
}

void AMPGameState::BlueTeamLosesPoint()
{
    --BlueTeamScore;
    BlueTeamScore = BlueTeamScore < 0 ? 0 : BlueTeamScore;

    AMPPlayerController* MPPlayerController = Cast<AMPPlayerController>(GetWorld()->GetFirstPlayerController());
    if (MPPlayerController)
    {
        MPPlayerController->SetHUDBlueTeamScore(BlueTeamScore);
    }
}

#pragma region OnRep
void AMPGameState::OnRep_RedTeamScore()
{
	AMPPlayerController* MPPlayerController = Cast<AMPPlayerController>(GetWorld()->GetFirstPlayerController());
	if (MPPlayerController)
	{
		MPPlayerController->SetHUDRedTeamScore(RedTeamScore);
	}
}

void AMPGameState::OnRep_BlueTeamScore()
{
	AMPPlayerController* MPPlayerController = Cast<AMPPlayerController>(GetWorld()->GetFirstPlayerController());
	if (MPPlayerController)
	{
		MPPlayerController->SetHUDBlueTeamScore(BlueTeamScore);
	}
}
#pragma endregion

#pragma endregion
