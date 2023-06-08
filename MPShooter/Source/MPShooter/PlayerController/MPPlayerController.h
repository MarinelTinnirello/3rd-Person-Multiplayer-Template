// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MPShooter/Item/Weapon/WeaponTypes.h"

#include "MPPlayerController.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHighPingDelegate, bool, bPingTooHigh);

UCLASS()
class MPSHOOTER_API AMPPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	float SingleTripTime = 0.f;
	FHighPingDelegate HighPingDelegate;

	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void ReceivedPlayer() override;

	void SetHUDHealth(float Health, float MaxHealth);
	void SetHUDShield(float Shield, float MaxShield);
	void SetHUDScore(float Score);
	void SetHUDDefeat(int32 Defeat);
	void ShowEliminatedText();
	void SetHUDWeaponAmmo(int32 Ammo);
	void SetHUDCarriedAmmo(int32 Ammo);
	void SetHUDCarriedThrowables(int32 Throwables);
	void SetHUDWeaponType(EWeaponType WeaponType);
	void SetHUDSniperScope(bool bIsAiming);
	void SetHUDMatchCountdown(float CountdownTime, float MatchWarningTime);
	void SetHUDAnnouncementCountdown(float CountdownTime);
	void ToggleChatBox();
	void SetHUDWeaponWheel(bool bIsVisible);
	void SetHUDWeaponWheelIcon();

	virtual float GetServerTime();

	void OnMatchStateSet(FName State);
	void HandleMatchHasStarted();
	void HandleCooldownMatch();
	void BroadcastEliminate(APlayerState* Attacker, APlayerState* Victim);

	UFUNCTION(Server, Reliable)
	void ServerBroadcastChatMessage(APlayerState* Sender, const FString& Msg);
	UFUNCTION(Client, Reliable)
	void ClientChatMessage(const FString& SenderName, const FString& Msg);

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	void PollInit();
	void SetHUDTime();

	// 
	// Time syncs
	//
	float ClientServerDelta;
	UPROPERTY(EditAnywhere, Category = "Time", meta = (ToolTip = "How frequently to get the server's time (seconds)."))
	float TimeSyncFrequency = 5.f;
	float TimeSyncRunningTime = 0.f;

	UFUNCTION(Server, Reliable)
	void ServerRequestServerTime(float TimeOfClientRequest);
	UFUNCTION(Client, Reliable)
	void ClientReportServerTime(float TimeOfClientRequest, float TimeServerReceivedClientRequest);
	void CheckTimeSync(float DeltaTime);

	//
	// Ping
	//
	void CheckPing(float DeltaTime);
	void HighPingWarning();
	void StopHighPingWarning();

	UFUNCTION(Server, Reliable)
	void ServerReportPingStatus(bool bHighPing);

	//
	// Match State
	//
	UFUNCTION(Server, Reliable)
	void ServerCheckMatchState();
	UFUNCTION(Client, Reliable)
	void ClientJoinMidGame(FName StateOfMatch, float Warmup, float LevelStart, float Match, float Cooldown, float MatchWarning);
	UFUNCTION(Client, Reliable)
	void ClientEliminateAnnouncement(APlayerState* Attacker, APlayerState* Victim);

	//
	// Return to Main Menu
	//
	void ShowReturnToMainMenu();

private:
	UPROPERTY()
	class AMPShooterGameMode* MPShooterGameMode;
	UPROPERTY()
	class AMPHUD* MPHUD;

	//
	// Match Properties
	//
	float WarmupTime = 0.f;
	float LevelStartTime = 0.f;
	float MatchTime = 0.f;
	float CooldownTime = 0.f;
	float MatchWarningTime = 0.f;
	uint32 CountdownInt = 0.f;
	UPROPERTY(ReplicatedUsing = OnRep_MatchState)
	FName MatchState;

	UFUNCTION()
	void OnRep_MatchState();

	//
	// Character Overlay - Cached Properties
	// it updates late in the process, so it's best to separate what updates
	//
	UPROPERTY()
	class UCharacterOverlay* CharacterOverlay;
	float HUDHealth;
	float HUDMaxHealh;
	bool bInitHealth = false;
	float HUDShield;
	float HUDMaxShield;
	bool bInitShield = false;
	EWeaponType HUDWeaponType;
	bool bInitWeaponType = false;
	float HUDCarriedAmmo;
	bool bInitCarriedAmmo = false;
	float HUDWeaponAmmo;
	bool bInitWeaponAmmo = false;
	int32 HUDThrowables;
	bool bInitThrowables = false;
	float HUDScore;
	bool bInitScore = false;
	int32 HUDDefeat;
	bool bInitDefeat = false;

	//
	// Ping
	//
	float HighPingRunningTime = 0.f;
	UPROPERTY(EditAnywhere, Category = "Ping", meta = (ToolTip = "Amount of time the high ping animation plays."))
	float HighPingDuration = 5.f;
	float PingAnimationRunningTime = 0.f;
	UPROPERTY(EditAnywhere, Category = "Ping", meta = (ToolTip = "How often to check for ping."))
	float CheckPingFrequency = 20.f;
	UPROPERTY(EditAnywhere, Category = "Ping", meta = (ToolTip = "Threshold of acceptable ping."))
	float HighPingThreshold = 50.f;

	//
	// Return to Main Menu
	//
	UPROPERTY(EditAnywhere, Category = "HUD", meta = (ToolTip = "Widget for returning to the main menu."))
	TSubclassOf<class UUserWidget> ReturnToMainMenuWidget;
	UPROPERTY()
	class UReturnToMainMenu* ReturnToMainMenu;
	bool bReturnToMainMenuOpen = false;

};
