// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MPSHOOTER_HitActor_generated_h
#error "HitActor.generated.h already included, missing '#pragma once' in HitActor.h"
#endif
#define MPSHOOTER_HitActor_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_Item_Weapon_HitActor_h


#define FOREACH_ENUM_EHITACTOR(op) \
	op(EHitActor::EHA_None) \
	op(EHitActor::EHA_Character) \
	op(EHitActor::EHA_Environment) 

enum class EHitActor : uint8;
template<> MPSHOOTER_API UEnum* StaticEnum<EHitActor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
