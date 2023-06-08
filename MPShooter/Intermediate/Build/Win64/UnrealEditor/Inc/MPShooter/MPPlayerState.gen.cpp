// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/PlayerState/MPPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPPlayerState() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPPlayerState_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPCharacter_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPPlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMPPlayerState::execOnRep_Defeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Defeat();
		P_NATIVE_END;
	}
	void AMPPlayerState::StaticRegisterNativesAMPPlayerState()
	{
		UClass* Class = AMPPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Defeat", &AMPPlayerState::execOnRep_Defeat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMPPlayerState_OnRep_Defeat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPPlayerState_OnRep_Defeat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerState/MPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPPlayerState_OnRep_Defeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPPlayerState, nullptr, "OnRep_Defeat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPPlayerState_OnRep_Defeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPPlayerState_OnRep_Defeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPPlayerState_OnRep_Defeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPPlayerState_OnRep_Defeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMPPlayerState);
	UClass* Z_Construct_UClass_AMPPlayerState_NoRegister()
	{
		return AMPPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMPPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Defeat_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Defeat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMPPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMPPlayerState_OnRep_Defeat, "OnRep_Defeat" }, // 578126925
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/MPPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/MPPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/MPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerState, Character), Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/MPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerState, Controller), Z_Construct_UClass_AMPPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Defeat_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/MPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Defeat = { "Defeat", "OnRep_Defeat", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMPPlayerState, Defeat), METADATA_PARAMS(Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Defeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Defeat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPPlayerState_Statics::NewProp_Defeat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPPlayerState_Statics::ClassParams = {
		&AMPPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMPPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMPPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMPPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMPPlayerState()
	{
		if (!Z_Registration_Info_UClass_AMPPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPPlayerState.OuterSingleton, Z_Construct_UClass_AMPPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMPPlayerState.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AMPPlayerState>()
	{
		return AMPPlayerState::StaticClass();
	}

	void AMPPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Defeat(TEXT("Defeat"));

		const bool bIsValid = true
			&& Name_Defeat == ClassReps[(int32)ENetFields_Private::Defeat].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMPPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPPlayerState);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMPPlayerState, AMPPlayerState::StaticClass, TEXT("AMPPlayerState"), &Z_Registration_Info_UClass_AMPPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPPlayerState), 3787129737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_3744515135(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_PlayerState_MPPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
