// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tale4Game/Tale4GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTale4GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TALE4GAME_API UClass* Z_Construct_UClass_ATale4GameMode();
	TALE4GAME_API UClass* Z_Construct_UClass_ATale4GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tale4Game();
// End Cross Module References
	DEFINE_FUNCTION(ATale4GameMode::execSecondsToNormalTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SecondsToNormalTime(Z_Param_input);
		P_NATIVE_END;
	}
	void ATale4GameMode::StaticRegisterNativesATale4GameMode()
	{
		UClass* Class = ATale4GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SecondsToNormalTime", &ATale4GameMode::execSecondsToNormalTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics
	{
		struct Tale4GameMode_eventSecondsToNormalTime_Parms
		{
			float input;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tale4GameMode_eventSecondsToNormalTime_Parms, input), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tale4GameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATale4GameMode, nullptr, "SecondsToNormalTime", nullptr, nullptr, Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::Tale4GameMode_eventSecondsToNormalTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::Tale4GameMode_eventSecondsToNormalTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATale4GameMode);
	UClass* Z_Construct_UClass_ATale4GameMode_NoRegister()
	{
		return ATale4GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATale4GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATale4GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tale4Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATale4GameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATale4GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATale4GameMode_SecondsToNormalTime, "SecondsToNormalTime" }, // 2477389333
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATale4GameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATale4GameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Tale4GameMode.h" },
		{ "ModuleRelativePath", "Tale4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATale4GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATale4GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATale4GameMode_Statics::ClassParams = {
		&ATale4GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATale4GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATale4GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATale4GameMode()
	{
		if (!Z_Registration_Info_UClass_ATale4GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATale4GameMode.OuterSingleton, Z_Construct_UClass_ATale4GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATale4GameMode.OuterSingleton;
	}
	template<> TALE4GAME_API UClass* StaticClass<ATale4GameMode>()
	{
		return ATale4GameMode::StaticClass();
	}
	ATale4GameMode::ATale4GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATale4GameMode);
	ATale4GameMode::~ATale4GameMode() {}
	struct Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATale4GameMode, ATale4GameMode::StaticClass, TEXT("ATale4GameMode"), &Z_Registration_Info_UClass_ATale4GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATale4GameMode), 1974489480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_1696721325(TEXT("/Script/Tale4Game"),
		Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
