// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef PROJECT1_PickupCube_generated_h
#error "PickupCube.generated.h already included, missing '#pragma once' in PickupCube.h"
#endif
#define PROJECT1_PickupCube_generated_h

#define Project1_Source_Project1_PickupCube_h_14_RPC_WRAPPERS \
	virtual void Drop_Implementation(); \
	virtual void Pickup_Implementation(USceneComponent* AttachTo); \
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


#define Project1_Source_Project1_PickupCube_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Project1_Source_Project1_PickupCube_h_14_EVENT_PARMS \
	struct PickupCube_eventPickup_Parms \
	{ \
		USceneComponent* AttachTo; \
	};


#define Project1_Source_Project1_PickupCube_h_14_CALLBACK_WRAPPERS
#define Project1_Source_Project1_PickupCube_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupCube(); \
	friend struct Z_Construct_UClass_APickupCube_Statics; \
public: \
	DECLARE_CLASS(APickupCube, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project1"), NO_API) \
	DECLARE_SERIALIZER(APickupCube) \
	virtual UObject* _getUObject() const override { return const_cast<APickupCube*>(this); }


#define Project1_Source_Project1_PickupCube_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPickupCube(); \
	friend struct Z_Construct_UClass_APickupCube_Statics; \
public: \
	DECLARE_CLASS(APickupCube, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Project1"), NO_API) \
	DECLARE_SERIALIZER(APickupCube) \
	virtual UObject* _getUObject() const override { return const_cast<APickupCube*>(this); }


#define Project1_Source_Project1_PickupCube_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupCube(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupCube); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupCube(APickupCube&&); \
	NO_API APickupCube(const APickupCube&); \
public:


#define Project1_Source_Project1_PickupCube_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupCube(APickupCube&&); \
	NO_API APickupCube(const APickupCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupCube)


#define Project1_Source_Project1_PickupCube_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(APickupCube, MeshComponent); }


#define Project1_Source_Project1_PickupCube_h_11_PROLOG \
	Project1_Source_Project1_PickupCube_h_14_EVENT_PARMS


#define Project1_Source_Project1_PickupCube_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project1_Source_Project1_PickupCube_h_14_PRIVATE_PROPERTY_OFFSET \
	Project1_Source_Project1_PickupCube_h_14_RPC_WRAPPERS \
	Project1_Source_Project1_PickupCube_h_14_CALLBACK_WRAPPERS \
	Project1_Source_Project1_PickupCube_h_14_INCLASS \
	Project1_Source_Project1_PickupCube_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project1_Source_Project1_PickupCube_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project1_Source_Project1_PickupCube_h_14_PRIVATE_PROPERTY_OFFSET \
	Project1_Source_Project1_PickupCube_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Project1_Source_Project1_PickupCube_h_14_CALLBACK_WRAPPERS \
	Project1_Source_Project1_PickupCube_h_14_INCLASS_NO_PURE_DECLS \
	Project1_Source_Project1_PickupCube_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project1_Source_Project1_PickupCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
