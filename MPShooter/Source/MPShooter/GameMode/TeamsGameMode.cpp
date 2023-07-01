// Fill out your copyright notice in the Description page of Project Settings.

#include "TeamsGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "MPShooter/GameState/MPGameState.h"
#include "MPShooter/PlayerState/MPPlayerState.h"
#include "MPShooter/PlayerController/MPPlayerController.h"

#pragma region Engine Overrides
void ATeamsGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	AMPGameState* MPGameState = Cast<AMPGameState>(UGameplayStatics::GetGameState(this));
	if (MPGameState)
	{
		AMPPlayerState* MPPlayerState = NewPlayer->GetPlayerState<AMPPlayerState>();
		if (MPPlayerState && MPPlayerState->GetTeam() == ETeam::ET_NoTeam)
		{
			if (MPGameState->BlueTeam.Num() >= MPGameState->RedTeam.Num())
			{
				MPGameState->RedTeam.AddUnique(MPPlayerState);
				MPPlayerState->SetTeam(ETeam::ET_RedTeam);
			}
			else
			{
				MPGameState->BlueTeam.AddUnique(MPPlayerState);
				MPPlayerState->SetTeam(ETeam::ET_BlueTeam);
			}
		}
	}
}

void ATeamsGameMode::Logout(AController* Exiting)
{
	AMPGameState* MPGameState = Cast<AMPGameState>(UGameplayStatics::GetGameState(this));	
	AMPPlayerState* MPPlayerState = Exiting->GetPlayerState<AMPPlayerState>();
	if (MPGameState && MPPlayerState)
	{
		if (MPGameState->RedTeam.Contains(MPPlayerState))
		{
			MPGameState->RedTeam.Remove(MPPlayerState);
		}
		if (MPGameState->BlueTeam.Contains(MPPlayerState))
		{
			MPGameState->BlueTeam.Remove(MPPlayerState);
		}
	}
}

void ATeamsGameMode::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	AMPGameState* MPGameState = Cast<AMPGameState>(UGameplayStatics::GetGameState(this));
	if (MPGameState)
	{
		for (auto PState : MPGameState->PlayerArray)
		{
			AMPPlayerState* MPPState = Cast<AMPPlayerState>(PState.Get());
			if (MPPState && MPPState->GetTeam() == ETeam::ET_NoTeam)
			{
				if (MPGameState->BlueTeam.Num() >= MPGameState->RedTeam.Num())
				{
					MPGameState->RedTeam.AddUnique(MPPState);
					MPPState->SetTeam(ETeam::ET_RedTeam);
				}
				else
				{
					MPGameState->BlueTeam.AddUnique(MPPState);
					MPPState->SetTeam(ETeam::ET_BlueTeam);
				}
			}
		}
	}
}
#pragma endregion

#pragma region Overridden Actions
float ATeamsGameMode::CalculateDamage(AController* Attacker, AController* Victim, float BaseDamage)
{
	if (Attacker == nullptr || Victim == nullptr)
	{
		return BaseDamage;
	}

	AMPPlayerState* AttackerMPState = Attacker->GetPlayerState<AMPPlayerState>();
	AMPPlayerState* VictimMPState = Victim->GetPlayerState<AMPPlayerState>();
	if (AttackerMPState == nullptr || VictimMPState == nullptr)
	{
		return BaseDamage;
	}
	// Doesn't prevent self-damage
	if (VictimMPState == AttackerMPState)
	{
		return BaseDamage;
	}
	// Prevents friendly fire
	if (AttackerMPState->GetTeam() == VictimMPState->GetTeam() && !bFriendlyFire)
	{
		return 0.f;
	}

	return BaseDamage;
}

#pragma region Elimination
void ATeamsGameMode::CharacterEliminated(AMPCharacter* VictimCharacter, AMPPlayerController* VictimController, AMPPlayerController* AttackerController)
{
	Super::CharacterEliminated(VictimCharacter, VictimController, AttackerController);

	AMPGameState* MPGameState = Cast<AMPGameState>(UGameplayStatics::GetGameState(this));
	AMPPlayerState* AttackerPlayerState = AttackerController ? Cast<AMPPlayerState>(AttackerController->PlayerState) : nullptr;
	AMPPlayerState* VictimPlayerState = VictimController ? Cast<AMPPlayerState>(VictimController->PlayerState) : nullptr;
	if (MPGameState && AttackerPlayerState)
	{
		if (AttackerPlayerState->GetTeam() == ETeam::ET_BlueTeam)
		{
			MPGameState->BlueTeamScores();
		}
		if (AttackerPlayerState->GetTeam() == ETeam::ET_RedTeam)
		{
			MPGameState->RedTeamScores();
		}
	}
	// If player killed themself, then no points are added
	if (MPGameState && AttackerPlayerState && VictimPlayerState && AttackerPlayerState != VictimPlayerState)
	{
		if (AttackerPlayerState->GetTeam() == ETeam::ET_BlueTeam)
		{
			MPGameState->BlueTeamScores();
		}

		if (AttackerPlayerState->GetTeam() == ETeam::ET_RedTeam)
		{
			MPGameState->RedTeamScores();
		}
	}
	// If player killed themself, then a point is awarded to the opposing team(s)
	if (MPGameState && AttackerPlayerState && VictimPlayerState)
	{
		bool bIsSuicide = AttackerPlayerState == VictimPlayerState;
		if (AttackerPlayerState->GetTeam() == ETeam::ET_BlueTeam)
		{
			if (!bIsSuicide)
			{
				MPGameState->BlueTeamScores();
			}
			else
			{
				MPGameState->RedTeamScores();
			}
		}
		if (AttackerPlayerState->GetTeam() == ETeam::ET_RedTeam)
		{
			if (!bIsSuicide)
			{
				MPGameState->RedTeamScores();
			}
			else
			{
				MPGameState->BlueTeamScores();
			}
		}
	}
	// If player killed themself, then the opposing team(s) gain a point
	if (MPGameState && AttackerPlayerState && VictimPlayerState && bLosePointOnSuicide)
	{
		bool bIsSuicide = AttackerPlayerState == VictimPlayerState;
		if (AttackerPlayerState->GetTeam() == ETeam::ET_BlueTeam)
		{
			if (!bIsSuicide)
			{
				MPGameState->BlueTeamScores();
			}
			else
			{
				MPGameState->BlueTeamLosesPoint();
			}
		}
		if (AttackerPlayerState->GetTeam() == ETeam::ET_RedTeam)
		{
			if (!bIsSuicide)
			{
				MPGameState->RedTeamScores();
			}
			else
			{
				MPGameState->RedTeamLosesPoint();
			}
		}
	}
}
#pragma endregion

#pragma endregion