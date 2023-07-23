// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAIN_MainGameModeBase_generated_h
#error "MainGameModeBase.generated.h already included, missing '#pragma once' in MainGameModeBase.h"
#endif
#define MAIN_MainGameModeBase_generated_h

#define Parkour_Source_Main_MainGameModeBase_h_15_SPARSE_DATA
#define Parkour_Source_Main_MainGameModeBase_h_15_RPC_WRAPPERS
#define Parkour_Source_Main_MainGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Parkour_Source_Main_MainGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGameModeBase(); \
	friend struct Z_Construct_UClass_AMainGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMainGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AMainGameModeBase)


#define Parkour_Source_Main_MainGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMainGameModeBase(); \
	friend struct Z_Construct_UClass_AMainGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMainGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AMainGameModeBase)


#define Parkour_Source_Main_MainGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGameModeBase(AMainGameModeBase&&); \
	NO_API AMainGameModeBase(const AMainGameModeBase&); \
public:


#define Parkour_Source_Main_MainGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGameModeBase(AMainGameModeBase&&); \
	NO_API AMainGameModeBase(const AMainGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGameModeBase)


#define Parkour_Source_Main_MainGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Parkour_Source_Main_MainGameModeBase_h_12_PROLOG
#define Parkour_Source_Main_MainGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parkour_Source_Main_MainGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Parkour_Source_Main_MainGameModeBase_h_15_SPARSE_DATA \
	Parkour_Source_Main_MainGameModeBase_h_15_RPC_WRAPPERS \
	Parkour_Source_Main_MainGameModeBase_h_15_INCLASS \
	Parkour_Source_Main_MainGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Parkour_Source_Main_MainGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parkour_Source_Main_MainGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Parkour_Source_Main_MainGameModeBase_h_15_SPARSE_DATA \
	Parkour_Source_Main_MainGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Parkour_Source_Main_MainGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Parkour_Source_Main_MainGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class AMainGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Parkour_Source_Main_MainGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
