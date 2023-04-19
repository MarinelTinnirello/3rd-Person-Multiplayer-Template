// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SniperScopeOverlay.generated.h"

UCLASS()
class MPSHOOTER_API USniperScopeOverlay : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* ScopeZoomIn;

};
