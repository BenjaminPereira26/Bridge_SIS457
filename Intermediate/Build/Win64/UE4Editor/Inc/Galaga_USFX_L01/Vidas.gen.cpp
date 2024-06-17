// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Vidas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVidas() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AVidas_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AVidas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AVidas::StaticRegisterNativesAVidas()
	{
	}
	UClass* Z_Construct_UClass_AVidas_NoRegister()
	{
		return AVidas::StaticClass();
	}
	struct Z_Construct_UClass_AVidas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVidas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVidas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Vidas.h" },
		{ "ModuleRelativePath", "Vidas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVidas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVidas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVidas_Statics::ClassParams = {
		&AVidas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVidas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVidas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVidas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVidas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVidas, 2492946319);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AVidas>()
	{
		return AVidas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVidas(Z_Construct_UClass_AVidas, &AVidas::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AVidas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVidas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
