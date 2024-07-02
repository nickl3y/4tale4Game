// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tale4Game/WaiterPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaiterPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	TALE4GAME_API UClass* Z_Construct_UClass_AWaiterPawn();
	TALE4GAME_API UClass* Z_Construct_UClass_AWaiterPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tale4Game();
// End Cross Module References
	void AWaiterPawn::StaticRegisterNativesAWaiterPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaiterPawn);
	UClass* Z_Construct_UClass_AWaiterPawn_NoRegister()
	{
		return AWaiterPawn::StaticClass();
	}
	struct Z_Construct_UClass_AWaiterPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaiterPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tale4Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaiterPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaiterPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WaiterPawn.h" },
		{ "ModuleRelativePath", "WaiterPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaiterPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaiterPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaiterPawn_Statics::ClassParams = {
		&AWaiterPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaiterPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaiterPawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWaiterPawn()
	{
		if (!Z_Registration_Info_UClass_AWaiterPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaiterPawn.OuterSingleton, Z_Construct_UClass_AWaiterPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaiterPawn.OuterSingleton;
	}
	template<> TALE4GAME_API UClass* StaticClass<AWaiterPawn>()
	{
		return AWaiterPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaiterPawn);
	AWaiterPawn::~AWaiterPawn() {}
	struct Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_WaiterPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_WaiterPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWaiterPawn, AWaiterPawn::StaticClass, TEXT("AWaiterPawn"), &Z_Registration_Info_UClass_AWaiterPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaiterPawn), 3333438434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_WaiterPawn_h_366409036(TEXT("/Script/Tale4Game"),
		Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_WaiterPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_WaiterPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
