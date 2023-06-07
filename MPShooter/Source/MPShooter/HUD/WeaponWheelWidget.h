// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WeaponWheelWidget.generated.h"

UCLASS()
class MPSHOOTER_API UWeaponWheelWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	class UButton* CenterButton;
	UPROPERTY(meta = (BindWidget))
	UButton* TopButton;
	UPROPERTY(meta = (BindWidget))
	UButton* TopLeftButton;
	UPROPERTY(meta = (BindWidget))
	UButton* TopRightButton;
	UPROPERTY(meta = (BindWidget))
	UButton* LeftButton;
	UPROPERTY(meta = (BindWidget))
	UButton* RightButton;
	UPROPERTY(meta = (BindWidget))
	UButton* BottomLeftButton;
	UPROPERTY(meta = (BindWidget))
	UButton* BottomRightButton;
	UPROPERTY(meta = (BindWidget))
	UButton* BottomButton;

	UPROPERTY(meta = (BindWidget))
	class UImage* CenterImage;
	UPROPERTY(meta = (BindWidget))
	UImage* TopImage;
	UPROPERTY(meta = (BindWidget))
	UImage* TopLeftImage;
	UPROPERTY(meta = (BindWidget))
	UImage* TopRightImage;
	UPROPERTY(meta = (BindWidget))
	UImage* LeftImage;
	UPROPERTY(meta = (BindWidget))
	UImage* RightImage;
	UPROPERTY(meta = (BindWidget))
	UImage* BottomLeftImage;
	UPROPERTY(meta = (BindWidget))
	UImage* BottomRightImage;
	UPROPERTY(meta = (BindWidget))
	UImage* BottomImage;
	
};
