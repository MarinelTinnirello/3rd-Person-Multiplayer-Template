// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChatbox.h"
#include "Components/TextBlock.h"
#include "Components/EditableText.h"
#include "Components/ScrollBox.h"
#include "MPShooter/PlayerController/MPPlayerController.h"
#include "MPShooter/PlayerState/MPPlayerState.h"

void UPlayerChatBox::ToggleChatBox()
{
	AMPPlayerController* MPPlayerController = Cast<AMPPlayerController>(GetOwningPlayer());
	if (MPPlayerController && ChatTextBox && AnnouncementBox)
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
			AnnouncementBox->SetVisibility(ESlateVisibility::Collapsed);
			MPPlayerController->SetInputMode(FInputModeGameOnly());
			bChatBoxVisible = false;
		}
	}
}

void UPlayerChatBox::CommitChatTextBox(const FText& Text, ETextCommit::Type CommitMethod)
{
	AMPPlayerController* MPPlayerController = Cast<AMPPlayerController>(GetOwningPlayer());
	AMPPlayerState* MPPlayerState = Cast<AMPPlayerState>(GetOwningPlayerState());
	if (CommitMethod == ETextCommit::OnEnter)
	{
		if (MPPlayerController && MPPlayerState && ChatTextBox && AnnouncementBox)
		{
			MPPlayerController->ServerBroadcastChatMessage(MPPlayerState, Text.ToString());
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
		AnnouncementBox->SetVisibility(ESlateVisibility::Collapsed);
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
		AnnouncementText->SetAutoWrapText(true);
		AnnouncementBox->AddChild(AnnouncementText);
		AnnouncementBox->ScrollToEnd();
		AnnouncementBox->bAnimateWheelScrolling = true;
	}
}
