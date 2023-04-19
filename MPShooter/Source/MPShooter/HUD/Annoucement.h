// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Annoucement.generated.h"

UCLASS()
class MPSHOOTER_API UAnnoucement : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* WarmupTimeText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* AnnoucementText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* InfoText;
};
