// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OverheadWidget.generated.h"

UCLASS()
class MPSHOOTER_API UOverheadWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* DisplayTxt;

	void SetDisplayTxt(FString TxtToDisplay);
	UFUNCTION(BlueprintCallable)
	void ShowPlayerNetRole(APawn* InPawn);
	UFUNCTION(BlueprintCallable)
	void ShowPlayerName(APawn* InPawn);

protected:
	//Replaced `OnLevelRemovedFromWorld()` as of 5.1, as this allows for more flexibility
	virtual void NativeDestruct() override;
};
