// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tale4Game/Shooter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TALE4GAME_API UClass* Z_Construct_UClass_AShooter();
	TALE4GAME_API UClass* Z_Construct_UClass_AShooter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tale4Game();
// End Cross Module References
	DEFINE_FUNCTION(AShooter::execSayHi)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SayHi();
		P_NATIVE_END;
	}
	void AShooter::StaticRegisterNativesAShooter()
	{
		UClass* Class = AShooter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SayHi", &AShooter::execSayHi },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooter_SayHi_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooter_SayHi_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Shooter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooter_SayHi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooter, nullptr, "SayHi", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooter_SayHi_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooter_SayHi_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShooter_SayHi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooter_SayHi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooter);
	UClass* Z_Construct_UClass_AShooter_NoRegister()
	{
		return AShooter::StaticClass();
	}
	struct Z_Construct_UClass_AShooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Tale4Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooter_SayHi, "SayHi" }, // 1153449495
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Shooter.h" },
		{ "ModuleRelativePath", "Shooter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Shooter" },
		{ "ModuleRelativePath", "Shooter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::NewProp_Health_MetaData), Z_Construct_UClass_AShooter_Statics::NewProp_Health_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooter_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooter_Statics::ClassParams = {
		&AShooter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShooter()
	{
		if (!Z_Registration_Info_UClass_AShooter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooter.OuterSingleton, Z_Construct_UClass_AShooter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooter.OuterSingleton;
	}
	template<> TALE4GAME_API UClass* StaticClass<AShooter>()
	{
		return AShooter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooter);
	AShooter::~AShooter() {}
	struct Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Shooter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Shooter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooter, AShooter::StaticClass, TEXT("AShooter"), &Z_Registration_Info_UClass_AShooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooter), 2573681690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Shooter_h_3260005768(TEXT("/Script/Tale4Game"),
		Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Shooter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tale4Game_Source_Tale4Game_Shooter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
