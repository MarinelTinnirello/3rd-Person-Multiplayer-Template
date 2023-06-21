// Fill out your copyright notice in the Description page of Project Settings.


#include "MPAnimInstance.h"
#include "MPCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "MPShooter/Item/Weapon/Weapon.h"
#include "MPShooter/MPTypes/CombatState.h"
#include "MPShooter/MPTypes/WeaponTypes.h"
#include "MPShooter/MPTypes/ActorAttachment.h"

#pragma region Engine Overrides
void UMPAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	MPCharacter = Cast<AMPCharacter>(TryGetPawnOwner());
}

void UMPAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (MPCharacter == nullptr)
	{
		MPCharacter = Cast<AMPCharacter>(TryGetPawnOwner());
	}

	if (MPCharacter == nullptr)
	{
		return;
	}

	FVector Velocity = MPCharacter->GetVelocity();
	Velocity.Z = 0.f;
	Spd = Velocity.Size();

	bIsInAir = MPCharacter->GetCharacterMovement()->IsFalling();
	bIsAccelerating = MPCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f ? true : false;
	bIsCrouched = MPCharacter->bIsCrouched;
	bEliminated = MPCharacter->IsEliminated();

	bWeaponEquipped = MPCharacter->IsWeaponEquipped();
	bWeaponUnequipped = MPCharacter->IsWeaponUnequipped();
	EquippedWeapon = MPCharacter->GetEquippedWeapon();
	bAiming = MPCharacter->IsAiming();
	TurningInPlace = MPCharacter->GetTurningInPlace();
	bRotateRootBone = MPCharacter->ShouldRotateRootBone();
	CharacterCombatState = MPCharacter->GetCharacterCombatState();

	// Offset for strafing
	FRotator AimRot = MPCharacter->GetBaseAimRotation();
	FRotator MoveRot = UKismetMathLibrary::MakeRotFromX(MPCharacter->GetVelocity());
	FRotator DeltaRot = UKismetMathLibrary::NormalizedDeltaRotator(MoveRot, AimRot);
	DeltaRotation = FMath::RInterpTo(DeltaRotation, DeltaRot, DeltaTime, 6.f);
	YawOffset = DeltaRotation.Yaw;

	CharacterRotationPrevFrame = CharacterRotation;
	CharacterRotation = MPCharacter->GetActorRotation();
	const FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(CharacterRotation, CharacterRotationPrevFrame);
	const float Target = Delta.Yaw / DeltaTime;
	const float Interp = FMath::FInterpTo(Lean, Target, DeltaTime, 6.f);
	Lean = FMath::Clamp(Interp, -90.f, 90.f);

	AO_Yaw = MPCharacter->GetAO_Yaw();
	AO_Pitch = MPCharacter->GetAO_Pitch();

	// Transforms positions of hands, based on the weapon and its sockets
	if (bWeaponEquipped && EquippedWeapon && EquippedWeapon->GetItemMesh() && MPCharacter->GetMesh())
	{
		SecondaryHandTransform = EquippedWeapon->GetItemMesh()->GetSocketTransform(SecondaryHandSocket, ERelativeTransformSpace::RTS_World);
		FVector OutPosition;
		FRotator OutRotation;
		MPCharacter->GetMesh()->TransformToBoneSpace(EquippedHandBone, SecondaryHandTransform.GetLocation(), FRotator::ZeroRotator, OutPosition, OutRotation);
		SecondaryHandTransform.SetLocation(OutPosition);
		SecondaryHandTransform.SetRotation(FQuat(OutRotation));

		if (MPCharacter->IsLocallyControlled())
		{
			bLocallyControlled = true;
			FTransform EquippedHandTransform = EquippedWeapon->GetItemMesh()->GetSocketTransform(EquippedHandBone, ERelativeTransformSpace::RTS_World);
			FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(EquippedHandTransform.GetLocation(), EquippedHandTransform.GetLocation() + (EquippedHandTransform.GetLocation() - MPCharacter->GetHitTarget()));
			EquippedHandRotation = FMath::RInterpConstantTo(EquippedHandRotation, LookAtRotation, DeltaTime, 30.f);
		}
	}

	bUseFABRIK = MPCharacter->GetCombatState() == ECombatState::ECS_Unoccupied;
	bool bFABRIKOverrideCombatState = MPCharacter->IsLocallyControlled() &&
		MPCharacter->GetCombatState() != ECombatState::ECS_Throwing &&
		MPCharacter->bFinishedSwapping;
	bool bFABRIKOverrideWeaponState = EquippedWeapon &&
		(CharacterCombatState == ECharacterCombatState::ECCS_Unequipped ||
		CharacterCombatState != ECharacterCombatState::ECCS_EquippedTwoHandedWeapon);
	bool bFABRIKOverride = bFABRIKOverrideCombatState || bFABRIKOverrideWeaponState;
	if (bFABRIKOverride)
	{
		bUseFABRIK = !MPCharacter->IsLocallyReloading();
	}

	bUseAimOffsets = MPCharacter->GetCombatState() == ECombatState::ECS_Unoccupied && !MPCharacter->GetDisableGameplay();
	bTransformEquippedHand = MPCharacter->GetCombatState() == ECombatState::ECS_Unoccupied && !MPCharacter->GetDisableGameplay();
}
#pragma endregion
