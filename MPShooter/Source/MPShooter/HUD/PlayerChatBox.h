// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerChatBox.generated.h"

UCLASS()
class MPSHOOTER_API UPlayerChatBox : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	class UScrollBox* AnnouncementBox;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* AnnouncementText;
	UPROPERTY(meta = (BindWidget))
	class UEditableText* ChatTextBox;

	UPROPERTY()
	bool bChatBoxVisible = false;

	void ToggleChatBox();
	UFUNCTION()
	void CommitChatTextBox(const FText& Text, ETextCommit::Type CommitMethod);
	void SetPlayerChatText(const FString& SenderName, const FString& Msg);
};
