// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChatBox.h"
#include "Components/TextBlock.h"
#include "Components/ScrollBox.h"
#include "Components/EditableTextBox.h"
#include "MPShooter/PlayerController/MPPlayerController.h"

void UPlayerChatBox::ToggleChatBox()
{
	AMPPlayerController* MPPlayerController = Cast<AMPPlayerController>(GetOwningPlayer());
	if (MPPlayerController)
	{
		if (!bChatBoxVisible)
		{
			ChatTextBox->OnTextCommitted.AddDynamic(this, &UPlayerChatBox::CommitChatTextBox);
			ChatTextBox->SetVisibility(ESlateVisibility::Visible);
			AnnouncementBox->SetVisibility(ESlateVisibility::Visible);
			ChatTextBox->SetFocus();
			MPPlayerController->SetInputMode(FInputModeGameAndUI());
			bChatBoxVisible = true;
		}
		else
		{
			ChatTextBox->OnTextCommitted.RemoveDynamic(this, &UPlayerChatBox::CommitChatTextBox);
			ChatTextBox->SetVisibility(ESlateVisibility::Collapsed);
			MPPlayerController->SetInputMode(FInputModeGameOnly());
			bChatBoxVisible = false;
		}
	}
}

void UPlayerChatBox::CommitChatTextBox(const FText& Text, ETextCommit::Type CommitMethod)
{
	AMPPlayerController* MPPlayerController = Cast<AMPPlayerController>(GetOwningPlayer());
	if (CommitMethod == ETextCommit::OnEnter)
	{
		if (MPPlayerController)
		{
			MPPlayerController->ServerBroadcastChatMessage(GetOwningPlayerState(), Text.ToString());
			ChatTextBox->SetVisibility(ESlateVisibility::Collapsed);
			AnnouncementBox->SetVisibility(ESlateVisibility::Collapsed);
			ChatTextBox->SetText(FText::FromString(""));
			MPPlayerController->SetInputMode(FInputModeGameOnly());
			bChatBoxVisible = false;
			ChatTextBox->OnTextCommitted.RemoveDynamic(this, &UPlayerChatBox::CommitChatTextBox);
		}
	}
	else
	{
		ChatTextBox->OnTextCommitted.RemoveDynamic(this, &UPlayerChatBox::CommitChatTextBox);
		ChatTextBox->SetVisibility(ESlateVisibility::Collapsed);
		MPPlayerController->SetInputMode(FInputModeGameOnly());
		bChatBoxVisible = false;
	}
}

void UPlayerChatBox::SetPlayerChatText(const FString& SenderName, const FString& Msg)
{
	FString ChatAnnouncementText = FString::Printf(TEXT("[ %s ] :  %s!"), *SenderName, *Msg);
	if (AnnouncementText)
	{
		AnnouncementText->SetText(FText::FromString(ChatAnnouncementText));
	}
}
