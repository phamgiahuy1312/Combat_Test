// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DidItHitActorComponent.h"

#ifdef DIDITHIT_DidItHitActorComponent_generated_h
#error "DidItHitActorComponent.generated.h already included, missing '#pragma once' in DidItHitActorComponent.h"
#endif
#define DIDITHIT_DidItHitActorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Delegate FOnItemAdded **********************************************************
#define FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_31_DELEGATE \
DIDITHIT_API void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, FHitResult LastItem);


// ********** End Delegate FOnItemAdded ************************************************************

// ********** Begin Class UDidItHitActorComponent **************************************************
#define FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSocket_t0); \
	DECLARE_FUNCTION(execClearSocketLocationMap); \
	DECLARE_FUNCTION(execClearHitArray); \
	DECLARE_FUNCTION(execToggleTraceCheck); \
	DECLARE_FUNCTION(execAddHitToHitArray); \
	DECLARE_FUNCTION(execGetSockets); \
	DECLARE_FUNCTION(execGetPrimaryComponent); \
	DECLARE_FUNCTION(execUpdateLastSocketLocation); \
	DECLARE_FUNCTION(execSetupVariables);


DIDITHIT_API UClass* Z_Construct_UClass_UDidItHitActorComponent_NoRegister();

#define FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDidItHitActorComponent(); \
	friend struct Z_Construct_UClass_UDidItHitActorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DIDITHIT_API UClass* Z_Construct_UClass_UDidItHitActorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDidItHitActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DidItHit"), Z_Construct_UClass_UDidItHitActorComponent_NoRegister) \
	DECLARE_SERIALIZER(UDidItHitActorComponent)


#define FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDidItHitActorComponent(UDidItHitActorComponent&&) = delete; \
	UDidItHitActorComponent(const UDidItHitActorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDidItHitActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDidItHitActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDidItHitActorComponent) \
	NO_API virtual ~UDidItHitActorComponent();


#define FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_33_PROLOG
#define FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_INCLASS_NO_PURE_DECLS \
	FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDidItHitActorComponent;

// ********** End Class UDidItHitActorComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h

// ********** Begin Enum EKismetTraceType **********************************************************
#define FOREACH_ENUM_EKISMETTRACETYPE(op) \
	op(EKismetTraceType::LineTrace) \
	op(EKismetTraceType::BoxTrace) \
	op(EKismetTraceType::CapsuleTrace) \
	op(EKismetTraceType::SphereTrace) 

enum class EKismetTraceType : uint8;
template<> struct TIsUEnumClass<EKismetTraceType> { enum { Value = true }; };
template<> DIDITHIT_API UEnum* StaticEnum<EKismetTraceType>();
// ********** End Enum EKismetTraceType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
