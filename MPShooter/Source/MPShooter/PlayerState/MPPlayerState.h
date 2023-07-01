// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MPShooter/MPTypes/Team.h"
#include "MPPlayerState.generated.h"

#pragma region Forward Declarations
class AMPCharacter;
class AMPPlayerController;
#pragma endregion

UCLASS()
class MPSHOOTER_API AMPPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	#pragma region Engine Overrides
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnRep_Score() override;
	#pragma endregion
	
	#pragma region Actions
	void AddToScore(float ScoreAmount);
	void AddToDefeat(int32 DefeatAmount);

	#pragma region OnRep
	UFUNCTION()
	virtual void OnRep_Defeat();
	#pragma endregion

	#pragma endregion

private:
	#pragma region References
	UPROPERTY()
	AMPCharacter* Character;
	UPROPERTY()
	AMPPlayerController* Controller;
	#pragma endregion

	#pragma region Player State Properties
	UPROPERTY(ReplicatedUsing = OnRep_Defeat)
	int32 Defeat;
	UPROPERTY(ReplicatedUsing = OnRep_Team)	
	ETeam Team = ETeam::ET_NoTeam;

	#pragma region OnRep
	UFUNCTION()
	void OnRep_Team();
	#pragma endregion

	#pragma endregion

public:
	#pragma region Getters & Setters
	FORCEINLINE ETeam GetTeam() const { return Team; }
	void SetTeam(ETeam TeamToSet);
	#pragma endregion

};
