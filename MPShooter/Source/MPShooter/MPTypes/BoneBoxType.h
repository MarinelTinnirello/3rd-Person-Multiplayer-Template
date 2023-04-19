#pragma once

UENUM(BlueprintType)
enum class EBoneBoxType : uint8
{
	EBBT_Head UMETA(DisplayName = "Head"),
	EBBT_Pelvis UMETA(DisplayName = "Pelvis"),
	EBBT_Spine02 UMETA(DisplayName = "Spine_02"),
	EBBT_Spine03 UMETA(DisplayName = "Spine_03"),
	EBBT_UpperarmL UMETA(DisplayName = "Upperarm_L"),
	EBBT_UpperarmR UMETA(DisplayName = "Upperarm_R"),
	EBBT_LowerarmL UMETA(DisplayName = "Lowerarm_L"),
	EBBT_LowerarmR UMETA(DisplayName = "Lowerarm_R"),
	EBBT_HandL UMETA(DisplayName = "Hand_L"),
	EBBT_HandR UMETA(DisplayName = "Hand_R"),
	EBBT_ThighL UMETA(DisplayName = "Thigh_L"),
	EBBT_ThighR UMETA(DisplayName = "Thigh_R"),
	EBBT_CalfL UMETA(DisplayName = "Calf_L"),
	EBBT_CalfR UMETA(DisplayName = "Calf_R"),
	EBBT_FootL UMETA(DisplayName = "Foot_L"),
	EBBT_FootR UMETA(DisplayName = "Foot_R"),
	EBBT_Backpack UMETA(DisplayName = "Backpack"),
	EBBT_Blanket UMETA(DisplayName = "Blanket"),

	EBBT_MAX UMETA(DisplayName = "DefaultMAX")
};