// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Casing.generated.h"

UCLASS()
class MPSHOOTER_API ACasing : public AActor
{
	GENERATED_BODY()
	
public:	
	ACasing();

protected:
	virtual void BeginPlay() override;
	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	UPROPERTY(VisibleAnywhere, Category = "Casing Properties", meta = (ToolTip = "Mesh of a casing shell."))
	UStaticMeshComponent* CasingMesh;
	UPROPERTY(EditAnywhere, Category = "Casing Properties", meta = (ToolTip = "Impulse of a casing shell when it's ejected from a weapon."))
	float ShellEjectionImpulse = 10.f;
	UPROPERTY(EditAnywhere, Category = "Casing Properties", meta = (ToolTip = "Sound that plays when a shell hits an object."))
	class USoundCue* ShellSound;
	UPROPERTY(EditAnywhere, Category = "Casing Properties", meta = (ToolTip = "Lifetime of a casing shell when spawned."))
	float LifeSpan = 3.f;

};
