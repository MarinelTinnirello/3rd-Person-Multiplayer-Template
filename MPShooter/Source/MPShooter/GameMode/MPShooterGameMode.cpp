// Fill out your copyright notice in the Description page of Project Settings.


#include "MPShooterGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"
#include "MPShooter/MPShooter.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/PlayerController/MPPlayerController.h"
#include "MPShooter/PlayerState/MPPlayerState.h"
#include "MPShooter/GameState/MPGameState.h"

namespace MatchState
{
	const FName Cooldown = FName("Cooldown");
}

#pragma region Constructor
AMPShooterGameMode::AMPShooterGameMode()
{
	// Allows free cam movement since a pawn isn't possessed yet, before SetMatchState() is called
	bDelayedStart = true;
}
#pragma endregion

#pragma region Engine Overrides
void AMPShooterGameMode::BeginPlay()
{
	Super::BeginPlay();

	LevelStartTime = GetWorld()->GetTimeSeconds();
}

void AMPShooterGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MatchState == MatchState::WaitingToStart)
	{
		CountdownTime = WarmupTime - GetWorld()->GetTimeSeconds() + LevelStartTime;
		if (CountdownTime <= 0.f)
		{
			StartMatch();
		}
	}
	else if (MatchState == MatchState::InProgress)
	{
		CountdownTime = WarmupTime + MatchTime - GetWorld()->GetTimeSeconds() + LevelStartTime;
		if (CountdownTime <= 0.f)
		{
			SetMatchState(MatchState::Cooldown);
		}
	}
	else if (MatchState == MatchState::Cooldown)
	{
		CountdownTime = CooldownTime + WarmupTime + MatchTime - GetWorld()->GetTimeSeconds() + LevelStartTime;
		if (CountdownTime <= 0.f)
		{
			RestartGame();
		}
	}
}

void AMPShooterGameMode::OnMatchStateSet()
{
	Super::OnMatchStateSet();

	for (FConstPlayerControllerIterator iterator = GetWorld()->GetPlayerControllerIterator(); iterator; iterator++)
	{
		AMPPlayerController* MPPlayerController = Cast<AMPPlayerController>(*iterator);
		if (MPPlayerController)
		{
			MPPlayerController->OnMatchStateSet(MatchState);
		}
	}
}
#pragma endregion

#pragma region Overrideable Actions
#pragma region Health
float AMPShooterGameMode::CalculateDamage(AController* Attacker, AController* Victim, float BaseDamage)
{
	return BaseDamage;
}

#pragma region Elimination
void AMPShooterGameMode::CharacterEliminated(AMPCharacter* VictimCharacter, AMPPlayerController* VictimController, AMPPlayerController* AttackerController)
{
	AMPPlayerState* AttackerPlayerState = AttackerController ? Cast<AMPPlayerState>(AttackerController->PlayerState) : nullptr;
	AMPPlayerState* VictimPlayerState = VictimController ? Cast<AMPPlayerState>(VictimController->PlayerState) : nullptr;
	AMPGameState* MPGameState = GetGameState<AMPGameState>();
	// Makes sure if the player eliminates themself, that the attacker won't get a free point
	if (AttackerPlayerState && AttackerPlayerState != VictimPlayerState && MPGameState)
	{
		TArray<AMPPlayerState*> PlayersCurrentlyInTheLead;
		for (auto LeadPlayer : MPGameState->TopScoringPlayers)
		{
			PlayersCurrentlyInTheLead.Add(LeadPlayer);
		}

		AttackerPlayerState->AddToScore(1.f);
		MPGameState->UpdateTopScore(AttackerPlayerState);
		if (MPGameState->TopScoringPlayers.Contains(AttackerPlayerState))
		{
			AMPCharacter* Leader = Cast<AMPCharacter>(AttackerPlayerState->GetPawn());
			if (Leader)
			{
				Leader->MulticastGainedTheLead();
			}
		}

		for (int32 i = 0; i < PlayersCurrentlyInTheLead.Num(); i++)
		{
			if (!MPGameState->TopScoringPlayers.Contains(PlayersCurrentlyInTheLead[i]))
			{
				AMPCharacter* Loser = Cast<AMPCharacter>(PlayersCurrentlyInTheLead[i]->GetPawn());
				if (Loser)
				{
					Loser->MulticastLostTheLead();
				}
			}
		}
	}

	if (VictimPlayerState)
	{
		VictimPlayerState->AddToDefeat(1);
	}

	if (VictimCharacter)
	{
		VictimCharacter->Eliminated(false);
	}

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		AMPPlayerController* MPPlayer = Cast<AMPPlayerController>(*It);
		if (MPPlayer && AttackerPlayerState && VictimPlayerState)
		{
			MPPlayer->BroadcastEliminate(AttackerPlayerState, VictimPlayerState);
		}
	}
}

void AMPShooterGameMode::RequestRespawn(class ACharacter* VictimCharacter, class AController* VictimController)
{
	if (VictimCharacter)
	{
		VictimCharacter->Reset();
		VictimCharacter->Destroy();
	}

	if (VictimController)
	{
		TArray<AActor*> PlayerStarts;
		UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStarts);
		const int32 MaxAttempts = 10;
		for (int32 i = 0; i < MaxAttempts; i++)
		{
			int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
			FVector StartLocation = PlayerStarts[Selection]->GetActorLocation();

			TArray<FOverlapResult> Overlaps;
			FCollisionQueryParams QueryParams;
			QueryParams.AddIgnoredActor(VictimCharacter);
			QueryParams.bTraceComplex = true;
			UWorld* World = GetWorld();
			if (World)
			{
				World->OverlapMultiByObjectType(
					Overlaps,
					StartLocation,
					FQuat::Identity,
					FCollisionObjectQueryParams(ECC_SkeletalMesh),
					FCollisionShape::MakeSphere(NearbyRadius),
					QueryParams
				);
			}

			// if there's no nearby players, respawn at current player start
			if (Overlaps.Num() == 0)
			{
				RestartPlayerAtPlayerStart(VictimController, PlayerStarts[Selection]);
				return;
			}
		}

		// if there's no suitable spawn locations, spawn at the default
		FRotator DefaultRotation = FRotator(0.f, 0.f, 0.f);
		RestartPlayerAtTransform(VictimController, FTransform(DefaultRotation, DefaultLocation));
	}
}
#pragma endregion

#pragma endregion

#pragma endregion

#pragma region Actions
#pragma region Character Match State
void AMPShooterGameMode::PlayerLeftGame(AMPPlayerState* PlayerLeaving)
{
	if (PlayerLeaving == nullptr)
	{
		return;
	}

	AMPGameState* MPGameState = GetGameState<AMPGameState>();
	if (MPGameState && MPGameState->TopScoringPlayers.Contains(PlayerLeaving))
	{
		MPGameState->TopScoringPlayers.Remove(PlayerLeaving);
	}

	AMPCharacter* CharacterLeaving = Cast<AMPCharacter>(PlayerLeaving->GetPawn());
	if (CharacterLeaving)
	{
		CharacterLeaving->Eliminated(true);
	}
}
#pragma endregion

#pragma region Chat
void AMPShooterGameMode::BroadcastChatMessage(APlayerState* Sender, const FString& Msg)
{
	// Chat checks & safety
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		AMPPlayerController* MPPlayerController = Cast<AMPPlayerController>(*It);
		if (MPPlayerController)
		{
			FString SenderName = Sender->GetPlayerName();
			MPPlayerController->ClientChatMessage(SenderName, Msg);
		}
	}
}
#pragma endregion

#pragma endregion
