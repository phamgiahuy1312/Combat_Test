// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DidItHitActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DIDITHIT_DidItHitActorComponent_generated_h
#error "DidItHitActorComponent.generated.h already included, missing '#pragma once' in DidItHitActorComponent.h"
#endif
#define DIDITHIT_DidItHitActorComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_31_DELEGATE \
struct _Script_DidItHit_eventOnItemAdded_Parms \
{ \
	FHitResult LastItem; \
}; \
static inline void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, FHitResult LastItem) \
{ \
	_Script_DidItHit_eventOnItemAdded_Parms Parms; \
	Parms.LastItem=LastItem; \
	OnItemAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSocket_t0); \
	DECLARE_FUNCTION(execClearSocketLocationMap); \
	DECLARE_FUNCTION(execClearHitArray); \
	DECLARE_FUNCTION(execToggleTraceCheck); \
	DECLARE_FUNCTION(execAddHitToHitArray); \
	DECLARE_FUNCTION(execGetSockets); \
	DECLARE_FUNCTION(execGetPrimaryComponent); \
	DECLARE_FUNCTION(execUpdateLastSocketLocation); \
	DECLARE_FUNCTION(execSetupVariables);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSocket_t0); \
	DECLARE_FUNCTION(execClearSocketLocationMap); \
	DECLARE_FUNCTION(execClearHitArray); \
	DECLARE_FUNCTION(execToggleTraceCheck); \
	DECLARE_FUNCTION(execAddHitToHitArray); \
	DECLARE_FUNCTION(execGetSockets); \
	DECLARE_FUNCTION(execGetPrimaryComponent); \
	DECLARE_FUNCTION(execUpdateLastSocketLocation); \
	DECLARE_FUNCTION(execSetupVariables);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDidItHitActorComponent(); \
	friend struct Z_Construct_UClass_UDidItHitActorComponent_Statics; \
public: \
	DECLARE_CLASS(UDidItHitActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DidItHit"), NO_API) \
	DECLARE_SERIALIZER(UDidItHitActorComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUDidItHitActorComponent(); \
	friend struct Z_Construct_UClass_UDidItHitActorComponent_Statics; \
public: \
	DECLARE_CLASS(UDidItHitActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DidItHit"), NO_API) \
	DECLARE_SERIALIZER(UDidItHitActorComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDidItHitActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDidItHitActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDidItHitActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDidItHitActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDidItHitActorComponent(UDidItHitActorComponent&&); \
	NO_API UDidItHitActorComponent(const UDidItHitActorComponent&); \
public: \
	NO_API virtual ~UDidItHitActorComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDidItHitActorComponent(UDidItHitActorComponent&&); \
	NO_API UDidItHitActorComponent(const UDidItHitActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDidItHitActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDidItHitActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDidItHitActorComponent) \
	NO_API virtual ~UDidItHitActorComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_33_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIDITHIT_API UClass* StaticClass<class UDidItHitActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h


#define FOREACH_ENUM_EKISMETTRACETYPE(op) \
	op(EKismetTraceType::LineTrace) \
	op(EKismetTraceType::BoxTrace) \
	op(EKismetTraceType::CapsuleTrace) \
	op(EKismetTraceType::SphereTrace) 

enum class EKismetTraceType : uint8;
template<> struct TIsUEnumClass<EKismetTraceType> { enum { Value = true }; };
template<> DIDITHIT_API UEnum* StaticEnum<EKismetTraceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
