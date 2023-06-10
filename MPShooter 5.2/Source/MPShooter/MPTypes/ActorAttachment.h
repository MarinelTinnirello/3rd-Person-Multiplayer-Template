#pragma once

UENUM(BlueprintType)
enum class EWeaponAttachmentSocket : uint8
{
	EWAS_None UMETA(DisplayName = "None"),
	EWAS_RightHand UMETA(DisplayName = "Right Hand"),
	EWAS_LeftHand UMETA(DisplayName = "Left Hand"),
	EWAS_BackSpine UMETA(DisplayName = "Back Spine"),
	EWAS_Hips UMETA(DisplayName = "Hips"),
	EWAS_Throwable UMETA(DisplayName = "Throwable"),

	EWAS_MAX UMETA(DisplayName = "DefaultMAX")
};

UENUM(BlueprintType)
enum class EWeaponLaterality : uint8
{
	EWL_None UMETA(DisplayName = "None"),
	EWL_SingleHand UMETA(DisplayName = "Single Handed"),
	EWL_DoubleHand UMETA(DisplayName = "Double Handed"),
	EWL_DualWield UMETA(DisplayName = "Dual Wielded"),

	EWL_MAX UMETA(DisplayName = "DefaultMAX")
};