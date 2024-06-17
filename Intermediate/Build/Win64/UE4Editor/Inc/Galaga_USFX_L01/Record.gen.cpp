// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Record.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecord() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ARecord_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ARecord();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ARecord::StaticRegisterNativesARecord()
	{
	}
	UClass* Z_Construct_UClass_ARecord_NoRegister()
	{
		return ARecord::StaticClass();
	}
	struct Z_Construct_UClass_ARecord_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARecord_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecord_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Record.h" },
		{ "ModuleRelativePath", "Record.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARecord_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecord>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARecord_Statics::ClassParams = {
		&ARecord::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARecord_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARecord_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARecord()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARecord_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARecord, 4014103253);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ARecord>()
	{
		return ARecord::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARecord(Z_Construct_UClass_ARecord, &ARecord::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ARecord"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARecord);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
