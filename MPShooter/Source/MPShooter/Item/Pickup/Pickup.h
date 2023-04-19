// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MPShooter/Item/Item.h"
#include "Pickup.generated.h"

UCLASS()
class MPSHOOTER_API APickup : public AItem
{
	GENERATED_BODY()
	
public:
	APickup();
	virtual void Tick(float DeltaTime) override;
	virtual void Destroyed() override;

protected:
	//
	// Pickup Properties
	//
	UPROPERTY(EditAnywhere, Category = "Pickup Properties", meta = (ToolTip = "Amount of ammo contained in the pickup."))
	float BaseTurnRate = 45.f;

	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Pickup Properties", meta = (ToolTip = "Static mesh for the pickup (if the item isn't a skeletal mesh)."))
	class UStaticMeshComponent* PickupMesh;
	UPROPERTY(VisibleAnywhere, Category = "Pickup Properties", meta = (ToolTip = "System component generated when health pickup is picked up and destroyed."))
	class UNiagaraComponent* PickupEffectComponent;
	UPROPERTY(EditAnywhere, Category = "Pickup Properties", meta = (ToolTip = "System generated when health pickup is picked up and destroyed."))
	class UNiagaraSystem* PickupEffect;

	FTimerHandle BindOverlapTimer;
	float BindOverlapTime = 0.25f;

	void BindOverlapTimerFinished();

public:


};
