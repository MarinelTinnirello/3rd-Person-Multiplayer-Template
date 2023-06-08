// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/MPComponents/BuffComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuffComponent() {}
// Cross Module References
	MPSHOOTER_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_UBuffComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	MPSHOOTER_API UClass* Z_Construct_UClass_AMPCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBuffComponent::execMulticastJumpBuff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_JumpVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastJumpBuff_Implementation(Z_Param_JumpVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuffComponent::execMulticastSpeedBuff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CrouchSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSpeedBuff_Implementation(Z_Param_BaseSpeed,Z_Param_CrouchSpeed);
		P_NATIVE_END;
	}
	static FName NAME_UBuffComponent_MulticastJumpBuff = FName(TEXT("MulticastJumpBuff"));
	void UBuffComponent::MulticastJumpBuff(float JumpVelocity)
	{
		BuffComponent_eventMulticastJumpBuff_Parms Parms;
		Parms.JumpVelocity=JumpVelocity;
		ProcessEvent(FindFunctionChecked(NAME_UBuffComponent_MulticastJumpBuff),&Parms);
	}
	static FName NAME_UBuffComponent_MulticastSpeedBuff = FName(TEXT("MulticastSpeedBuff"));
	void UBuffComponent::MulticastSpeedBuff(float BaseSpeed, float CrouchSpeed)
	{
		BuffComponent_eventMulticastSpeedBuff_Parms Parms;
		Parms.BaseSpeed=BaseSpeed;
		Parms.CrouchSpeed=CrouchSpeed;
		ProcessEvent(FindFunctionChecked(NAME_UBuffComponent_MulticastSpeedBuff),&Parms);
	}
	void UBuffComponent::StaticRegisterNativesUBuffComponent()
	{
		UClass* Class = UBuffComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastJumpBuff", &UBuffComponent::execMulticastJumpBuff },
			{ "MulticastSpeedBuff", &UBuffComponent::execMulticastSpeedBuff },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::NewProp_JumpVelocity = { "JumpVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuffComponent_eventMulticastJumpBuff_Parms, JumpVelocity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::NewProp_JumpVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MPComponents/BuffComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuffComponent, nullptr, "MulticastJumpBuff", nullptr, nullptr, sizeof(BuffComponent_eventMulticastJumpBuff_Parms), Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuffComponent_eventMulticastSpeedBuff_Parms, BaseSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuffComponent_eventMulticastSpeedBuff_Parms, CrouchSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_BaseSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_CrouchSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MPComponents/BuffComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuffComponent, nullptr, "MulticastSpeedBuff", nullptr, nullptr, sizeof(BuffComponent_eventMulticastSpeedBuff_Parms), Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuffComponent);
	UClass* Z_Construct_UClass_UBuffComponent_NoRegister()
	{
		return UBuffComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBuffComponent_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuffComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBuffComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuffComponent_MulticastJumpBuff, "MulticastJumpBuff" }, // 519813515
		{ &Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff, "MulticastSpeedBuff" }, // 2750295916
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MPComponents/BuffComponent.h" },
		{ "ModuleRelativePath", "MPComponents/BuffComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "MPComponents/BuffComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBuffComponent, Character), Z_Construct_UClass_AMPCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuffComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuffComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuffComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuffComponent_Statics::ClassParams = {
		&UBuffComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBuffComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuffComponent()
	{
		if (!Z_Registration_Info_UClass_UBuffComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuffComponent.OuterSingleton, Z_Construct_UClass_UBuffComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuffComponent.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<UBuffComponent>()
	{
		return UBuffComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuffComponent);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuffComponent, UBuffComponent::StaticClass, TEXT("UBuffComponent"), &Z_Registration_Info_UClass_UBuffComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuffComponent), 4138513765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_2517102104(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_MPComponents_BuffComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
