// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputAction.h"
#include "MPInputConfigData.generated.h"

UCLASS()
class MPSHOOTER_API UMPInputConfigData : public UDataAsset
{
	GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputMove;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputLook;

};
