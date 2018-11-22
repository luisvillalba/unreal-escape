// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPE_DoorController_generated_h
#error "DoorController.generated.h already included, missing '#pragma once' in DoorController.h"
#endif
#define ESCAPE_DoorController_generated_h

#define escape_Source_escape_DoorController_h_15_RPC_WRAPPERS
#define escape_Source_escape_DoorController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define escape_Source_escape_DoorController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorController(); \
	friend struct Z_Construct_UClass_UDoorController_Statics; \
public: \
	DECLARE_CLASS(UDoorController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/escape"), NO_API) \
	DECLARE_SERIALIZER(UDoorController)


#define escape_Source_escape_DoorController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDoorController(); \
	friend struct Z_Construct_UClass_UDoorController_Statics; \
public: \
	DECLARE_CLASS(UDoorController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/escape"), NO_API) \
	DECLARE_SERIALIZER(UDoorController)


#define escape_Source_escape_DoorController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorController(UDoorController&&); \
	NO_API UDoorController(const UDoorController&); \
public:


#define escape_Source_escape_DoorController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorController(UDoorController&&); \
	NO_API UDoorController(const UDoorController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorController)


#define escape_Source_escape_DoorController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UDoorController, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__ActorThatOpens() { return STRUCT_OFFSET(UDoorController, ActorThatOpens); }


#define escape_Source_escape_DoorController_h_12_PROLOG
#define escape_Source_escape_DoorController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	escape_Source_escape_DoorController_h_15_PRIVATE_PROPERTY_OFFSET \
	escape_Source_escape_DoorController_h_15_RPC_WRAPPERS \
	escape_Source_escape_DoorController_h_15_INCLASS \
	escape_Source_escape_DoorController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define escape_Source_escape_DoorController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	escape_Source_escape_DoorController_h_15_PRIVATE_PROPERTY_OFFSET \
	escape_Source_escape_DoorController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	escape_Source_escape_DoorController_h_15_INCLASS_NO_PURE_DECLS \
	escape_Source_escape_DoorController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID escape_Source_escape_DoorController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
