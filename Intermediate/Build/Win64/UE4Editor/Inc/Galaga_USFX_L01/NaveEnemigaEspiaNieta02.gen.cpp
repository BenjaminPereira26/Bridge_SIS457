// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaEspiaNieta02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaEspiaNieta02() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaEspiaNieta02_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaEspiaNieta02();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaEspia();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveEnemigaEspiaNieta02::StaticRegisterNativesANaveEnemigaEspiaNieta02()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaEspiaNieta02_NoRegister()
	{
		return ANaveEnemigaEspiaNieta02::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaEspiaNieta02_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaEspiaNieta02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaEspia,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaEspiaNieta02_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaEspiaNieta02.h" },
		{ "ModuleRelativePath", "NaveEnemigaEspiaNieta02.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaEspiaNieta02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaEspiaNieta02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaEspiaNieta02_Statics::ClassParams = {
		&ANaveEnemigaEspiaNieta02::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaEspiaNieta02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaEspiaNieta02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaEspiaNieta02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaEspiaNieta02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaEspiaNieta02, 2101530428);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaEspiaNieta02>()
	{
		return ANaveEnemigaEspiaNieta02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaEspiaNieta02(Z_Construct_UClass_ANaveEnemigaEspiaNieta02, &ANaveEnemigaEspiaNieta02::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveEnemigaEspiaNieta02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaEspiaNieta02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
