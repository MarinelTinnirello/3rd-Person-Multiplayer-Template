// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "SpiralMovementComponent.generated.h"

UCLASS()
class MPSHOOTER_API USpiralMovementComponent : public UProjectileMovementComponent
{
	GENERATED_BODY()
	
protected:
	#pragma region Engine Overrides
	virtual FVector ComputeAcceleration(const FVector& InVelocity, float DeltaTime) const override;
	#pragma endregion

private:
	#pragma region Spiral Movement Properties
	UPROPERTY(EditAnywhere, Category = "Spiral Movement Properties", meta = (ToolTip = "Checks whether pivot axis is enabled."))
	bool bEnablePivotAxis;
	FVector PivotAxisStart;
	FVector PivotAxisDirection;
	UPROPERTY(EditAnywhere, Category = "Spiral Movement Properties", meta = (ToolTip = "Offset of the projectile around the pivot access."))
	FVector PivotAxisOffset;
	UPROPERTY(EditAnywhere, Category = "Spiral Movement Properties", meta = (ToolTip = "Rate of rotation for the projectile around the pivot access."))
	float PivotAxisRotationRate;
	#pragma endregion

public:
	#pragma region Getters & Setters
	FORCEINLINE bool GetEnablePivotAxis() const { return bEnablePivotAxis; }
	void SetEnablePivotAxis(bool bEnable) { bEnablePivotAxis = bEnable; }
	FORCEINLINE FVector GetPivotAxisStart() const { return PivotAxisStart; }
	void SetPivotAxisStart(FVector Start) { PivotAxisStart = Start; }
	FORCEINLINE FVector GetPivotAxisDirection() const { return PivotAxisDirection; }
	void SetPivotAxisDirection(FVector Direction) { PivotAxisDirection = Direction; }
	FORCEINLINE FVector GetPivotAxisOffset() const { return PivotAxisOffset; }
	void SetPivotAxisOffset(FVector Offset) { PivotAxisOffset = Offset; }
	#pragma endregion

};
