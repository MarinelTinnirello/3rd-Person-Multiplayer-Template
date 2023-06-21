// Fill out your copyright notice in the Description page of Project Settings.


#include "SpiralMovementComponent.h"

#pragma region Engine Overrides
FVector USpiralMovementComponent::ComputeAcceleration(const FVector& InVelocity, float DeltaTime) const
{
	FVector ComputeAcceleration = Super::ComputeAcceleration(InVelocity, DeltaTime);

	if (bEnablePivotAxis)
	{
		// Find location of the point P on the axis orthogonal to the 
		// current projectile location
		FVector CurrLocation = UpdatedComponent->GetComponentLocation();
		FVector Point = FMath::ClosestPointOnInfiniteLine(PivotAxisStart, PivotAxisStart + PivotAxisDirection * 5000.f, CurrLocation);

		FVector CurrentOffset = CurrLocation - Point;
		float CurrentLength = CurrentOffset.Size();
		CurrentOffset.Normalize();

		// This is the direction we need to go in
		FVector Tangent = FVector::CrossProduct(PivotAxisDirection, CurrentOffset);

		// Move back towards the centre if we're too far away, since variance in deltatime will result in drift
		FVector DriftCorrection = (PivotAxisOffset - CurrentLength) * CurrentOffset;

		ComputeAcceleration += (Tangent.GetSafeNormal() + DriftCorrection) * PivotAxisRotationRate;
	}

	return ComputeAcceleration;
}
#pragma endregion
