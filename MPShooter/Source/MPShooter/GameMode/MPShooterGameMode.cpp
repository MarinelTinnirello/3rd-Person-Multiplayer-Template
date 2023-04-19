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

AMPShooterGameMode::AMPShooterGameMode()
{
	// Allows free cam movement since a pawn isn't possessed yet, before SetMatchState() is called
	bDelayedStart = true;
}

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
		AMPPlayerController* MPPlayer = Cast<AMPPlayerController>(*iterator);
		if (MPPlayer)
		{
			MPPlayer->OnMatchStateSet(MatchState);
		}
	}
}

void AMPShooterGameMode::CharacterEliminated(class AMPCharacter* ElimmedCharacter, class AMPPlayerController* ElimmedController, class AMPPlayerController* AttackterController)
{
	AMPPlayerState* AttackerPlayerState = AttackterController ? Cast<AMPPlayerState>(AttackterController->PlayerState) : nullptr;
	AMPPlayerState* ElimmedPlayerState = ElimmedController ? Cast<AMPPlayerState>(ElimmedController->PlayerState) : nullptr;
	AMPGameState* MPGameState = GetGameState<AMPGameState>();
	// Makes sure if the player eliminates themself, that the attacker won't get a free point
	if (AttackerPlayerState && AttackerPlayerState != ElimmedPlayerState && MPGameState)
	{
		AttackerPlayerState->AddToScore(1.f);
		MPGameState->UpdateTopScore(AttackerPlayerState);
	}

	if (ElimmedPlayerState)
	{
		ElimmedPlayerState->AddToDefeat(1);
	}

	if (ElimmedCharacter)
	{
		ElimmedCharacter->Eliminated();
	}
}

void AMPShooterGameMode::RequestRespawn(class ACharacter* ElimmedCharacter, class AController* ElimmedController)
{
	if (ElimmedCharacter)
	{
		ElimmedCharacter->Reset();
		ElimmedCharacter->Destroy();
	}

	if (ElimmedController)
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
			QueryParams.AddIgnoredActor(ElimmedCharacter);
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
				RestartPlayerAtPlayerStart(ElimmedController, PlayerStarts[Selection]);
				return;
			}
		}

		// if there's no suitable spawn locations, spawn at the default
		FRotator DefaultRotation = FRotator(0.f, 0.f, 0.f);
		RestartPlayerAtTransform(ElimmedController, FTransform(DefaultRotation, DefaultLocation));
	}
}