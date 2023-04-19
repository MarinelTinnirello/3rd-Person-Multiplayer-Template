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
	//
	// Health
	//
	UPROPERTY()
	class UCharacterOverlay* CharacterOverlay;
	UPROPERTY(EditAnywhere, Category = "Character Stats", meta = (ToolTip = "Character overlay to be displayed."))
	TSubclassOf<class UUserWidget> CharacterOverlayClass;
	UPROPERTY()
	class UAnnoucement* Annoucement;
	UPROPERTY(EditAnywhere, Category = "Annoucements", meta = (ToolTip = "Annoucement overlay to be displayed."))
	TSubclassOf<class UUserWidget> AnnoucementClass;
	UPROPERTY()
	class USniperScopeOverlay* SniperScopeOverlay;
	UPROPERTY(EditAnywhere, Category = "Weapon", meta = (ToolTip = "Sniper scope overlay to be displayed."))
	TSubclassOf<class UUserWidget> SniperScopeOverlayClass;

	void AddCharacterOverlay();
	void AddAnnoucement();
	void AddSniperScopeOverlay();
	virtual void DrawHUD() override;

protected:
	virtual void BeginPlay() override;

private:
	FHUDPackage HUDPackage;
	UPROPERTY(EditAnywhere, meta = (ToolTip = "Max amount the crosshairs should spread out."))
	float CrosshairsSpreadMax = 16.f;

	void DrawCrosshair(UTexture2D* Texture, FVector2D ViewportCenter, FVector2D Spread, FLinearColor CrosshairsColor);

public:
	FORCEINLINE void SetHUDPackage(const FHUDPackage& Package) { HUDPackage = Package; }

};
