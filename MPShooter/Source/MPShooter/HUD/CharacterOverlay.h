// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterOverlay.generated.h"

#pragma region Forward Declarations
class UProgressBar;
class UTextBlock;
class UImage;
class UWidgetAnimation;
#pragma endregion

UCLASS()
class MPSHOOTER_API UCharacterOverlay : public UUserWidget
{
	GENERATED_BODY()
	
public:
	#pragma region Health
	UPROPERTY(meta = (BindWidget))
	UProgressBar* HealthBar;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* HealthText;
	#pragma endregion

	#pragma region Shield
	UPROPERTY(meta = (BindWidget))
	UProgressBar* ShieldBar;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ShieldText;
	#pragma endregion

	#pragma region Scores & Defeats
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ScoreAmountText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* DefeatAmountText;

	#pragma region Team
	UPROPERTY(meta = (BindWidget))
	UTextBlock* RedTeamScoreText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* BlueTeamScoreText;
	#pragma endregion

	#pragma endregion

	#pragma region Elimination
	UPROPERTY(meta = (BindWidget))
	UTextBlock* EliminatedText;
	#pragma endregion

	#pragma region Weapon
	UPROPERTY(meta = (BindWidget))
	UTextBlock* WeaponAmmoAmountText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* CarriedAmmoAmountText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* CarriedThrowableAmountText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* WeaponTypeText;
	#pragma endregion

	#pragma region Match
	UPROPERTY(meta = (BindWidget))
	UTextBlock* MatchCountdownText;
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* MatchEndWarning;
	#pragma endregion

	#pragma region High Ping
	UPROPERTY(meta = (BindWidget))
	UTextBlock* HighPingText;
	UPROPERTY(meta = (BindWidget))
	UImage* HighPingImage;
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* HighPingWarning;
	#pragma endregion

};
