// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tale4Game/GunRoot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunRoot() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TALE4GAME_API UClass* Z_Construct_UClass_AGunRoot();
	TALE4GAME_API UClass* Z_Construct_UClass_AGunRoot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tale4Game();
// End Cross Module References
	void AGunRoot::StaticRegisterNativesAGunRoot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGunRoot);
	UClass* Z_Construct_UClass_AGunRoot_NoRegister()
	{
		return AGunRoot::StaticClass();
	}
	struct Z_Construct_UClass_AGunRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tale4Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGunRoot_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunRoot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GunRoot.h" },
		{ "ModuleRelativePath", "GunRoot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunRoot_Statics::NewProp_Rate_MetaData[] = {
		{ "Category", "GunRoot" },
		{ "ModuleRelativePath", "GunRoot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunRoot_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGunRoot, Rate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGunRoot_Statics::NewProp_Rate_MetaData), Z_Construct_UClass_AGunRoot_Statics::NewProp_Rate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunRoot_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "GunRoot" },
		{ "ModuleRelativePath", "GunRoot.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGunRoot_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGunRoot, MaxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGunRoot_Statics::NewProp_MaxAmmo_MetaData), Z_Construct_UClass_AGunRoot_Statics::NewProp_MaxAmmo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunRoot_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunRoot_Statics::NewProp_MaxAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunRoot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGunRoot_Statics::ClassParams = {
		&AGunRoot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGunRoot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunRoot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGunRoot_Statics::Class_MetaDataParams), Z_Construct_UClass_AGunRoot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGunRoot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGunRoot()
	{
		if (!Z_Registration_Info_UClass_AGunRoot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGunRoot.OuterSingleton, Z_Construct_UClass_AGunRoot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGunRoot.OuterSingleton;
	}
	template<> TALE4GAME_API UClass* StaticClass<AGunRoot>()
	{
		return AGunRoot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunRoot);
	AGunRoot::~AGunRoot() {}
	struct Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_GunRoot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_GunRoot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGunRoot, AGunRoot::StaticClass, TEXT("AGunRoot"), &Z_Registration_Info_UClass_AGunRoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGunRoot), 2963048484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_GunRoot_h_1803311725(TEXT("/Script/Tale4Game"),
		Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_GunRoot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_GunRoot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
