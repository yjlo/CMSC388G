// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef PROJECT1_CustomPickupActorInterface_generated_h
#error "CustomPickupActorInterface.generated.h already included, missing '#pragma once' in CustomPickupActorInterface.h"
#endif
#define PROJECT1_CustomPickupActorInterface_generated_h

#define Project1_Source_Project1_CustomPickupActorInterface_h_15_RPC_WRAPPERS \
	virtual void Drop_Implementation() {}; \
	virtual void Pickup_Implementation(USceneComponent* AttachTo) {}; \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickup) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pickup_Implementation(Z_Param_AttachTo); \
		P_NATIVE_END; \
	}


#define Project1_Source_Project1_CustomPickupActorInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Drop_Implementation() {}; \
	virtual void Pickup_Implementation(USceneComponent* AttachTo) {}; \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickup) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pickup_Implementation(Z_Param_AttachTo); \
		P_NATIVE_END; \
	}


#define Project1_Source_Project1_CustomPickupActorInterface_h_15_EVENT_PARMS \
	struct CustomPickupActorInterface_eventPickup_Parms \
	{ \
		USceneComponent* AttachTo; \
	};


#define Project1_Source_Project1_CustomPickupActorInterface_h_15_CALLBACK_WRAPPERS
#define Project1_Source_Project1_CustomPickupActorInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomPickupActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomPickupActorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomPickupActorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomPickupActorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomPickupActorInterface(UCustomPickupActorInterface&&); \
	NO_API UCustomPickupActorInterface(const UCustomPickupActorInterface&); \
public:


#define Project1_Source_Project1_CustomPickupActorInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomPickupActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomPickupActorInterface(UCustomPickupActorInterface&&); \
	NO_API UCustomPickupActorInterface(const UCustomPickupActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomPickupActorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomPickupActorInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomPickupActorInterface)


#define Project1_Source_Project1_CustomPickupActorInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCustomPickupActorInterface(); \
	friend struct Z_Construct_UClass_UCustomPickupActorInterface_Statics; \
public: \
	DECLARE_CLASS(UCustomPickupActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Project1"), NO_API) \
	DECLARE_SERIALIZER(UCustomPickupActorInterface)


#define Project1_Source_Project1_CustomPickupActorInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Project1_Source_Project1_CustomPickupActorInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Project1_Source_Project1_CustomPickupActorInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project1_Source_Project1_CustomPickupActorInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Project1_Source_Project1_CustomPickupActorInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Project1_Source_Project1_CustomPickupActorInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project1_Source_Project1_CustomPickupActorInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICustomPickupActorInterface() {} \
public: \
	typedef UCustomPickupActorInterface UClassType; \
	typedef ICustomPickupActorInterface ThisClass; \
	static void Execute_Drop(UObject* O); \
	static void Execute_Pickup(UObject* O, USceneComponent* AttachTo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Project1_Source_Project1_CustomPickupActorInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~ICustomPickupActorInterface() {} \
public: \
	typedef UCustomPickupActorInterface UClassType; \
	typedef ICustomPickupActorInterface ThisClass; \
	static void Execute_Drop(UObject* O); \
	static void Execute_Pickup(UObject* O, USceneComponent* AttachTo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Project1_Source_Project1_CustomPickupActorInterface_h_12_PROLOG \
	Project1_Source_Project1_CustomPickupActorInterface_h_15_EVENT_PARMS


#define Project1_Source_Project1_CustomPickupActorInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project1_Source_Project1_CustomPickupActorInterface_h_15_RPC_WRAPPERS \
	Project1_Source_Project1_CustomPickupActorInterface_h_15_CALLBACK_WRAPPERS \
	Project1_Source_Project1_CustomPickupActorInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project1_Source_Project1_CustomPickupActorInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project1_Source_Project1_CustomPickupActorInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project1_Source_Project1_CustomPickupActorInterface_h_15_CALLBACK_WRAPPERS \
	Project1_Source_Project1_CustomPickupActorInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project1_Source_Project1_CustomPickupActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
