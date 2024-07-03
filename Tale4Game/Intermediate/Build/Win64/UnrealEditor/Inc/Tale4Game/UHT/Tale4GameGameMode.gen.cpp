// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tale4Game/Tale4GameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTale4GameGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TALE4GAME_API UClass* Z_Construct_UClass_ATale4GameGameMode();
	TALE4GAME_API UClass* Z_Construct_UClass_ATale4GameGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tale4Game();
// End Cross Module References
	void ATale4GameGameMode::StaticRegisterNativesATale4GameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATale4GameGameMode);
	UClass* Z_Construct_UClass_ATale4GameGameMode_NoRegister()
	{
		return ATale4GameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATale4GameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATale4GameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tale4Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATale4GameGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATale4GameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Tale4GameGameMode.h" },
		{ "ModuleRelativePath", "Tale4GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATale4GameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATale4GameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATale4GameGameMode_Statics::ClassParams = {
		&ATale4GameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATale4GameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATale4GameGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATale4GameGameMode()
	{
		if (!Z_Registration_Info_UClass_ATale4GameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATale4GameGameMode.OuterSingleton, Z_Construct_UClass_ATale4GameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATale4GameGameMode.OuterSingleton;
	}
	template<> TALE4GAME_API UClass* StaticClass<ATale4GameGameMode>()
	{
		return ATale4GameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATale4GameGameMode);
	ATale4GameGameMode::~ATale4GameGameMode() {}
	struct Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Tale4GameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Tale4GameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATale4GameGameMode, ATale4GameGameMode::StaticClass, TEXT("ATale4GameGameMode"), &Z_Registration_Info_UClass_ATale4GameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATale4GameGameMode), 1257979297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Tale4GameGameMode_h_2178726292(TEXT("/Script/Tale4Game"),
		Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Tale4GameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Tale4GameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
