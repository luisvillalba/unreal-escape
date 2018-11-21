// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPE_escapeCharacter_generated_h
#error "escapeCharacter.generated.h already included, missing '#pragma once' in escapeCharacter.h"
#endif
#define ESCAPE_escapeCharacter_generated_h

#define escape_Source_escape_escapeCharacter_h_14_RPC_WRAPPERS
#define escape_Source_escape_escapeCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define escape_Source_escape_escapeCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAescapeCharacter(); \
	friend struct Z_Construct_UClass_AescapeCharacter_Statics; \
public: \
	DECLARE_CLASS(AescapeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/escape"), NO_API) \
	DECLARE_SERIALIZER(AescapeCharacter)


#define escape_Source_escape_escapeCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAescapeCharacter(); \
	friend struct Z_Construct_UClass_AescapeCharacter_Statics; \
public: \
	DECLARE_CLASS(AescapeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/escape"), NO_API) \
	DECLARE_SERIALIZER(AescapeCharacter)


#define escape_Source_escape_escapeCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AescapeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AescapeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AescapeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AescapeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AescapeCharacter(AescapeCharacter&&); \
	NO_API AescapeCharacter(const AescapeCharacter&); \
public:


#define escape_Source_escape_escapeCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AescapeCharacter(AescapeCharacter&&); \
	NO_API AescapeCharacter(const AescapeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AescapeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AescapeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AescapeCharacter)


#define escape_Source_escape_escapeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AescapeCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AescapeCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AescapeCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AescapeCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AescapeCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AescapeCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AescapeCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AescapeCharacter, L_MotionController); }


#define escape_Source_escape_escapeCharacter_h_11_PROLOG
#define escape_Source_escape_escapeCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	escape_Source_escape_escapeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	escape_Source_escape_escapeCharacter_h_14_RPC_WRAPPERS \
	escape_Source_escape_escapeCharacter_h_14_INCLASS \
	escape_Source_escape_escapeCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define escape_Source_escape_escapeCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	escape_Source_escape_escapeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	escape_Source_escape_escapeCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	escape_Source_escape_escapeCharacter_h_14_INCLASS_NO_PURE_DECLS \
	escape_Source_escape_escapeCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID escape_Source_escape_escapeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
