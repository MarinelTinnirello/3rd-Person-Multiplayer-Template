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
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputJump;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputEquip;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputCrouch;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputFire;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputReload;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputAim;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputThrow;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputQuit;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputViewChatBox;
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UInputAction* InputWeaponWheel;

};
