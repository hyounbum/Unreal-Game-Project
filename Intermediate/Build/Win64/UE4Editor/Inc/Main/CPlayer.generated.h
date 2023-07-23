// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAIN_CPlayer_generated_h
#error "CPlayer.generated.h already included, missing '#pragma once' in CPlayer.h"
#endif
#define MAIN_CPlayer_generated_h

#define Main_Source_Main_CPlayer_CPlayer_h_10_SPARSE_DATA
#define Main_Source_Main_CPlayer_CPlayer_h_10_RPC_WRAPPERS
#define Main_Source_Main_CPlayer_CPlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Main_Source_Main_CPlayer_CPlayer_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer)


#define Main_Source_Main_CPlayer_CPlayer_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer)


#define Main_Source_Main_CPlayer_CPlayer_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public:


#define Main_Source_Main_CPlayer_CPlayer_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayer)


#define Main_Source_Main_CPlayer_CPlayer_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACPlayer, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACPlayer, Camera); }


#define Main_Source_Main_CPlayer_CPlayer_h_7_PROLOG
#define Main_Source_Main_CPlayer_CPlayer_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_CPlayer_CPlayer_h_10_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_CPlayer_CPlayer_h_10_SPARSE_DATA \
	Main_Source_Main_CPlayer_CPlayer_h_10_RPC_WRAPPERS \
	Main_Source_Main_CPlayer_CPlayer_h_10_INCLASS \
	Main_Source_Main_CPlayer_CPlayer_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_CPlayer_CPlayer_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_CPlayer_CPlayer_h_10_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_CPlayer_CPlayer_h_10_SPARSE_DATA \
	Main_Source_Main_CPlayer_CPlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_CPlayer_CPlayer_h_10_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_CPlayer_CPlayer_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class ACPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_CPlayer_CPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
