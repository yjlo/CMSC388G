// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project1/CustomMotionController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMotionController() {}
// Cross Module References
	PROJECT1_API UScriptStruct* Z_Construct_UScriptStruct_FTeleportDestinationTransform();
	UPackage* Z_Construct_UPackage__Script_Project1();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROJECT1_API UClass* Z_Construct_UClass_ACustomMotionController_NoRegister();
	PROJECT1_API UClass* Z_Construct_UClass_ACustomMotionController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROJECT1_API UFunction* Z_Construct_UFunction_ACustomMotionController_ClearArc();
	PROJECT1_API UFunction* Z_Construct_UFunction_ACustomMotionController_GetActorNearHand();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PROJECT1_API UFunction* Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination();
// End Cross Module References
class UScriptStruct* FTeleportDestinationTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECT1_API uint32 Get_Z_Construct_UScriptStruct_FTeleportDestinationTransform_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTeleportDestinationTransform, Z_Construct_UPackage__Script_Project1(), TEXT("TeleportDestinationTransform"), sizeof(FTeleportDestinationTransform), Get_Z_Construct_UScriptStruct_FTeleportDestinationTransform_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTeleportDestinationTransform(FTeleportDestinationTransform::StaticStruct, TEXT("/Script/Project1"), TEXT("TeleportDestinationTransform"), false, nullptr, nullptr);
static struct FScriptStruct_Project1_StaticRegisterNativesFTeleportDestinationTransform
{
	FScriptStruct_Project1_StaticRegisterNativesFTeleportDestinationTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TeleportDestinationTransform")),new UScriptStruct::TCppStructOps<FTeleportDestinationTransform>);
	}
} ScriptStruct_Project1_StaticRegisterNativesFTeleportDestinationTransform;
	struct Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CustomMotionController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTeleportDestinationTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::NewProp_DestinationRotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "CustomMotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::NewProp_DestinationRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "DestinationRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FTeleportDestinationTransform, DestinationRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::NewProp_DestinationRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::NewProp_DestinationRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::NewProp_DestinationLocation_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "CustomMotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::NewProp_DestinationLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "DestinationLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FTeleportDestinationTransform, DestinationLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::NewProp_DestinationLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::NewProp_DestinationLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::NewProp_DestinationRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::NewProp_DestinationLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Project1,
		nullptr,
		&NewStructOps,
		"TeleportDestinationTransform",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTeleportDestinationTransform),
		alignof(FTeleportDestinationTransform),
		Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTeleportDestinationTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTeleportDestinationTransform_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Project1();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TeleportDestinationTransform"), sizeof(FTeleportDestinationTransform), Get_Z_Construct_UScriptStruct_FTeleportDestinationTransform_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTeleportDestinationTransform_CRC() { return 3680151508U; }
	void ACustomMotionController::StaticRegisterNativesACustomMotionController()
	{
		UClass* Class = ACustomMotionController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearArc", &ACustomMotionController::execClearArc },
			{ "GetActorNearHand", &ACustomMotionController::execGetActorNearHand },
			{ "GetTeleportDestination", &ACustomMotionController::execGetTeleportDestination },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomMotionController_ClearArc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomMotionController_ClearArc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporation" },
		{ "ModuleRelativePath", "CustomMotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomMotionController_ClearArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomMotionController, "ClearArc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomMotionController_ClearArc_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACustomMotionController_ClearArc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomMotionController_ClearArc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomMotionController_ClearArc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomMotionController_GetActorNearHand_Statics
	{
		struct CustomMotionController_eventGetActorNearHand_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACustomMotionController_GetActorNearHand_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CustomMotionController_eventGetActorNearHand_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomMotionController_GetActorNearHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomMotionController_GetActorNearHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomMotionController_GetActorNearHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grab Handling" },
		{ "ModuleRelativePath", "CustomMotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomMotionController_GetActorNearHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomMotionController, "GetActorNearHand", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CustomMotionController_eventGetActorNearHand_Parms), Z_Construct_UFunction_ACustomMotionController_GetActorNearHand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACustomMotionController_GetActorNearHand_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomMotionController_GetActorNearHand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACustomMotionController_GetActorNearHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomMotionController_GetActorNearHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomMotionController_GetActorNearHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination_Statics
	{
		struct CustomMotionController_eventGetTeleportDestination_Parms
		{
			FTeleportDestinationTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CustomMotionController_eventGetTeleportDestination_Parms, ReturnValue), Z_Construct_UScriptStruct_FTeleportDestinationTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleportation" },
		{ "ModuleRelativePath", "CustomMotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomMotionController, "GetTeleportDestination", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(CustomMotionController_eventGetTeleportDestination_Parms), Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACustomMotionController_NoRegister()
	{
		return ACustomMotionController::StaticClass();
	}
	struct Z_Construct_UClass_ACustomMotionController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomMotionController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Project1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomMotionController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomMotionController_ClearArc, "ClearArc" }, // 3287732461
		{ &Z_Construct_UFunction_ACustomMotionController_GetActorNearHand, "GetActorNearHand" }, // 2099811019
		{ &Z_Construct_UFunction_ACustomMotionController_GetTeleportDestination, "GetTeleportDestination" }, // 1506686481
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomMotionController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomMotionController.h" },
		{ "ModuleRelativePath", "CustomMotionController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomMotionController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomMotionController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomMotionController_Statics::ClassParams = {
		&ACustomMotionController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACustomMotionController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACustomMotionController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomMotionController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomMotionController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomMotionController, 408987631);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomMotionController(Z_Construct_UClass_ACustomMotionController, &ACustomMotionController::StaticClass, TEXT("/Script/Project1"), TEXT("ACustomMotionController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomMotionController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
