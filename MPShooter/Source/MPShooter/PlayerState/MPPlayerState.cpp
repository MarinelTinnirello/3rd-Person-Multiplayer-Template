// Fill out your copyright notice in the Description page of Project Settings.


#include "MPPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/PlayerController/MPPlayerController.h"

#pragma region Engine Overrides
#pragma region Replication
void AMPPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMPPlayerState, Defeat);
	DOREPLIFETIME(AMPPlayerState, Team);
}

#pragma region OnRep
void AMPPlayerState::OnRep_Score()
{
	Super::OnRep_Score();

	Character = Character == nullptr ? Cast<AMPCharacter>(GetPawn()) : Character;

	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;

		if (Controller)
		{
			Controller->SetHUDScore(GetScore());
		}
	}
}
#pragma endregion

#pragma endregion

#pragma endregion

#pragma region Actions
void AMPPlayerState::AddToScore(float ScoreAmount)
{
	SetScore(GetScore() + ScoreAmount);
	Character = Character == nullptr ? Cast<AMPCharacter>(GetPawn()) : Character;

	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;
		if (Controller)
		{
			Controller->SetHUDScore(GetScore());
		}
	}
}

void AMPPlayerState::AddToDefeat(int32 DefeatAmount)
{
	Defeat += DefeatAmount;
	Character = Character == nullptr ? Cast<AMPCharacter>(GetPawn()) : Character;
	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;

		if (Controller)
		{
			Controller->SetHUDDefeat(Defeat);
		}
	}
}

void AMPPlayerState::SetTeam(ETeam TeamToSet)
{
	Team = TeamToSet;

	AMPCharacter* MPCharacter = Cast <AMPCharacter>(GetPawn());
	if (MPCharacter)
	{
		MPCharacter->SetTeamColor(Team);
	}
}

#pragma region OnRep
void AMPPlayerState::OnRep_Defeat()
{
	Character = Character == nullptr ? Cast<AMPCharacter>(GetPawn()) : Character;

	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AMPPlayerController>(Character->Controller) : Controller;

		if (Controller)
		{
			Controller->SetHUDDefeat(Defeat);
		}
	}
}

void AMPPlayerState::OnRep_Team()
{
	AMPCharacter* MPCharacter = Cast <AMPCharacter>(GetPawn());
	if (MPCharacter)
	{
		MPCharacter->SetTeamColor(Team);
	}
}
#pragma endregion

#pragma endregion
