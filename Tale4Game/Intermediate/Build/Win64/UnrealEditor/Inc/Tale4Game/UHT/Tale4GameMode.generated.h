// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tale4GameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TALE4GAME_Tale4GameMode_generated_h
#error "Tale4GameMode.generated.h already included, missing '#pragma once' in Tale4GameMode.h"
#endif
#define TALE4GAME_Tale4GameMode_generated_h

#define FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_SPARSE_DATA
#define FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSecondsToNormalTime);


#define FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_ACCESSORS
#define FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATale4GameMode(); \
	friend struct Z_Construct_UClass_ATale4GameMode_Statics; \
public: \
	DECLARE_CLASS(ATale4GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tale4Game"), NO_API) \
	DECLARE_SERIALIZER(ATale4GameMode)


#define FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATale4GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATale4GameMode(ATale4GameMode&&); \
	NO_API ATale4GameMode(const ATale4GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATale4GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATale4GameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATale4GameMode) \
	NO_API virtual ~ATale4GameMode();


#define FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_12_PROLOG
#define FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_SPARSE_DATA \
	FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_ACCESSORS \
	FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TALE4GAME_API UClass* StaticClass<class ATale4GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tale4Game_Source_Tale4Game_Tale4GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
