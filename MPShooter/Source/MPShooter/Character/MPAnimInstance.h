// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MPShooter/MPTypes/TurningInPlace.h"

#include "MPAnimInstance.generated.h"

UCLASS()
class MPSHOOTER_API UMPAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

private:
	UPROPERTY(BlueprintReadOnly, Category = Character, meta = (AllowPrivateAccess = "true"))
	class AMPCharacter* MPCharacter;

	//
	// Character Properties
	//
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "A character's speed."))
	float Spd;
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Checks if a character is in the air."))
	bool bIsInAir;
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Checks if a character is accelerating."))
	bool bIsAccelerating;
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Checks if a character is crouched."))
	bool bIsCrouched;
	UPROPERTY(BlueprintReadOnly, Category = "Weapon", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Checks if a character has a weapon equipped."))
	bool bWeaponEquipped;
	class AWeapon* EquippedWeapon;
	UPROPERTY(BlueprintReadOnly, Category = "Weapon", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Checks if a character is aiming."))
	bool bAiming;
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Checks if a character is locally controlled."))
	bool bLocallyControlled;
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Checks if a character is eliminated."))
	bool bEliminated;

	//
	// Offsets for Movement
	//
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Offset on the Yaw axis during movement (walking, crouching, aiming, etc.)."))
	float YawOffset;
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "How much a character leans when walking with an equipped weapon."))
	float Lean;
	FRotator CharacterRotationPrevFrame;
	FRotator CharacterRotation;
	FRotator DeltaRotation;
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Offset on the Yaw axis while aiming."))
	float AO_Yaw;
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Offset on the Pitch axis when aiming."))
	float AO_Pitch;
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Determines the direction the character is turning (left, right, not turning)."))
	ETurningInPlace TurningInPlace;
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Checks if we should rotate the root bone, based on if the character is on if the locally owned player is a simulated proxy or not. This is for better performance in multiplayer so that we don't have to reliably update the animation every tick."))
	bool bRotateRootBone;
	UPROPERTY(BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Checks if we should use FABRIK for a particular animation."))
	bool bUseFABRIK;
	UPROPERTY(BlueprintReadOnly, Category = "Weapon", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Checks if we should use Aim Offset for a particular animation."))
	bool bUseAimOffsets;

	//
	// Sockets, Bones, & Component Transforms
	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bone", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Character's hand bone where the weapon is equipped. Most animation packs will be right handed, so the right hand is what you're likely to fill in."))
	FName EquippedHandBone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Weapon's socket where the weapon is attached to the character. Most animation packs will be right handed, so the right hand socket is what you're likely to fill in."))
	FName EquippedHandSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Weapon's socket where the character's free hand is attached. Most animation packs will be right handed, so the left hand socket is what you're likely to fill in."))
	FName SecondaryHandSocket;
	UPROPERTY(BlueprintReadOnly, Category = "Transform", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Character's hand bone transform to be used as the effector for FABRIK. This will be the transform of the SecondaryHandSocket."))
	FTransform SecondaryHandTransform;
	UPROPERTY(BlueprintReadOnly, Category = "Transform", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Character's hand bone rotation to be used as the replacement rotation on Transform (Modify) Bone. This will be the rotation of the EquippedHand."))
	FRotator EquippedHandRotation;
	UPROPERTY(BlueprintReadOnly, Category = "Transform", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Checks if we should transform the equipped hand for a particular animation."))
	bool bTransformEquippedHand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Hand socket where throwable weapons are placed."))
	FName ThrowableSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Spine or back socket where weapons not currently in use are placed."))
	FName BackSpineSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Right hip socket where weapons not currently in use are placed."))
	FName RightHipSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Left hip socket where weapons not currently in use are placed."))
	FName LefttHipSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bone", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Character's head bone where head shots are traced against."))
	FName HeadBone;

public:
	FORCEINLINE FName GetEquippedHandSocket() const { return EquippedHandSocket; }
	FORCEINLINE FName GetSecondaryHandSocket() const { return SecondaryHandSocket; }
	FORCEINLINE FName GetThrowableSocket() const { return ThrowableSocket; }
	FORCEINLINE FName GetBackSpineSocket() const { return BackSpineSocket; }
	FORCEINLINE FName GetRightHipSocket() const { return RightHipSocket; }
	FORCEINLINE FName GetLeftHipSocket() const { return LeftHipSocket; }
	FORCEINLINE FName GetHeadBone() const { return HeadBone; }

};
