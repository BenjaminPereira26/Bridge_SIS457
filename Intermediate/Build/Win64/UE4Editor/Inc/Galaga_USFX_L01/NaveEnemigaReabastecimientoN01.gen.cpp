// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaReabastecimientoN01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaReabastecimientoN01() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaReabastecimientoN01_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaReabastecimientoN01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaReabastecimiento();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveEnemigaReabastecimientoN01::StaticRegisterNativesANaveEnemigaReabastecimientoN01()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaReabastecimientoN01_NoRegister()
	{
		return ANaveEnemigaReabastecimientoN01::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaReabastecimientoN01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaReabastecimientoN01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaReabastecimiento,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaReabastecimientoN01_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaReabastecimientoN01.h" },
		{ "ModuleRelativePath", "NaveEnemigaReabastecimientoN01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaReabastecimientoN01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaReabastecimientoN01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaReabastecimientoN01_Statics::ClassParams = {
		&ANaveEnemigaReabastecimientoN01::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaReabastecimientoN01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaReabastecimientoN01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaReabastecimientoN01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaReabastecimientoN01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaReabastecimientoN01, 1790544232);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaReabastecimientoN01>()
	{
		return ANaveEnemigaReabastecimientoN01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaReabastecimientoN01(Z_Construct_UClass_ANaveEnemigaReabastecimientoN01, &ANaveEnemigaReabastecimientoN01::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveEnemigaReabastecimientoN01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaReabastecimientoN01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
