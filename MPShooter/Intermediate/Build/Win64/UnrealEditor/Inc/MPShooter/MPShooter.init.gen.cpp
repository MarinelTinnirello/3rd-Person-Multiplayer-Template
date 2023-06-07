// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPShooter_init() {}
	MPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature();
	MPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_MPShooter_OnLeftGame__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MPShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MPShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_MPShooter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MPShooter_HighPingDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MPShooter_OnLeftGame__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MPShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAA289BDD,
				0xE4DA9412,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MPShooter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MPShooter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MPShooter(Z_Construct_UPackage__Script_MPShooter, TEXT("/Script/MPShooter"), Z_Registration_Info_UPackage__Script_MPShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAA289BDD, 0xE4DA9412));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
