// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MPShooterGameMode.h"
#include "TeamsGameMode.generated.h"

UCLASS()
class MPSHOOTER_API ATeamsGameMode : public AMPShooterGameMode
{
	GENERATED_BODY()
	
public:
	#pragma region Engine Overrides
	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;
	#pragma endregion

	#pragma region Overridden Actions
	virtual float CalculateDamage(
		AController* Attacker, 
		AController* Victim, 
		float BaseDamage
	) override;
	virtual void CharacterEliminated(
		AMPCharacter* ElimmedCharacter,
		AMPPlayerController* ElimmedController,
		AMPPlayerController* AttackerController
	) override;
	#pragma endregion

protected:
	#pragma region Match Properties
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Checks if to allow friendly fire during a match."))
	bool bFriendlyFire = false;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "Checks if a team should lose a point on a player committing suicide. In this definition, 'suicide' is defined by a player dying by their own weapons."))
	bool bLosePointOnSuicide = false;
	#pragma endregion

	#pragma region Engine Overrides
	virtual void HandleMatchHasStarted() override;
	#pragma endregion

};
