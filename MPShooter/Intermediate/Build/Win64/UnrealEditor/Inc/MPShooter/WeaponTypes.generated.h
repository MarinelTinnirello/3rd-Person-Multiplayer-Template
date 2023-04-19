// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MPSHOOTER_WeaponTypes_generated_h
#error "WeaponTypes.generated.h already included, missing '#pragma once' in WeaponTypes.h"
#endif
#define MPSHOOTER_WeaponTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_Item_Weapon_WeaponTypes_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::EWT_Unequipped) \
	op(EWeaponType::EWT_AssaultRifle) \
	op(EWeaponType::EWT_RocketLauncher) \
	op(EWeaponType::EWT_Pistol) \
	op(EWeaponType::EWT_SubmachineGun) \
	op(EWeaponType::EWT_Shotgun) \
	op(EWeaponType::EWT_SniperRifle) \
	op(EWeaponType::EWT_GrenadeLauncher) \
	op(EWeaponType::EWT_Flamethrower) \
	op(EWeaponType::EWT_LightningGun) 

enum class EWeaponType : uint8;
template<> MPSHOOTER_API UEnum* StaticEnum<EWeaponType>();

#define FOREACH_ENUM_ETHROWABLEWEAPONTYPE(op) \
	op(EThrowableWeaponType::ETWT_Unequipped) \
	op(EThrowableWeaponType::ETWT_Grenade) \
	op(EThrowableWeaponType::ETWT_SmokeBomb) \
	op(EThrowableWeaponType::ETWT_StickyBomb) \
	op(EThrowableWeaponType::ETWT_LightningBomb) \
	op(EThrowableWeaponType::ETWT_Kunai) \
	op(EThrowableWeaponType::ETWT_Boomerang) \
	op(EThrowableWeaponType::ETWT_Rock) 

enum class EThrowableWeaponType : uint8;
template<> MPSHOOTER_API UEnum* StaticEnum<EThrowableWeaponType>();

#define FOREACH_ENUM_EFIRETYPE(op) \
	op(EFireType::EFT_Projectile) \
	op(EFireType::EFT_HitScan) \
	op(EFireType::EFT_Shotgun) \
	op(EFireType::EFT_Melee) 

enum class EFireType : uint8;
template<> MPSHOOTER_API UEnum* StaticEnum<EFireType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
