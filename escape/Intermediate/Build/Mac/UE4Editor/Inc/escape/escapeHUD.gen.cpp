// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "escape/escapeHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeescapeHUD() {}
// Cross Module References
	ESCAPE_API UClass* Z_Construct_UClass_AescapeHUD_NoRegister();
	ESCAPE_API UClass* Z_Construct_UClass_AescapeHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_escape();
// End Cross Module References
	void AescapeHUD::StaticRegisterNativesAescapeHUD()
	{
	}
	UClass* Z_Construct_UClass_AescapeHUD_NoRegister()
	{
		return AescapeHUD::StaticClass();
	}
	struct Z_Construct_UClass_AescapeHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AescapeHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_escape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AescapeHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "escapeHUD.h" },
		{ "ModuleRelativePath", "escapeHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AescapeHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AescapeHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AescapeHUD_Statics::ClassParams = {
		&AescapeHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AescapeHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AescapeHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AescapeHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AescapeHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AescapeHUD, 1878289374);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AescapeHUD(Z_Construct_UClass_AescapeHUD, &AescapeHUD::StaticClass, TEXT("/Script/escape"), TEXT("AescapeHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AescapeHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
