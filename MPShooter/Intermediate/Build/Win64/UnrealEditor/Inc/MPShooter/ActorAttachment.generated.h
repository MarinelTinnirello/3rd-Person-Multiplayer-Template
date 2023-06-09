// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MPSHOOTER_ActorAttachment_generated_h
#error "ActorAttachment.generated.h already included, missing '#pragma once' in ActorAttachment.h"
#endif
#define MPSHOOTER_ActorAttachment_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MPShooter_Source_MPShooter_MPTypes_ActorAttachment_h


#define FOREACH_ENUM_EWEAPONATTACHMENTSOCKET(op) \
	op(EWeaponAttachmentSocket::EWAS_None) \
	op(EWeaponAttachmentSocket::EWAS_RightHand) \
	op(EWeaponAttachmentSocket::EWAS_LeftHand) \
	op(EWeaponAttachmentSocket::EWAS_BackSpine) \
	op(EWeaponAttachmentSocket::EWAS_Hips) \
	op(EWeaponAttachmentSocket::EWAS_Throwable) 

enum class EWeaponAttachmentSocket : uint8;
template<> MPSHOOTER_API UEnum* StaticEnum<EWeaponAttachmentSocket>();

#define FOREACH_ENUM_EWEAPONLATERALITY(op) \
	op(EWeaponLaterality::EWL_None) \
	op(EWeaponLaterality::EWL_SingleHand) \
	op(EWeaponLaterality::EWL_DoubleHand) \
	op(EWeaponLaterality::EWL_DualWield) 

enum class EWeaponLaterality : uint8;
template<> MPSHOOTER_API UEnum* StaticEnum<EWeaponLaterality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
