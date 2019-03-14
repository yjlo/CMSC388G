// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project1/CustomPickupActorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPickupActorInterface() {}
// Cross Module References
	PROJECT1_API UClass* Z_Construct_UClass_UCustomPickupActorInterface_NoRegister();
	PROJECT1_API UClass* Z_Construct_UClass_UCustomPickupActorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Project1();
	PROJECT1_API UFunction* Z_Construct_UFunction_UCustomPickupActorInterface_Drop();
	PROJECT1_API UFunction* Z_Construct_UFunction_UCustomPickupActorInterface_Pickup();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ICustomPickupActorInterface::Drop()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Drop instead.");
	}
	void ICustomPickupActorInterface::Pickup(USceneComponent* AttachTo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Pickup instead.");
	}
	void UCustomPickupActorInterface::StaticRegisterNativesUCustomPickupActorInterface()
	{
		UClass* Class = UCustomPickupActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &ICustomPickupActorInterface::execDrop },
			{ "Pickup", &ICustomPickupActorInterface::execPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomPickupActorInterface_Drop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPickupActorInterface_Drop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grab Handling" },
		{ "ModuleRelativePath", "CustomPickupActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPickupActorInterface_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPickupActorInterface, "Drop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPickupActorInterface_Drop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomPickupActorInterface_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPickupActorInterface_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomPickupActorInterface_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::NewProp_AttachTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::NewProp_AttachTo = { UE4CodeGen_Private::EPropertyClass::Object, "AttachTo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CustomPickupActorInterface_eventPickup_Parms, AttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::NewProp_AttachTo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::NewProp_AttachTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::NewProp_AttachTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grab Handling" },
		{ "ModuleRelativePath", "CustomPickupActorInterface.h" },
		{ "ToolTip", "classes using this interface must implement Pickup (optional)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPickupActorInterface, "Pickup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(CustomPickupActorInterface_eventPickup_Parms), Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPickupActorInterface_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomPickupActorInterface_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomPickupActorInterface_NoRegister()
	{
		return UCustomPickupActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCustomPickupActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomPickupActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Project1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomPickupActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomPickupActorInterface_Drop, "Drop" }, // 2846141031
		{ &Z_Construct_UFunction_UCustomPickupActorInterface_Pickup, "Pickup" }, // 2756738582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPickupActorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CustomPickupActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomPickupActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICustomPickupActorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomPickupActorInterface_Statics::ClassParams = {
		&UCustomPickupActorInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCustomPickupActorInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCustomPickupActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomPickupActorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomPickupActorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomPickupActorInterface, 690517265);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomPickupActorInterface(Z_Construct_UClass_UCustomPickupActorInterface, &UCustomPickupActorInterface::StaticClass, TEXT("/Script/Project1"), TEXT("UCustomPickupActorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomPickupActorInterface);
	static FName NAME_UCustomPickupActorInterface_Drop = FName(TEXT("Drop"));
	void ICustomPickupActorInterface::Execute_Drop(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCustomPickupActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCustomPickupActorInterface_Drop);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICustomPickupActorInterface*)(O->GetNativeInterfaceAddress(UCustomPickupActorInterface::StaticClass())))
		{
			I->Drop_Implementation();
		}
	}
	static FName NAME_UCustomPickupActorInterface_Pickup = FName(TEXT("Pickup"));
	void ICustomPickupActorInterface::Execute_Pickup(UObject* O, USceneComponent* AttachTo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCustomPickupActorInterface::StaticClass()));
		CustomPickupActorInterface_eventPickup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCustomPickupActorInterface_Pickup);
		if (Func)
		{
			Parms.AttachTo=AttachTo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICustomPickupActorInterface*)(O->GetNativeInterfaceAddress(UCustomPickupActorInterface::StaticClass())))
		{
			I->Pickup_Implementation(AttachTo);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
