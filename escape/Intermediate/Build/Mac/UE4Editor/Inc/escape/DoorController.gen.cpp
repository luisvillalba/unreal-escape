// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "escape/DoorController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorController() {}
// Cross Module References
	ESCAPE_API UClass* Z_Construct_UClass_UDoorController_NoRegister();
	ESCAPE_API UClass* Z_Construct_UClass_UDoorController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_escape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UDoorController::StaticRegisterNativesUDoorController()
	{
	}
	UClass* Z_Construct_UClass_UDoorController_NoRegister()
	{
		return UDoorController::StaticClass();
	}
	struct Z_Construct_UClass_UDoorController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorThatOpens_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorThatOpens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_escape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorController.h" },
		{ "ModuleRelativePath", "DoorController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorController_Statics::NewProp_ActorThatOpens_MetaData[] = {
		{ "Category", "DoorController" },
		{ "ModuleRelativePath", "DoorController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorController_Statics::NewProp_ActorThatOpens = { UE4CodeGen_Private::EPropertyClass::Object, "ActorThatOpens", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UDoorController, ActorThatOpens), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorController_Statics::NewProp_ActorThatOpens_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDoorController_Statics::NewProp_ActorThatOpens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorController_Statics::NewProp_PressurePlate_MetaData[] = {
		{ "Category", "DoorController" },
		{ "ModuleRelativePath", "DoorController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorController_Statics::NewProp_PressurePlate = { UE4CodeGen_Private::EPropertyClass::Object, "PressurePlate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UDoorController, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorController_Statics::NewProp_PressurePlate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDoorController_Statics::NewProp_PressurePlate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorController_Statics::NewProp_ActorThatOpens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorController_Statics::NewProp_PressurePlate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorController_Statics::ClassParams = {
		&UDoorController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UDoorController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UDoorController_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDoorController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDoorController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorController, 4257158183);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorController(Z_Construct_UClass_UDoorController, &UDoorController::StaticClass, TEXT("/Script/escape"), TEXT("UDoorController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
