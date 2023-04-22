// Fill out your copyright notice in the Description page of Project Settings.


#include "MPHUD.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/HorizontalBox.h"
#include "Components/CanvasPanelSlot.h"
#include "CharacterOverlay.h"
#include "Annoucement.h"
#include "EliminateAnnouncement.h"
#include "SniperScopeOverlay.h"
#include "PlayerChatBox.h"

void AMPHUD::BeginPlay()
{
	Super::BeginPlay();
}

void AMPHUD::AddCharacterOverlay()
{
	OwningPlayer = OwningPlayer == nullptr ? GetOwningPlayerController() : OwningPlayer;
	if (OwningPlayer && CharacterOverlayClass)
	{
		CharacterOverlay = CreateWidget<UCharacterOverlay>(OwningPlayer, CharacterOverlayClass);
		CharacterOverlay->AddToViewport();
	}
}

void AMPHUD::AddAnnoucement()
{
	OwningPlayer = OwningPlayer == nullptr ? GetOwningPlayerController() : OwningPlayer;
	if (OwningPlayer && AnnoucementClass)
	{
		Annoucement = CreateWidget<UAnnoucement>(OwningPlayer, AnnoucementClass);
		Annoucement->AddToViewport();
	}
}

void AMPHUD::AddEliminateAnnouncement(FString Attacker, FString Victim)
{
	OwningPlayer = OwningPlayer == nullptr ? GetOwningPlayerController() : OwningPlayer;
	if (OwningPlayer && EliminateAnnouncementClass)
	{
		UEliminateAnnouncement* EliminateAnnouncementWidget = CreateWidget<UEliminateAnnouncement>(OwningPlayer, EliminateAnnouncementClass);
		if (EliminateAnnouncementWidget)
		{
			EliminateAnnouncementWidget->SetEliminateAnnouncementText(Attacker, Victim);
			EliminateAnnouncementWidget->AddToViewport();

			for (UEliminateAnnouncement* Msg : EliminateMessages)
			{
				if (Msg && Msg->AnnouncementBox)
				{
					UCanvasPanelSlot* CanvasSlot = UWidgetLayoutLibrary::SlotAsCanvasSlot(Msg->AnnouncementBox);
					if (CanvasSlot)
					{
						FVector2D Position = CanvasSlot->GetPosition();
						FVector2D NewPosition(
							CanvasSlot->GetPosition().X,
							Position.Y - CanvasSlot->GetSize().Y
						);
						CanvasSlot->SetPosition(NewPosition);
					}
				}
			}

			EliminateMessages.Add(EliminateAnnouncementWidget);

			FTimerHandle EliminateMsgTimer;
			FTimerDelegate EliminateMsgDelegate;
			EliminateMsgDelegate.BindUFunction(this, FName("EliminateAnnouncementTimerFinished"), EliminateAnnouncementWidget);
			GetWorldTimerManager().SetTimer(
				EliminateMsgTimer,
				EliminateMsgDelegate,
				EliminateAnnouncementTime,
				false
			);
		}
	}
}

void AMPHUD::EliminateAnnouncementTimerFinished(UEliminateAnnouncement* MsgToRemove)
{
	if (MsgToRemove)
	{
		MsgToRemove->RemoveFromParent();
	}
}

void AMPHUD::AddSniperScopeOverlay()
{
	OwningPlayer = OwningPlayer == nullptr ? GetOwningPlayerController() : OwningPlayer;
	if (OwningPlayer && SniperScopeOverlayClass)
	{
		SniperScopeOverlay = CreateWidget<USniperScopeOverlay>(OwningPlayer, SniperScopeOverlayClass);
		SniperScopeOverlay->AddToViewport();
	}
}

void AMPHUD::AddChatMessage(const FString& SenderName, const FString& Msg)
{
	OwningPlayer = OwningPlayer == nullptr ? GetOwningPlayerController() : OwningPlayer;
	if (OwningPlayer && PlayerChatBoxClass)
	{
		UPlayerChatBox* PlayerChatBoxWidget = CreateWidget<UPlayerChatBox>(OwningPlayer, PlayerChatBoxClass);
		if (PlayerChatBoxWidget)
		{
			PlayerChatBoxWidget->SetPlayerChatText(SenderName, Msg);
			PlayerChatBoxWidget->AddToViewport();

			for (UPlayerChatBox* Msg : ChatMessages)
			{
				if (Msg && Msg->AnnouncementBox)
				{
					UCanvasPanelSlot* CanvasSlot = UWidgetLayoutLibrary::SlotAsCanvasSlot(Msg->AnnouncementBox);
					if (CanvasSlot)
					{
						FVector2D Position = CanvasSlot->GetPosition();
						FVector2D NewPosition(
							CanvasSlot->GetPosition().X,
							Position.Y - CanvasSlot->GetSize().Y
						);
						CanvasSlot->SetPosition(NewPosition);
					}
				}
			}

			ChatMessages.Add(PlayerChatBoxWidget);
		}
	}
}

void AMPHUD::DrawHUD()
{
	Super::DrawHUD();

	FVector2D ViewportSize;

	if (GEngine)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
		const FVector2D ViewportCenter(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
		float SpreadScaled = CrosshairsSpreadMax * HUDPackage.CrosshairsSpread;

		if (HUDPackage.CrosshairsCenter)
		{
			FVector2D Spread(0.f, 0.f);
			DrawCrosshair(HUDPackage.CrosshairsCenter, ViewportCenter, Spread, HUDPackage.CrosshairsColor);
		}
		if (HUDPackage.CrosshairsRight)
		{
			FVector2D Spread(SpreadScaled, 0.f);
			DrawCrosshair(HUDPackage.CrosshairsRight, ViewportCenter, Spread, HUDPackage.CrosshairsColor);
		}
		if (HUDPackage.CrosshairsLeft)
		{
			FVector2D Spread(-SpreadScaled, 0.f);
			DrawCrosshair(HUDPackage.CrosshairsLeft, ViewportCenter, Spread, HUDPackage.CrosshairsColor);
		}
		if (HUDPackage.CrosshairsTop)
		{
			FVector2D Spread(0.f, -SpreadScaled);
			DrawCrosshair(HUDPackage.CrosshairsTop, ViewportCenter, Spread, HUDPackage.CrosshairsColor);
		}
		if (HUDPackage.CrosshairsBottom)
		{
			FVector2D Spread(0.f, SpreadScaled);
			DrawCrosshair(HUDPackage.CrosshairsBottom, ViewportCenter, Spread, HUDPackage.CrosshairsColor);
		}
	}
}

void AMPHUD::DrawCrosshair(UTexture2D* Texture, FVector2D ViewportCenter, FVector2D Spread, FLinearColor CrosshairsColor)
{
	const float TextureWidth = Texture->GetSizeX();
	const float TextureHeight = Texture->GetSizeY();
	const FVector2D TextureDrawPoint(
		ViewportCenter.X - (TextureWidth / 2.f) + Spread.X,
		ViewportCenter.Y - (TextureHeight / 2.f) + Spread.Y
	);
	DrawTexture(
		Texture,
		TextureDrawPoint.X,
		TextureDrawPoint.Y,
		TextureWidth,
		TextureHeight,
		0.f,
		0.f,
		1.f,
		1.f,
		CrosshairsColor
	);
}

