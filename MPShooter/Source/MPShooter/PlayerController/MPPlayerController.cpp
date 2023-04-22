// Fill out your copyright notice in the Description page of Project Settings.


#include "MPPlayerController.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "MPShooter/HUD/MPHUD.h"
#include "MPShooter/HUD/CharacterOverlay.h"
#include "MPShooter/HUD/Annoucement.h"
#include "MPShooter/HUD/SniperScopeOverlay.h"
#include "MPShooter/Character/MPCharacter.h"
#include "MPShooter/MPComponents/CombatComponent.h"
#include "MPShooter/GameMode/MPShooterGameMode.h"
#include "MPShooter/GameState/MPGameState.h"
#include "MPShooter/PlayerState/MPPlayerState.h"
#include "MPShooter/HUD/ReturnToMainMenu.h"

void AMPPlayerController::BeginPlay()
{
	Super::BeginPlay();

	MPHUD = Cast<AMPHUD>(GetHUD());
	ServerCheckMatchState();
}

void AMPPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	SetHUDTime();
	CheckTimeSync(DeltaTime);
	PollInit();
	CheckPing(DeltaTime);
}

void AMPPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMPPlayerController, MatchState);
}

void AMPPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AMPCharacter* MPCharacter = Cast<AMPCharacter>(InPawn);
	if (MPCharacter)
	{
		SetHUDHealth(MPCharacter->GetHealth(), MPCharacter->GetMaxHealth());
		SetHUDShield(MPCharacter->GetShield(), MPCharacter->GetMaxShield());
		SetHUDWeaponType(EWeaponType::EWT_Unequipped);
	}
}

void AMPPlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();

	if (IsLocalController())
	{
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
	}
}

void AMPPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (InputComponent == nullptr)
	{
		return;
	}

	InputComponent->BindAction("Quit", IE_Pressed, this, &AMPPlayerController::ShowReturnToMainMenu);
}

void AMPPlayerController::ServerCheckMatchState_Implementation()
{
	AMPShooterGameMode* GameMode = Cast<AMPShooterGameMode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		WarmupTime = GameMode->WarmupTime;
		LevelStartTime = GameMode->LevelStartTime;
		MatchTime = GameMode->MatchTime;
		CooldownTime = GameMode->CooldownTime;
		MatchWarningTime = GameMode->MatchWarningTime;
		MatchState = GameMode->GetMatchState();
		ClientJoinMidGame(MatchState, WarmupTime, LevelStartTime, MatchTime, CooldownTime, MatchWarningTime);
	}
}

void AMPPlayerController::ClientJoinMidGame_Implementation(FName StateOfMatch, float Warmup, float LevelStart, float Match, float Cooldown, float MatchWarning)
{
	WarmupTime = Warmup;
	LevelStartTime = LevelStart;
	MatchTime = Match;
	CooldownTime = Cooldown;
	MatchWarningTime = MatchWarning;
	MatchState = StateOfMatch;
	OnMatchStateSet(MatchState);

	if (MPHUD && MatchState == MatchState::WaitingToStart)
	{
		MPHUD->AddAnnoucement();
	}
}

void AMPPlayerController::BroadcastEliminate(APlayerState* Attacker, APlayerState* Victim)
{
	ClientEliminateAnnouncement(Attacker, Victim);
}

void AMPPlayerController::ClientEliminateAnnouncement_Implementation(APlayerState* Attacker, APlayerState* Victim)
{
	APlayerState* Self = GetPlayerState<APlayerState>();
	if (Attacker && Victim && Self)
	{
		MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
		if (MPHUD)
		{
			if (Attacker == Self && Victim != Self)
			{
				MPHUD->AddEliminateAnnouncement("You", Victim->GetPlayerName());
				return;
			}
			if (Victim == Self && Attacker != Self)
			{
				MPHUD->AddEliminateAnnouncement(Attacker->GetPlayerName(), "you");
				return;
			}
			if (Attacker == Victim && Attacker == Self)
			{
				MPHUD->AddEliminateAnnouncement("You", "yourself");
				return;
			}
			if (Attacker == Victim && Attacker != Self)
			{
				MPHUD->AddEliminateAnnouncement(Attacker->GetPlayerName(), "themselves");
				return;
			}

			MPHUD->AddEliminateAnnouncement(Attacker->GetPlayerName(), Victim->GetPlayerName());
		}
	}
}

void AMPPlayerController::PollInit()
{
	if (CharacterOverlay == nullptr)
	{
		if (MPHUD && MPHUD->CharacterOverlay)
		{
			CharacterOverlay = MPHUD->CharacterOverlay;

			if (CharacterOverlay)
			{
				if (bInitHealth) SetHUDHealth(HUDHealth, HUDMaxHealh);
				if (bInitShield) SetHUDShield(HUDShield, HUDMaxShield);
				if (bInitWeaponType) SetHUDWeaponType(HUDWeaponType);
				if (bInitCarriedAmmo) SetHUDCarriedAmmo(HUDCarriedAmmo);
				if (bInitWeaponAmmo) SetHUDWeaponAmmo(HUDWeaponAmmo);
				if (bInitScore) SetHUDScore(HUDScore);
				if (bInitDefeat) SetHUDDefeat(HUDDefeat);

				AMPCharacter* MPCharacter = Cast<AMPCharacter>(GetPawn());
				if (MPCharacter && MPCharacter->GetCombat())
				{
					//if (bInitThrowables) SetHUDCarriedThrowables(MPCharacter->GetCombat()->GetThrowables());
					if (bInitThrowables) SetHUDCarriedThrowables(HUDThrowables);
				}

				MPHUD->CharacterOverlay->EliminatedText->SetVisibility(ESlateVisibility::Hidden);
				MPHUD->CharacterOverlay->HighPingImage->SetOpacity(0.f);
				MPHUD->CharacterOverlay->HighPingText->SetText(FText::FromString(""));
			}
		}
	}
}

void AMPPlayerController::SetHUDHealth(float Health, float MaxHealth)
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD && 
		MPHUD->CharacterOverlay && 
		MPHUD->CharacterOverlay->HealthBar && 
		MPHUD->CharacterOverlay->HealthText;
	if (bHUDValid)
	{
		const float HealthPercent = Health / MaxHealth;
		MPHUD->CharacterOverlay->HealthBar->SetPercent(HealthPercent);
		FString HealthText = FString::Printf(TEXT("%d/%d"), FMath::CeilToInt(Health), FMath::CeilToInt(MaxHealth));
		MPHUD->CharacterOverlay->HealthText->SetText(FText::FromString(HealthText));
	}
	else
	{
		bInitHealth = true;
		HUDHealth = Health;
		HUDMaxHealh = MaxHealth;
	}
}

void AMPPlayerController::SetHUDShield(float Shield, float MaxShield)
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->ShieldBar &&
		MPHUD->CharacterOverlay->ShieldText;
	if (bHUDValid)
	{
		const float ShieldPercent = Shield / MaxShield;
		MPHUD->CharacterOverlay->ShieldBar->SetPercent(ShieldPercent);
		FString ShieldText = FString::Printf(TEXT("%d/%d"), FMath::CeilToInt(Shield), FMath::CeilToInt(MaxShield));
		MPHUD->CharacterOverlay->ShieldText->SetText(FText::FromString(ShieldText));
	}
	else
	{
		bInitShield = true;
		HUDShield = Shield;
		HUDMaxShield= MaxShield;
	}
}

void AMPPlayerController::SetHUDScore(float Score)
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->ScoreAmountText;
	if (bHUDValid)
	{
		FString ScoreText = FString::Printf(TEXT("%d"), FMath::FloorToInt(Score));
		MPHUD->CharacterOverlay->ScoreAmountText->SetText(FText::FromString(ScoreText));
	}
	else
	{
		bInitScore = true;
		HUDScore = Score;
	}
}

void AMPPlayerController::SetHUDDefeat(int32 Defeat)
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->DefeatAmountText;
	if (bHUDValid)
	{
		FString DefeatText = FString::Printf(TEXT("%d"), Defeat);
		MPHUD->CharacterOverlay->DefeatAmountText->SetText(FText::FromString(DefeatText));
	}
	else
	{
		bInitDefeat = true;
		HUDDefeat = Defeat;
	}
}

void AMPPlayerController::ShowEliminatedText()
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->EliminatedText;
	if (bHUDValid)
	{
		AMPCharacter* MPCharacter = Cast <AMPCharacter>(GetPawn());
		if (MPCharacter)
		{
			MPHUD->CharacterOverlay->EliminatedText->SetVisibility(ESlateVisibility::Visible);
			FTimerHandle HideTimer;
			GetWorldTimerManager().SetTimer(HideTimer, FTimerDelegate::CreateLambda([&]()
			{
				MPHUD->CharacterOverlay->EliminatedText->SetVisibility(ESlateVisibility::Hidden);
			}), MPCharacter->GetEliminateDelay(), false);
		}
	}
}

void AMPPlayerController::SetHUDWeaponAmmo(int32 Ammo)
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->WeaponAmmoAmountText;
	if (bHUDValid)
	{
		FString AmmoText = FString::Printf(TEXT("%d"), Ammo);
		MPHUD->CharacterOverlay->WeaponAmmoAmountText->SetText(FText::FromString(AmmoText));
	}
	else
	{
		bInitWeaponAmmo = true;
		HUDWeaponAmmo = Ammo;
	}
}

void AMPPlayerController::SetHUDCarriedAmmo(int32 Ammo)
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->CarriedAmmoAmountText;
	if (bHUDValid)
	{
		FString AmmoText = FString::Printf(TEXT("%d"), Ammo);
		MPHUD->CharacterOverlay->CarriedAmmoAmountText->SetText(FText::FromString(AmmoText));
	}
	else
	{
		bInitCarriedAmmo = true;
		HUDCarriedAmmo = Ammo;
	}
}

void AMPPlayerController::SetHUDCarriedThrowables(int32 Throwables)
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->CarriedThrowableAmountText;
	if (bHUDValid)
	{
		FString ThrowableText = FString::Printf(TEXT("%d"), Throwables);
		MPHUD->CharacterOverlay->CarriedThrowableAmountText->SetText(FText::FromString(ThrowableText));
	}
	else
	{
		bInitThrowables = true;
		HUDThrowables = Throwables;
	}
}

void AMPPlayerController::SetHUDWeaponType(EWeaponType WeaponType)
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->WeaponTypeText;
	if (bHUDValid)
	{
		FText WeaponTypeText;
		UEnum::GetDisplayValueAsText<EWeaponType>(WeaponType, WeaponTypeText);

		if (WeaponType == EWeaponType::EWT_Unequipped)
		{
			WeaponTypeText = FText::FromString("");
		}

		MPHUD->CharacterOverlay->WeaponTypeText->SetText(WeaponTypeText);
	}
	else
	{
		bInitWeaponType = true;
		HUDWeaponType = WeaponType;
	}
}

void AMPPlayerController::SetHUDSniperScope(bool bIsAiming)
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->SniperScopeOverlay &&
		MPHUD->SniperScopeOverlay->ScopeZoomIn;
	if (!MPHUD->SniperScopeOverlay)
	{
		MPHUD->AddSniperScopeOverlay();
	}

	if (bHUDValid)
	{
		if (bIsAiming)
		{
			MPHUD->SniperScopeOverlay->PlayAnimation(MPHUD->SniperScopeOverlay->ScopeZoomIn);
		}
		else
		{
			MPHUD->SniperScopeOverlay->PlayAnimation(
				MPHUD->SniperScopeOverlay->ScopeZoomIn,
				0.f,
				1,
				EUMGSequencePlayMode::Reverse
			);
		}
	}
}

void AMPPlayerController::SetHUDMatchCountdown(float CountdownTime, float MatchWarning)
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->MatchCountdownText &&
		MPHUD->CharacterOverlay->MatchEndWarning;
	if (bHUDValid)
	{
		if (CountdownTime < 0.f)
		{
			MPHUD->CharacterOverlay->MatchCountdownText->SetText(FText());
			return;
		}

		int32 Minutes = FMath::FloorToInt(CountdownTime / 60.f);
		int32 Seconds = CountdownTime - (Minutes * 60.f);
		FString CountdownText = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
		MPHUD->CharacterOverlay->MatchCountdownText->SetText(FText::FromString(CountdownText));

		if (CountdownTime <= MatchWarning)
		{
			if (!MPHUD->CharacterOverlay->IsAnimationPlaying(MPHUD->CharacterOverlay->MatchEndWarning))
			{
				MPHUD->CharacterOverlay->PlayAnimation(MPHUD->CharacterOverlay->MatchEndWarning);
			}
		}
	}
}

void AMPPlayerController::SetHUDAnnouncementCountdown(float CountdownTime)
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->Annoucement &&
		MPHUD->Annoucement->WarmupTimeText;
	if (bHUDValid)
	{
		if (CountdownTime < 0.f)
		{
			MPHUD->Annoucement->WarmupTimeText->SetText(FText());
			return;
		}

		int32 Minutes = FMath::FloorToInt(CountdownTime / 60.f);
		int32 Seconds = CountdownTime - (Minutes * 60.f);
		FString CountdownText = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
		MPHUD->Annoucement->WarmupTimeText->SetText(FText::FromString(CountdownText));
	}
}

void AMPPlayerController::SetHUDTime()
{
	float TimeLeft = 0.f;

	if (MatchState == MatchState::WaitingToStart)
	{
		TimeLeft = WarmupTime - GetServerTime() + LevelStartTime;
	}
	else if (MatchState == MatchState::InProgress)
	{
		TimeLeft = WarmupTime + MatchTime - GetServerTime() + LevelStartTime;
	}
	else if (MatchState == MatchState::Cooldown)
	{
		TimeLeft = CooldownTime + WarmupTime + MatchTime - GetServerTime() + LevelStartTime;
	}

	uint32 SecondsLeft = FMath::CeilToInt(TimeLeft);

	if (HasAuthority())
	{
		MPShooterGameMode = MPShooterGameMode == nullptr ? Cast<AMPShooterGameMode>(UGameplayStatics::GetGameMode(this)) : MPShooterGameMode;

		if (MPShooterGameMode)
		{
			SecondsLeft = FMath::CeilToInt(MPShooterGameMode->GetCountdownTime() + LevelStartTime);
		}
	}

	if (CountdownInt != SecondsLeft)
	{
		if (MatchState == MatchState::WaitingToStart || MatchState == MatchState::Cooldown)
		{
			SetHUDAnnouncementCountdown(TimeLeft);
		}
		if (MatchState == MatchState::InProgress)
		{
			SetHUDMatchCountdown(TimeLeft, MatchWarningTime);
		}
	}

	CountdownInt = SecondsLeft;
}

void AMPPlayerController::ServerRequestServerTime_Implementation(float TimeOfClientRequest)
{
	float ServerTimeOfReceipt = GetWorld()->GetTimeSeconds();
	ClientReportServerTime(TimeOfClientRequest, ServerTimeOfReceipt);
}

void AMPPlayerController::ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest)
{
	float RoundTripTime = GetWorld()->GetTimeSeconds() - TimeOfClientRequest;
	SingleTripTime = 0.5f * RoundTripTime;
	float CurrentServerTime = TimeServerReceivedClientRequest + SingleTripTime;
	ClientServerDelta = CurrentServerTime - GetWorld()->GetTimeSeconds();
}

float AMPPlayerController::GetServerTime()
{
	if (HasAuthority())
	{
		return GetWorld()->GetTimeSeconds();
	}
	else
	{
		return GetWorld()->GetTimeSeconds() + ClientServerDelta;
	}
}

void AMPPlayerController::CheckTimeSync(float DeltaTime)
{
	TimeSyncRunningTime += DeltaTime;
	if (IsLocalController() && TimeSyncRunningTime > TimeSyncFrequency)
	{
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
		TimeSyncRunningTime = 0.f;
	}
}

void AMPPlayerController::HandleMatchHasStarted()
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	if (MPHUD)
	{
		if (MPHUD->CharacterOverlay == nullptr)
		{
			MPHUD->AddCharacterOverlay();
		}

		if (MPHUD->Annoucement)
		{
			MPHUD->Annoucement->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

void AMPPlayerController::HandleCooldownMatch()
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	if (MPHUD)
	{
		bool bHUDValid = MPHUD->Annoucement && 
			MPHUD->Annoucement->AnnoucementText && 
			MPHUD->Annoucement->InfoText;
		MPHUD->CharacterOverlay->RemoveFromParent();

		if (bHUDValid)
		{
			MPHUD->Annoucement->SetVisibility(ESlateVisibility::Visible);
			FString AnnoucementText("New match starts in:");
			MPHUD->Annoucement->AnnoucementText->SetText(FText::FromString(AnnoucementText));

			AMPGameState* MPGameState = Cast<AMPGameState>(UGameplayStatics::GetGameState(this));
			AMPPlayerState* MPPlayerState = GetPlayerState<AMPPlayerState>();
			if (MPGameState)
			{
				TArray<AMPPlayerState*> TopPlayers = MPGameState->TopScoringPlayers;
				FString InfoText;

				if (TopPlayers.Num() == 0)
				{
					InfoText = FString("No contest");
				}
				else if (TopPlayers.Num() == 1 && TopPlayers[0] == MPPlayerState)
				{
					InfoText = FString("You are the winner");
				}
				else if (TopPlayers.Num() == 1)
				{
					InfoText = FString::Printf(TEXT("Winner: \n%s"), *TopPlayers[0]->GetPlayerName());
				}
				else if (TopPlayers.Num() > 1)
				{
					InfoText = FString::Printf(TEXT("Tied Winners: \n"));

					for (auto TiedPlayers : TopPlayers)
					{
						InfoText.Append(FString::Printf(TEXT("%s\n"), *TiedPlayers->GetPlayerName()));
					}
				}

				MPHUD->Annoucement->InfoText->SetText(FText::FromString(InfoText));
			}
		}
	}

	AMPCharacter* MPCharacter = Cast<AMPCharacter>(GetPawn());
	if (MPCharacter && MPCharacter->GetCombat())
	{
		MPCharacter->bDisableGameplay = true;
		MPCharacter->GetCombat()->FireButtonPressed(false);
	}
}

void AMPPlayerController::OnMatchStateSet(FName State)
{
	MatchState = State;
	if (MatchState == MatchState::InProgress)
	{
		HandleMatchHasStarted();
	}
	else if (MatchState == MatchState::Cooldown)
	{
		HandleCooldownMatch();
	}
}

void AMPPlayerController::OnRep_MatchState()
{
	if (MatchState == MatchState::InProgress)
	{
		HandleMatchHasStarted();
	}
	else if (MatchState == MatchState::Cooldown)
	{
		HandleCooldownMatch();
	}
}

void AMPPlayerController::CheckPing(float DeltaTime)
{
	if (HasAuthority())
	{
		return;
	}

	HighPingRunningTime += DeltaTime;
	if (HighPingRunningTime > CheckPingFrequency)
	{
		PlayerState = PlayerState == nullptr ? GetPlayerState<APlayerState>() : PlayerState;
		if (PlayerState)
		{
			// ping is compressed; it's actually ping / 4
			if (PlayerState->GetCompressedPing() * 4 > HighPingThreshold) 
			{
				HighPingWarning();
				PingAnimationRunningTime = 0.f;
				ServerReportPingStatus(true);
			}
			else
			{
				ServerReportPingStatus(false);
			}
		}
		HighPingRunningTime = 0.f;
	}

	bool bHighPingAnimationPlaying =
		MPHUD && MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->HighPingWarning &&
		MPHUD->CharacterOverlay->IsAnimationPlaying(MPHUD->CharacterOverlay->HighPingWarning);
	if (bHighPingAnimationPlaying)
	{
		PingAnimationRunningTime += DeltaTime;
		if (PingAnimationRunningTime > HighPingDuration)
		{
			StopHighPingWarning();
		}
	}
}

void AMPPlayerController::HighPingWarning()
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->HighPingText &&
		MPHUD->CharacterOverlay->HighPingImage &&
		MPHUD->CharacterOverlay->HighPingWarning;
	if (bHUDValid)
	{
		// GetPingInMS() * by 4 for us, GetCompressedPing() / by 4 for us
		// this is still the ping after compression, and it also doesn't take the single-trip time into account,
		// so it's not as accurate, but good enough for the UI to show to the user
		float CurrentPing = PlayerState->GetPingInMilliseconds();
		FString PingText = FString::Printf(TEXT("%d ms"), FMath::FloorToInt(CurrentPing));
		MPHUD->CharacterOverlay->HighPingText->SetText(FText::FromString(PingText));

		MPHUD->CharacterOverlay->HighPingImage->SetOpacity(1.f);
		MPHUD->CharacterOverlay->PlayAnimation(
			MPHUD->CharacterOverlay->HighPingWarning,
			0.f,	// start time
			5);		// loop amount
	}
}

void AMPPlayerController::StopHighPingWarning()
{
	MPHUD = MPHUD == nullptr ? Cast<AMPHUD>(GetHUD()) : MPHUD;
	bool bHUDValid = MPHUD &&
		MPHUD->CharacterOverlay &&
		MPHUD->CharacterOverlay->HighPingText &&
		MPHUD->CharacterOverlay->HighPingImage &&
		MPHUD->CharacterOverlay->HighPingWarning;
	if (bHUDValid)
	{
		MPHUD->CharacterOverlay->HighPingText->SetText(FText::FromString(""));

		MPHUD->CharacterOverlay->HighPingImage->SetOpacity(0.f);
		if (MPHUD->CharacterOverlay->IsAnimationPlaying(MPHUD->CharacterOverlay->HighPingWarning))
		{
			MPHUD->CharacterOverlay->StopAnimation(MPHUD->CharacterOverlay->HighPingWarning);
		}
	}
}

void AMPPlayerController::ServerReportPingStatus_Implementation(bool bHighPing)
{
	HighPingDelegate.Broadcast(bHighPing);
}

void AMPPlayerController::ShowReturnToMainMenu()
{
	if (ReturnToMainMenuWidget == nullptr)
	{
		return;
	}
	if (ReturnToMainMenu == nullptr)
	{
		ReturnToMainMenu = CreateWidget<UReturnToMainMenu>(this, ReturnToMainMenuWidget);
	}
	if (ReturnToMainMenu)
	{
		bReturnToMainMenuOpen = !bReturnToMainMenuOpen;
		if (bReturnToMainMenuOpen)
		{
			ReturnToMainMenu->MenuSetup();
		}
		else
		{
			ReturnToMainMenu->MenuTearDown();
		}
	}
}

void AMPPlayerController::ServerBroadcastChatMessage_Implementation(APlayerState* Sender, const FString& Msg)
{
	AMPShooterGameMode* MPShooterGameMode = GetWorld()->GetAuthGameMode<AMPShooterGameMode>();
	if (MPShooterGameMode)
	{
		MPShooterGameMode->BroadcastChatMessage(Sender, Msg);
	}
}

void AMPPlayerController::ClientChatMessage_Implementation(const FString& SenderName, const FString& Msg)
{
	if (MPHUD == nullptr)
	{
		MPHUD = Cast<AMPHUD>(GetHUD());
	}

	if (MPHUD)
	{
		MPHUD->AddChatMessage(SenderName, Msg);
	}
}
