// Fill out your copyright notice in the Description page of Project Settings.


#include "EliminateAnnouncement.h"
#include "Components/TextBlock.h"

void UEliminateAnnouncement::SetEliminateAnnouncementText(FString AttackerName, FString VictimName)
{
	FString EliminateAnnouncementText = FString::Printf(TEXT("%s %s %s!"), *AttackerName, EliminateText, *VictimName);
	if (AnnouncementText)
	{
		AnnouncementText->SetText(FText::FromString(EliminateAnnouncementText));
	}
}
