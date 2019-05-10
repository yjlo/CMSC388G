// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project1/Target.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTarget() {}
// Cross Module References
	PROJECT1_API UClass* Z_Construct_UClass_ATarget_NoRegister();
	PROJECT1_API UClass* Z_Construct_UClass_ATarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Project1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATarget::StaticRegisterNativesATarget()
	{
	}
	UClass* Z_Construct_UClass_ATarget_NoRegister()
	{
		return ATarget::StaticClass();
	}
	struct Z_Construct_UClass_ATarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Project1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Target.h" },
		{ "ModuleRelativePath", "Target.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATarget_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Target" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Target.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATarget_Statics::NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ATarget, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATarget_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATarget_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATarget_Statics::ClassParams = {
		&ATarget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ATarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATarget, 2504188102);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATarget(Z_Construct_UClass_ATarget, &ATarget::StaticClass, TEXT("/Script/Project1"), TEXT("ATarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
