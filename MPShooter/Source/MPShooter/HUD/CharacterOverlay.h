// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterOverlay.generated.h"

UCLASS()
class MPSHOOTER_API UCharacterOverlay : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	class UProgressBar* HealthBar;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* HealthText;
	UPROPERTY(meta = (BindWidget))
	UProgressBar* ShieldBar;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ShieldText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ScoreAmountText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* DefeatAmountText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* EliminatedText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* WeaponAmmoAmountText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* CarriedAmmoAmountText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* CarriedThrowableAmountText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* WeaponTypeText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* MatchCountdownText;
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	class UWidgetAnimation* MatchEndWarning;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* HighPingText;
	UPROPERTY(meta = (BindWidget))
	class UImage* HighPingImage;
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* HighPingWarning;
};
