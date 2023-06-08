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
	//
	// Buttons
	//
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* CenterButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* TopButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* TopLeftButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* TopRightButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* LeftButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* RightButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* BottomLeftButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* BottomRightButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* BottomButton;

	//
	// Images
	//
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* CenterImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* TopImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* TopLeftImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* TopRightImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* LeftImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* RightImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* BottomLeftImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* BottomRightImage;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* BottomImage;

	//
	// Animations
	//
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* Appear;

	//
	// Time Dilation
	//
	UPROPERTY(EditAnywhere, Category = "Time Dilation", meta = (ToolTip = "Check if time should slow down while the screen is up."))
	bool bUseSlowDown = true;
	UPROPERTY(EditAnywhere, Category = "Time Dilation", meta = (ToolTip = "Amount that time slows down while the screen is up."))
	float SlowDownTime = 0.35f;

	//
	// Coloration
	//
	UPROPERTY(EditAnywhere, Category = "Coloration", meta = (ToolTip = "Color of an image when hovered over."))
	FColor ImageHoverColor;

	UFUNCTION(BlueprintCallable)
	void ChangeColorOnHover(bool bIsHovered, UButton* button, UImage* image);
	
};
