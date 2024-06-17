// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/CapsulaEnergia200pts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaEnergia200pts() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACapsulaEnergia200pts_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACapsulaEnergia200pts();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACapsulaEnergia();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ACapsulaEnergia200pts::StaticRegisterNativesACapsulaEnergia200pts()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaEnergia200pts_NoRegister()
	{
		return ACapsulaEnergia200pts::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaEnergia200pts_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaEnergia200pts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsulaEnergia,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaEnergia200pts_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapsulaEnergia200pts.h" },
		{ "ModuleRelativePath", "CapsulaEnergia200pts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaEnergia200pts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaEnergia200pts>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaEnergia200pts_Statics::ClassParams = {
		&ACapsulaEnergia200pts::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaEnergia200pts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaEnergia200pts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaEnergia200pts()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaEnergia200pts_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaEnergia200pts, 1940703145);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ACapsulaEnergia200pts>()
	{
		return ACapsulaEnergia200pts::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaEnergia200pts(Z_Construct_UClass_ACapsulaEnergia200pts, &ACapsulaEnergia200pts::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ACapsulaEnergia200pts"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaEnergia200pts);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
