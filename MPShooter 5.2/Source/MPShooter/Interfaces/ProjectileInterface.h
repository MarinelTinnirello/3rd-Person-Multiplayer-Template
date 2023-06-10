// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ProjectileInterface.generated.h"

UINTERFACE(MinimalAPI)
class UProjectileInterface : public UInterface
{
	GENERATED_BODY()
};

class MPSHOOTER_API IProjectileInterface
{
	GENERATED_BODY()

public:
	virtual float GetProjectileRadius(class AWeapon* EquippedWeapon);

};
