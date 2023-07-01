// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MPShooterGameMode.generated.h"

namespace MatchState
{
	extern MPSHOOTER_API const FName Cooldown;	// Match duration reached, display winner, begin cooldown timer
}

#pragma region Forward Declarations
class ACharacter;
class AController;
class AMPCharacter;
class AMPPlayerController;
class AMPPlayerState;
#pragma endregion

UCLASS()
class MPSHOOTER_API AMPShooterGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	#pragma region Match Time Properties
	//
	// Match Time Properties
	//
	UPROPERTY(EditDefaultsOnly)
	float WarmupTime = 10.f;
	UPROPERTY(EditDefaultsOnly)
	float MatchTime = 120.f;
	float LevelStartTime = 0.f;
	UPROPERTY(EditDefaultsOnly)
	float CooldownTime = 10.f;
	UPROPERTY(EditDefaultsOnly)
	float MatchWarningTime = 10.f;
	bool bTeamsMatch = false;
	#pragma endregion

	#pragma region Constructor & Engine Overrides
	AMPShooterGameMode();
	virtual void Tick(float DeltaTime) override;
	#pragma endregion

	#pragma region Overrideable Actions
	virtual float CalculateDamage(
		AController* Attacker, 
		AController* Victim, 
		float BaseDamage
	);
	virtual void CharacterEliminated(
		AMPCharacter* VictimCharacter,
		AMPPlayerController* VictimController,
		AMPPlayerController* AttackerController
	);
	virtual void RequestRespawn(
		ACharacter* VictimCharacter,
		AController* VictimController
	);
	#pragma endregion

	#pragma region Actions
	void PlayerLeftGame(AMPPlayerState* PlayerLeaving);
	void BroadcastChatMessage(APlayerState* Sender, const FString& Msg);
	#pragma endregion

protected:
	#pragma region Engine Overrides
	virtual void BeginPlay() override;
	virtual void OnMatchStateSet() override;
	#pragma endregion

private:
	#pragma region Respawn Properties
	UPROPERTY(EditDefaultsOnly, Category = "Respawn", meta = (ToolTip = "Minimum radius of viable player start locations."))
	float NearbyRadius = 150.f;
	UPROPERTY(EditDefaultsOnly, Category = "Respawn", meta = (ToolTip = "Default location to respawn if there's no suitable spawn locations found after the max attempts."))
	FVector DefaultLocation = FVector(0.f, 0.f, 0.f);
	float CountdownTime = 0.f;
	#pragma endregion

public:
	#pragma region Getters
	FORCEINLINE float GetCountdownTime() const { return CountdownTime; }
	#pragma endregion

};
