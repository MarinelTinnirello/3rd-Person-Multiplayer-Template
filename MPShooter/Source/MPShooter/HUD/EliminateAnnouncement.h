// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EliminateAnnouncement.generated.h"

UCLASS()
class MPSHOOTER_API UEliminateAnnouncement : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	class UHorizontalBox* AnnouncementBox;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* AnnouncementText;
	UPROPERTY(EditAnywhere, Category = "Eliminate", meta = (ToolTip = "Text used to inicate who's been eliminated."))
	FString EliminateText = "eliminated by";

	void SetEliminateAnnouncementText(FString AttackerName, FString VictimName);
};
