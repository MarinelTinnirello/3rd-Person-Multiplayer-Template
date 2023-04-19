// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MPShooterGameMode.generated.h"

namespace MatchState
{
	extern MPSHOOTER_API const FName Cooldown;	// Match duration reached, display winner, begin cooldown timer
}

UCLASS()
class MPSHOOTER_API AMPShooterGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	AMPShooterGameMode();
	virtual void Tick(float DeltaTime) override;

	virtual void CharacterEliminated(class AMPCharacter* ElimmedCharacter, class AMPPlayerController* ElimmedController, class AMPPlayerController* AttackterController);
	virtual void RequestRespawn(class ACharacter* ElimmedCharacter, class AController* ElimmedController);

	UPROPERTY(EditDefaultsOnly)
	float WarmupTime = 10.f;
	UPROPERTY(EditDefaultsOnly)
	float MatchTime = 120.f;
	float LevelStartTime = 0.f;
	UPROPERTY(EditDefaultsOnly)
	float CooldownTime = 10.f;
	UPROPERTY(EditDefaultsOnly)
	float MatchWarningTime = 10.f;

protected:
	virtual void BeginPlay() override;
	virtual void OnMatchStateSet() override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Respawn", meta = (ToolTip = "Minimum radius of viable player start locations."))
	float NearbyRadius = 150.f;
	UPROPERTY(EditDefaultsOnly, Category = "Respawn", meta = (ToolTip = "Default location to respawn if there's no suitable spawn locations found after the max attempts."))
	FVector DefaultLocation = FVector(0.f, 0.f, 0.f);
	float CountdownTime = 0.f;

public:
	FORCEINLINE float GetCountdownTime() const { return CountdownTime; }
};
