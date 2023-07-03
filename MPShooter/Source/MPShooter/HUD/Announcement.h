// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Announcement.generated.h"

#pragma region Forward Declarations
class UTextBlock;
#pragma endregion

UCLASS()
class MPSHOOTER_API UAnnouncement : public UUserWidget
{
	GENERATED_BODY()
	
public:
	#pragma region Texts
	UPROPERTY(meta = (BindWidget))
	UTextBlock* WarmupTimeText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* AnnouncementText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* InfoText;
	#pragma endregion

};
