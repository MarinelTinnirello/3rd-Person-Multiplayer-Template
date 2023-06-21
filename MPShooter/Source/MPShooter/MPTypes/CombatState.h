#pragma once

#pragma region Combat State
UENUM(BlueprintType)
enum class ECombatState : uint8
{
	ECS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	ECS_Equipping UMETA(DisplayName = "Equipping"),
	ECS_Reloading UMETA(DisplayName = "Reloading"),
	ECS_Throwing UMETA(DisplayName = "Throwing"),
	ECS_SwappingWeapons UMETA(DisplayName = "Swapping Weapons"),

	ECS_MAX UMETA(DisplayName = "DefaultMAX")
};
#pragma endregion

#pragma region Character Combat State
UENUM(BlueprintType)
enum class ECharacterCombatState : uint8
{
	ECCS_Unequipped UMETA(DisplayName = "Unequipped"),
	ECCS_EquippedOneHandedWeapon UMETA(DisplayName = "Equipped One-Handed Weapon"),
	ECCS_EquippedTwoHandedWeapon UMETA(DisplayName = "Equipped Two-Handed Weapon"),
	ECCS_EquippedDualWieldedWeapon UMETA(DisplayName = "Equipped Dual-Wielded Weapon"),

	ECCS_MAX UMETA(DisplayName = "DefaultMAX")
};
#pragma endregion
