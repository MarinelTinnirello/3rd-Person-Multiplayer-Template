// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MPHUD.generated.h"

USTRUCT(BlueprintType)
struct FHUDPackage
{
	GENERATED_BODY()

public:
	class UTexture2D* CrosshairsCenter;
	UTexture2D* CrosshairsRight;
	UTexture2D* CrosshairsLeft;
	UTexture2D* CrosshairsTop;
	UTexture2D* CrosshairsBottom;
	float CrosshairsSpread;
	FLinearColor CrosshairsColor;
};

UCLASS()
class MPSHOOTER_API AMPHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	class UCharacterOverlay* CharacterOverlay;
	UPROPERTY(EditAnywhere, Category = "Character Stats", meta = (ToolTip = "Character overlay to be displayed."))
	TSubclassOf<class UUserWidget> CharacterOverlayClass;
	UPROPERTY()
	class UAnnoucement* Annoucement;
	UPROPERTY(EditAnywhere, Category = "Annoucements", meta = (ToolTip = "Annoucement overlay to be displayed."))
	TSubclassOf<class UUserWidget> AnnoucementClass;
	UPROPERTY()
	class UPlayerChatBox* PlayerChatBox;
	UPROPERTY(EditAnywhere, Category = "Announcements - Chat Box", meta = (ToolTip = "Player chat box during matches."))
	TSubclassOf<class UPlayerChatBox> PlayerChatBoxClass;
	UPROPERTY()
	class UWeaponWheelWidget* WeaponWheel;
	UPROPERTY(EditAnywhere, Category = "Weapon", meta = (ToolTip = "Weapon wheel to be displayed."))
	TSubclassOf<class UUserWidget> WeaponWheelClass;
	UPROPERTY()
	class USniperScopeOverlay* SniperScopeOverlay;
	UPROPERTY(EditAnywhere, Category = "Weapon", meta = (ToolTip = "Sniper scope overlay to be displayed."))
	TSubclassOf<class UUserWidget> SniperScopeOverlayClass;

	virtual void DrawHUD() override;

	void AddCharacterOverlay();
	void AddAnnoucement();
	void AddEliminateAnnouncement(FString Attacker, FString Victim);
	void AddWeaponWheel();
	void AddSniperScopeOverlay();
	void AddChatBox();
	//void AddChatMessage(const FString& SenderName, const FString& Msg);

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	class APlayerController* OwningPlayer;

	FHUDPackage HUDPackage;

	//
	// Crosshairs
	//
	UPROPERTY(EditAnywhere, Category = "Weapon", meta = (ToolTip = "Max amount the crosshairs should spread out."))
	float CrosshairsSpreadMax = 16.f;

	void DrawCrosshair(UTexture2D* Texture, FVector2D ViewportCenter, FVector2D Spread, FLinearColor CrosshairsColor);

	//
	// Elim Announcements
	//
	UPROPERTY(EditAnywhere, Category = "Announcements - Eliminate", meta = (ToolTip = "Annoucement overlay when a character is eliminated."))
	TSubclassOf<class UEliminateAnnouncement> EliminateAnnouncementClass;
	UPROPERTY(EditAnywhere, Category = "Announcements - Eliminate", meta = (ToolTip = "Time until eliminated message is deleted."))
	float EliminateAnnouncementTime = 2.5f;
	UPROPERTY()
	TArray<UEliminateAnnouncement*> EliminateMessages;

	UFUNCTION()
	void EliminateAnnouncementTimerFinished(UEliminateAnnouncement* MsgToRemove);

	//
	// Player Chat
	//
	/*UPROPERTY(EditAnywhere, Category = "Announcements - Chat Box", meta = (ToolTip = "Time until chat message is deleted."))
	float ChatMessageTime = 10.f;
	UPROPERTY()
	TArray<UPlayerChatBox*> ChatMessages;

	UFUNCTION()
	void ChatMessageTimerFinished(UPlayerChatBox* MsgToRemove);*/

public:
	FORCEINLINE void SetHUDPackage(const FHUDPackage& Package) { HUDPackage = Package; }

};
