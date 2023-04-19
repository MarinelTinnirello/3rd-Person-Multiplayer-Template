#pragma once

#define TRACE_LENGTH 80000.f

#define CUSTOM_DEPTH_PURPLE 250
#define CUSTOM_DEPTH_BLUE 251
#define CUSTOM_DEPTH_TAN 252

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_Unequipped UMETA(DisplayName = "Unequipped"),
	EWT_AssaultRifle UMETA(DisplayName = "Assault Rifle"),
	EWT_RocketLauncher UMETA(DisplayName = "Rocket Launcher"),
	EWT_Pistol UMETA(DisplayName = "Pistol"),
	EWT_SubmachineGun UMETA(DisplayName = "Submachine Gun"),
	EWT_Shotgun UMETA(DisplayName = "Shotgun"),
	EWT_SniperRifle UMETA(DisplayName = "Sniper Rifle"),
	EWT_GrenadeLauncher UMETA(DisplayName = "Grenade Launcher"),

	EWT_MAX UMETA(DisplayName = "DefaultMax")
};

UENUM(BlueprintType)
enum class EThrowableWeaponType : uint8
{
	ETWT_Unequipped UMETA(DisplayName = "Unequipped"),
	ETWT_Grenade UMETA(DisplayName = "Grenade"),
	ETWT_SmokeBomb UMETA(DisplayName = "Smoke Bomb"),
	ETWT_StickyBomb UMETA(DisplayName = "Sticky Bomb"),
	ETWT_LightningBomb UMETA(DisplayName = "Lightning Bomb"),
	ETWT_Kunai UMETA(DisplayName = "Kunai"),
	ETWT_Boomerang UMETA(DisplayName = "Boomerang"),
	ETWT_Rock UMETA(DisplayName = "Rock"),

	ETWT_MAX UMETA(DisplayName = "DefaultMax")
};

UENUM(BlueprintType)
enum class EFireType : uint8
{
	EFT_Projectile UMETA(DisplayName = "Projectile Weapon"),
	EFT_HitScan UMETA(DisplayName = "Hit Scan Weapon"),
	EFT_Shotgun UMETA(DisplayName = "Shotgun Weapon"),
	EFT_Melee UMETA(DisplayName = "Melee Weapon"),

	EFT_MAX UMETA(DisplayName = "DefaultMAX")
};