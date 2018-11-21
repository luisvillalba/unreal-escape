// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ESCAPE_escapeProjectile_generated_h
#error "escapeProjectile.generated.h already included, missing '#pragma once' in escapeProjectile.h"
#endif
#define ESCAPE_escapeProjectile_generated_h

#define escape_Source_escape_escapeProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define escape_Source_escape_escapeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define escape_Source_escape_escapeProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAescapeProjectile(); \
	friend struct Z_Construct_UClass_AescapeProjectile_Statics; \
public: \
	DECLARE_CLASS(AescapeProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/escape"), NO_API) \
	DECLARE_SERIALIZER(AescapeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define escape_Source_escape_escapeProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAescapeProjectile(); \
	friend struct Z_Construct_UClass_AescapeProjectile_Statics; \
public: \
	DECLARE_CLASS(AescapeProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/escape"), NO_API) \
	DECLARE_SERIALIZER(AescapeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define escape_Source_escape_escapeProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AescapeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AescapeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AescapeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AescapeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AescapeProjectile(AescapeProjectile&&); \
	NO_API AescapeProjectile(const AescapeProjectile&); \
public:


#define escape_Source_escape_escapeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AescapeProjectile(AescapeProjectile&&); \
	NO_API AescapeProjectile(const AescapeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AescapeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AescapeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AescapeProjectile)


#define escape_Source_escape_escapeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AescapeProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AescapeProjectile, ProjectileMovement); }


#define escape_Source_escape_escapeProjectile_h_9_PROLOG
#define escape_Source_escape_escapeProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	escape_Source_escape_escapeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	escape_Source_escape_escapeProjectile_h_12_RPC_WRAPPERS \
	escape_Source_escape_escapeProjectile_h_12_INCLASS \
	escape_Source_escape_escapeProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define escape_Source_escape_escapeProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	escape_Source_escape_escapeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	escape_Source_escape_escapeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	escape_Source_escape_escapeProjectile_h_12_INCLASS_NO_PURE_DECLS \
	escape_Source_escape_escapeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID escape_Source_escape_escapeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
