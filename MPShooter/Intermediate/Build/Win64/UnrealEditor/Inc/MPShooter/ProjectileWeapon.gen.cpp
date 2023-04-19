// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPShooter/Item/Weapon/Ranged/ProjectileWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileWeapon() {}
// Cross Module References
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileWeaponDataTable();
	UPackage* Z_Construct_UPackage__Script_MPShooter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponProperties();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MPSHOOTER_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AProjectileWeapon_NoRegister();
	MPSHOOTER_API UClass* Z_Construct_UClass_AProjectileWeapon();
	MPSHOOTER_API UClass* Z_Construct_UClass_AWeapon();
	MPSHOOTER_API UClass* Z_Construct_UClass_UProjectileInterface_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FProjectileWeaponDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FProjectileWeaponDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProjectileWeaponDataTable;
class UScriptStruct* FProjectileWeaponDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectileWeaponDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProjectileWeaponDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileWeaponDataTable, Z_Construct_UPackage__Script_MPShooter(), TEXT("ProjectileWeaponDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_ProjectileWeaponDataTable.OuterSingleton;
}
template<> MPSHOOTER_API UScriptStruct* StaticStruct<FProjectileWeaponDataTable>()
{
	return FProjectileWeaponDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerSideRewindProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ServerSideRewindProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/ProjectileWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileWeaponDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_WeaponProperties_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/ProjectileWeapon.h" },
		{ "ToolTip", "General weapon properties of a weapon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_WeaponProperties = { "WeaponProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileWeaponDataTable, WeaponProperties), Z_Construct_UScriptStruct_FWeaponProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_WeaponProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_WeaponProperties_MetaData)) }; // 3665488460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/ProjectileWeapon.h" },
		{ "ToolTip", "Projectile for a weapon." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileWeaponDataTable, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_ServerSideRewindProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/ProjectileWeapon.h" },
		{ "ToolTip", "Projectile for a weapon used during SSR. The only difference between the 2 classes are that SSR Projectiles won't be replicated, meaning they only spawn locally." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_ServerSideRewindProjectileClass = { "ServerSideRewindProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileWeaponDataTable, ServerSideRewindProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_ServerSideRewindProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_ServerSideRewindProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_WeaponProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewProp_ServerSideRewindProjectileClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ProjectileWeaponDataTable",
		sizeof(FProjectileWeaponDataTable),
		alignof(FProjectileWeaponDataTable),
		Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectileWeaponDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_ProjectileWeaponDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProjectileWeaponDataTable.InnerSingleton, Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProjectileWeaponDataTable.InnerSingleton;
	}
	void AProjectileWeapon::StaticRegisterNativesAProjectileWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileWeapon);
	UClass* Z_Construct_UClass_AProjectileWeapon_NoRegister()
	{
		return AProjectileWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerSideRewindProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ServerSideRewindProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_MPShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Weapon/Ranged/ProjectileWeapon.h" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/ProjectileWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/ProjectileWeapon.h" },
		{ "ToolTip", "Projectile for a weapon." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileWeapon, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ServerSideRewindProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Item/Weapon/Ranged/ProjectileWeapon.h" },
		{ "ToolTip", "Projectile for a weapon used during SSR. The only difference between the 2 classes are that SSR Projectiles won't be replicated, meaning they only spawn locally." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ServerSideRewindProjectileClass = { "ServerSideRewindProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileWeapon, ServerSideRewindProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ServerSideRewindProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ServerSideRewindProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ServerSideRewindProjectileClass,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AProjectileWeapon_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UProjectileInterface_NoRegister, (int32)VTABLE_OFFSET(AProjectileWeapon, IProjectileInterface), false },  // 3005614511
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileWeapon_Statics::ClassParams = {
		&AProjectileWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileWeapon_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileWeapon()
	{
		if (!Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton, Z_Construct_UClass_AProjectileWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton;
	}
	template<> MPSHOOTER_API UClass* StaticClass<AProjectileWeapon>()
	{
		return AProjectileWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileWeapon);
	struct Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ProjectileWeapon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ProjectileWeapon_h_Statics::ScriptStructInfo[] = {
		{ FProjectileWeaponDataTable::StaticStruct, Z_Construct_UScriptStruct_FProjectileWeaponDataTable_Statics::NewStructOps, TEXT("ProjectileWeaponDataTable"), &Z_Registration_Info_UScriptStruct_ProjectileWeaponDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileWeaponDataTable), 3260390155U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ProjectileWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileWeapon, AProjectileWeapon::StaticClass, TEXT("AProjectileWeapon"), &Z_Registration_Info_UClass_AProjectileWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileWeapon), 80543448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ProjectileWeapon_h_3612284890(TEXT("/Script/MPShooter"),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ProjectileWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ProjectileWeapon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ProjectileWeapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPShooter_Source_MPShooter_Item_Weapon_Ranged_ProjectileWeapon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
