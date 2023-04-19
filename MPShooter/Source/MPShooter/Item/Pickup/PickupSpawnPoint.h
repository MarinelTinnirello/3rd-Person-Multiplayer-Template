// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupSpawnPoint.generated.h"

UCLASS()
class MPSHOOTER_API APickupSpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	APickupSpawnPoint();
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Pickup Spawn Point Properties", meta = (ToolTip = "Classes of Pickup able to be spawned."))
	TArray<TSubclassOf<class APickup>> PickupClasses;
	UPROPERTY()
	APickup* SpawnedPickup;

	virtual void BeginPlay() override;

	void SpawnPickup();
	UFUNCTION()
	void StartSpawnPickupTimer(AActor* DestroyedActor);
	void SpawnPickupTimerFinished();

private:
	FTimerHandle SpawnPickupTimer;
	UPROPERTY(EditAnywhere, Category = "Pickup Spawn Point Properties", meta = (ToolTip = "Minimum amount of time a pickup it takes for a pickup to spawn."))
	float SpawnPickupTimeMin;
	UPROPERTY(EditAnywhere, Category = "Pickup Spawn Point Properties", meta = (ToolTip = "Maximum amount of time a pickup it takes for a pickup to spawn."))
	float SpawnPickupTimeMax;

};
