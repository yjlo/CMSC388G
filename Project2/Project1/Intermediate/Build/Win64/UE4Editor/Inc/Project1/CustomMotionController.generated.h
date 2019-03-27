// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTeleportDestinationTransform;
class AActor;
#ifdef PROJECT1_CustomMotionController_generated_h
#error "CustomMotionController.generated.h already included, missing '#pragma once' in CustomMotionController.h"
#endif
#define PROJECT1_CustomMotionController_generated_h

#define Project1_Source_Project1_CustomMotionController_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTeleportDestinationTransform_Statics; \
	PROJECT1_API static class UScriptStruct* StaticStruct();


#define Project1_Source_Project1_CustomMotionController_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRightSnap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RightSnap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftSnap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeftSnap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTeleportDestinationTransform*)Z_Param__Result=P_THIS->GetTeleportDestination(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorNearHand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorNearHand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearArc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearArc(); \
		P_NATIVE_END; \
	}


#define Project1_Source_Project1_CustomMotionController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRightSnap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RightSnap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftSnap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeftSnap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTeleportDestinationTransform*)Z_Param__Result=P_THIS->GetTeleportDestination(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorNearHand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorNearHand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearArc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearArc(); \
		P_NATIVE_END; \
	}


#define Project1_Source_Project1_CustomMotionController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomMotionController(); \
	friend struct Z_Construct_UClass_ACustomMotionController_Statics; \
public: \
	DECLARE_CLASS(ACustomMotionController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Project1"), NO_API) \
	DECLARE_SERIALIZER(ACustomMotionController)


#define Project1_Source_Project1_CustomMotionController_h_26_INCLASS \
private: \
	static void StaticRegisterNativesACustomMotionController(); \
	friend struct Z_Construct_UClass_ACustomMotionController_Statics; \
public: \
	DECLARE_CLASS(ACustomMotionController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Project1"), NO_API) \
	DECLARE_SERIALIZER(ACustomMotionController)


#define Project1_Source_Project1_CustomMotionController_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomMotionController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomMotionController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomMotionController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomMotionController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomMotionController(ACustomMotionController&&); \
	NO_API ACustomMotionController(const ACustomMotionController&); \
public:


#define Project1_Source_Project1_CustomMotionController_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomMotionController(ACustomMotionController&&); \
	NO_API ACustomMotionController(const ACustomMotionController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomMotionController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomMotionController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomMotionController)


#define Project1_Source_Project1_CustomMotionController_h_26_PRIVATE_PROPERTY_OFFSET
#define Project1_Source_Project1_CustomMotionController_h_23_PROLOG
#define Project1_Source_Project1_CustomMotionController_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project1_Source_Project1_CustomMotionController_h_26_PRIVATE_PROPERTY_OFFSET \
	Project1_Source_Project1_CustomMotionController_h_26_RPC_WRAPPERS \
	Project1_Source_Project1_CustomMotionController_h_26_INCLASS \
	Project1_Source_Project1_CustomMotionController_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project1_Source_Project1_CustomMotionController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project1_Source_Project1_CustomMotionController_h_26_PRIVATE_PROPERTY_OFFSET \
	Project1_Source_Project1_CustomMotionController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Project1_Source_Project1_CustomMotionController_h_26_INCLASS_NO_PURE_DECLS \
	Project1_Source_Project1_CustomMotionController_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project1_Source_Project1_CustomMotionController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
