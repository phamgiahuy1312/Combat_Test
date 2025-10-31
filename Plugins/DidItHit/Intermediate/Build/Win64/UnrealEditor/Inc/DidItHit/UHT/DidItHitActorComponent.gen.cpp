// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DidItHitActorComponent.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDidItHitActorComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DIDITHIT_API UClass* Z_Construct_UClass_UDidItHitActorComponent();
DIDITHIT_API UClass* Z_Construct_UClass_UDidItHitActorComponent_NoRegister();
DIDITHIT_API UEnum* Z_Construct_UEnum_DidItHit_EKismetTraceType();
DIDITHIT_API UFunction* Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_DidItHit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EKismetTraceType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKismetTraceType;
static UEnum* EKismetTraceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKismetTraceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKismetTraceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DidItHit_EKismetTraceType, (UObject*)Z_Construct_UPackage__Script_DidItHit(), TEXT("EKismetTraceType"));
	}
	return Z_Registration_Info_UEnum_EKismetTraceType.OuterSingleton;
}
template<> DIDITHIT_API UEnum* StaticEnum<EKismetTraceType>()
{
	return EKismetTraceType_StaticEnum();
}
struct Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoxTrace.DisplayName", "Box Trace" },
		{ "BoxTrace.Name", "EKismetTraceType::BoxTrace" },
		{ "CapsuleTrace.DisplayName", "Capsule Trace" },
		{ "CapsuleTrace.Name", "EKismetTraceType::CapsuleTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*There are 10^11 stars in the galaxy.\nThat used to be a huge number.\nBut it's only a hundred billion.\nIt's less than the national deficit!\nWe used to call them astronomical numbers.\nNow we should call them economical numbers.*/" },
#endif
		{ "LineTrace.DisplayName", "Line Trace" },
		{ "LineTrace.Name", "EKismetTraceType::LineTrace" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
		{ "SphereTrace.DisplayName", "Sphere Trace" },
		{ "SphereTrace.Name", "EKismetTraceType::SphereTrace" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "There are 10^11 stars in the galaxy.\nThat used to be a huge number.\nBut it's only a hundred billion.\nIt's less than the national deficit!\nWe used to call them astronomical numbers.\nNow we should call them economical numbers." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKismetTraceType::LineTrace", (int64)EKismetTraceType::LineTrace },
		{ "EKismetTraceType::BoxTrace", (int64)EKismetTraceType::BoxTrace },
		{ "EKismetTraceType::CapsuleTrace", (int64)EKismetTraceType::CapsuleTrace },
		{ "EKismetTraceType::SphereTrace", (int64)EKismetTraceType::SphereTrace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DidItHit,
	nullptr,
	"EKismetTraceType",
	"EKismetTraceType",
	Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DidItHit_EKismetTraceType()
{
	if (!Z_Registration_Info_UEnum_EKismetTraceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKismetTraceType.InnerSingleton, Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKismetTraceType.InnerSingleton;
}
// ********** End Enum EKismetTraceType ************************************************************

// ********** Begin Delegate FOnItemAdded **********************************************************
struct Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics
{
	struct _Script_DidItHit_eventOnItemAdded_Parms
	{
		FHitResult LastItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::NewProp_LastItem = { "LastItem", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DidItHit_eventOnItemAdded_Parms, LastItem), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::NewProp_LastItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DidItHit, nullptr, "OnItemAdded__DelegateSignature", Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::_Script_DidItHit_eventOnItemAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::_Script_DidItHit_eventOnItemAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, FHitResult LastItem)
{
	struct _Script_DidItHit_eventOnItemAdded_Parms
	{
		FHitResult LastItem;
	};
	_Script_DidItHit_eventOnItemAdded_Parms Parms;
	Parms.LastItem=LastItem;
	OnItemAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemAdded ************************************************************

// ********** Begin Class UDidItHitActorComponent Function AddHitToHitArray ************************
struct Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics
{
	struct DidItHitActorComponent_eventAddHitToHitArray_Parms
	{
		TArray<FHitResult> HitArrayToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitArrayToAdd_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitArrayToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::NewProp_HitArrayToAdd_Inner = { "HitArrayToAdd", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::NewProp_HitArrayToAdd = { "HitArrayToAdd", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DidItHitActorComponent_eventAddHitToHitArray_Parms, HitArrayToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::NewProp_HitArrayToAdd_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::NewProp_HitArrayToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDidItHitActorComponent, nullptr, "AddHitToHitArray", Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::DidItHitActorComponent_eventAddHitToHitArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::DidItHitActorComponent_eventAddHitToHitArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDidItHitActorComponent::execAddHitToHitArray)
{
	P_GET_TARRAY(FHitResult,Z_Param_HitArrayToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHitToHitArray(Z_Param_HitArrayToAdd);
	P_NATIVE_END;
}
// ********** End Class UDidItHitActorComponent Function AddHitToHitArray **************************

// ********** Begin Class UDidItHitActorComponent Function ClearHitArray ***************************
struct Z_Construct_UFunction_UDidItHitActorComponent_ClearHitArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Did It Hit?" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDidItHitActorComponent_ClearHitArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDidItHitActorComponent, nullptr, "ClearHitArray", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_ClearHitArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDidItHitActorComponent_ClearHitArray_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDidItHitActorComponent_ClearHitArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDidItHitActorComponent_ClearHitArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDidItHitActorComponent::execClearHitArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearHitArray();
	P_NATIVE_END;
}
// ********** End Class UDidItHitActorComponent Function ClearHitArray *****************************

// ********** Begin Class UDidItHitActorComponent Function ClearSocketLocationMap ******************
struct Z_Construct_UFunction_UDidItHitActorComponent_ClearSocketLocationMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Did It Hit?" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDidItHitActorComponent_ClearSocketLocationMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDidItHitActorComponent, nullptr, "ClearSocketLocationMap", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_ClearSocketLocationMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDidItHitActorComponent_ClearSocketLocationMap_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDidItHitActorComponent_ClearSocketLocationMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDidItHitActorComponent_ClearSocketLocationMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDidItHitActorComponent::execClearSocketLocationMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSocketLocationMap();
	P_NATIVE_END;
}
// ********** End Class UDidItHitActorComponent Function ClearSocketLocationMap ********************

// ********** Begin Class UDidItHitActorComponent Function GetPrimaryComponent *********************
struct Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics
{
	struct DidItHitActorComponent_eventGetPrimaryComponent_Parms
	{
		AActor* ActorTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gets the primitive component\n" },
#endif
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the primitive component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::NewProp_ActorTarget = { "ActorTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DidItHitActorComponent_eventGetPrimaryComponent_Parms, ActorTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::NewProp_ActorTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDidItHitActorComponent, nullptr, "GetPrimaryComponent", Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::DidItHitActorComponent_eventGetPrimaryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::DidItHitActorComponent_eventGetPrimaryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDidItHitActorComponent::execGetPrimaryComponent)
{
	P_GET_OBJECT(AActor,Z_Param_ActorTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPrimaryComponent(Z_Param_ActorTarget);
	P_NATIVE_END;
}
// ********** End Class UDidItHitActorComponent Function GetPrimaryComponent ***********************

// ********** Begin Class UDidItHitActorComponent Function GetSocket_t0 ****************************
struct Z_Construct_UFunction_UDidItHitActorComponent_GetSocket_t0_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDidItHitActorComponent_GetSocket_t0_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDidItHitActorComponent, nullptr, "GetSocket_t0", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_GetSocket_t0_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDidItHitActorComponent_GetSocket_t0_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDidItHitActorComponent_GetSocket_t0()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDidItHitActorComponent_GetSocket_t0_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDidItHitActorComponent::execGetSocket_t0)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSocket_t0();
	P_NATIVE_END;
}
// ********** End Class UDidItHitActorComponent Function GetSocket_t0 ******************************

// ********** Begin Class UDidItHitActorComponent Function GetSockets ******************************
struct Z_Construct_UFunction_UDidItHitActorComponent_GetSockets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gets the sockets\n" },
#endif
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the sockets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDidItHitActorComponent_GetSockets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDidItHitActorComponent, nullptr, "GetSockets", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_GetSockets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDidItHitActorComponent_GetSockets_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDidItHitActorComponent_GetSockets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDidItHitActorComponent_GetSockets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDidItHitActorComponent::execGetSockets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSockets();
	P_NATIVE_END;
}
// ********** End Class UDidItHitActorComponent Function GetSockets ********************************

// ********** Begin Class UDidItHitActorComponent Function SetupVariables **************************
struct Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics
{
	struct DidItHitActorComponent_eventSetupVariables_Parms
	{
		UPrimitiveComponent* MyPrimitiveTarget;
		AActor* MyActorTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Did It Hit?" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////\n//A Blueprint callable event to be set in the constructor of the owner to setup the actor or weapon to derive the primitive and therefore the sockets\n" },
#endif
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Blueprint callable event to be set in the constructor of the owner to setup the actor or weapon to derive the primitive and therefore the sockets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyPrimitiveTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyPrimitiveTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActorTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::NewProp_MyPrimitiveTarget = { "MyPrimitiveTarget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DidItHitActorComponent_eventSetupVariables_Parms, MyPrimitiveTarget), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyPrimitiveTarget_MetaData), NewProp_MyPrimitiveTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::NewProp_MyActorTarget = { "MyActorTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DidItHitActorComponent_eventSetupVariables_Parms, MyActorTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::NewProp_MyPrimitiveTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::NewProp_MyActorTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDidItHitActorComponent, nullptr, "SetupVariables", Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::DidItHitActorComponent_eventSetupVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::DidItHitActorComponent_eventSetupVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDidItHitActorComponent::execSetupVariables)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyPrimitiveTarget);
	P_GET_OBJECT(AActor,Z_Param_MyActorTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupVariables(Z_Param_MyPrimitiveTarget,Z_Param_MyActorTarget);
	P_NATIVE_END;
}
// ********** End Class UDidItHitActorComponent Function SetupVariables ****************************

// ********** Begin Class UDidItHitActorComponent Function ToggleTraceCheck ************************
struct Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics
{
	struct DidItHitActorComponent_eventToggleTraceCheck_Parms
	{
		bool CanTraceInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Did It Hit?" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CanTraceInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanTraceInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::NewProp_CanTraceInput_SetBit(void* Obj)
{
	((DidItHitActorComponent_eventToggleTraceCheck_Parms*)Obj)->CanTraceInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::NewProp_CanTraceInput = { "CanTraceInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DidItHitActorComponent_eventToggleTraceCheck_Parms), &Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::NewProp_CanTraceInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::NewProp_CanTraceInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDidItHitActorComponent, nullptr, "ToggleTraceCheck", Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::DidItHitActorComponent_eventToggleTraceCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::DidItHitActorComponent_eventToggleTraceCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDidItHitActorComponent::execToggleTraceCheck)
{
	P_GET_UBOOL(Z_Param_CanTraceInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleTraceCheck(Z_Param_CanTraceInput);
	P_NATIVE_END;
}
// ********** End Class UDidItHitActorComponent Function ToggleTraceCheck **************************

// ********** Begin Class UDidItHitActorComponent Function UpdateLastSocketLocation ****************
struct Z_Construct_UFunction_UDidItHitActorComponent_UpdateLastSocketLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////\n//Updates a map of the socket names and the vector location\n" },
#endif
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates a map of the socket names and the vector location" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDidItHitActorComponent_UpdateLastSocketLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDidItHitActorComponent, nullptr, "UpdateLastSocketLocation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDidItHitActorComponent_UpdateLastSocketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDidItHitActorComponent_UpdateLastSocketLocation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDidItHitActorComponent_UpdateLastSocketLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDidItHitActorComponent_UpdateLastSocketLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDidItHitActorComponent::execUpdateLastSocketLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLastSocketLocation();
	P_NATIVE_END;
}
// ********** End Class UDidItHitActorComponent Function UpdateLastSocketLocation ******************

// ********** Begin Class UDidItHitActorComponent **************************************************
void UDidItHitActorComponent::StaticRegisterNativesUDidItHitActorComponent()
{
	UClass* Class = UDidItHitActorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddHitToHitArray", &UDidItHitActorComponent::execAddHitToHitArray },
		{ "ClearHitArray", &UDidItHitActorComponent::execClearHitArray },
		{ "ClearSocketLocationMap", &UDidItHitActorComponent::execClearSocketLocationMap },
		{ "GetPrimaryComponent", &UDidItHitActorComponent::execGetPrimaryComponent },
		{ "GetSocket_t0", &UDidItHitActorComponent::execGetSocket_t0 },
		{ "GetSockets", &UDidItHitActorComponent::execGetSockets },
		{ "SetupVariables", &UDidItHitActorComponent::execSetupVariables },
		{ "ToggleTraceCheck", &UDidItHitActorComponent::execToggleTraceCheck },
		{ "UpdateLastSocketLocation", &UDidItHitActorComponent::execUpdateLastSocketLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDidItHitActorComponent;
UClass* UDidItHitActorComponent::GetPrivateStaticClass()
{
	using TClass = UDidItHitActorComponent;
	if (!Z_Registration_Info_UClass_UDidItHitActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DidItHitActorComponent"),
			Z_Registration_Info_UClass_UDidItHitActorComponent.InnerSingleton,
			StaticRegisterNativesUDidItHitActorComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UDidItHitActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UDidItHitActorComponent_NoRegister()
{
	return UDidItHitActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDidItHitActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "AC_DidItHit" },
		{ "IncludePath", "DidItHitActorComponent.h" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAdded_MetaData[] = {
		{ "Category", "AC_DidItHit" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyStaticMeshComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Required to determine sockets locations\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Required to determine sockets locations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyPrimitive_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Required to determine sockets locations\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Required to determine sockets locations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fallback in case no primitive or staticmesh comp is available\n" },
#endif
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fallback in case no primitive or staticmesh comp is available" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MySockets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The whole point of the plugin\n" },
#endif
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The whole point of the plugin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownSocketLocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To keep sockets in memory and their previous locations\n" },
#endif
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To keep sockets in memory and their previous locations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitSameSocketAtDifferentTimes_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will trace between the same socket at different times" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitOtherSocketsAtSameTime_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will trace between the different sockets at the same time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitOtherSocketsAtDifferentTime_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will trace between the different socket at different times" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuloSkip_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modulo skip factor. Can be used to skip ticks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkipStringFilter_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "String filter to skip socket names containing this string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InclusionStringFilter_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "String filter to only include socket names containing this string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuloNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitArray_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return Value for the plugin. It is a raw hit struct and can be broken down further." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanTrace_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Boolean used during Tick\n" },
#endif
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Boolean used during Tick" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseKismet_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Kismet will use the regular nodes in blueprints however may be more costly. Great for debugging though!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceByChannelOrObjects_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "If True, will trace by channel; otherwise will trace for objects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxHalfSize_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "In case you use BoxTrace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxOrientation_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "In case you use BoxTrace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "In case you use CapsuleTrace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "In case you use CapsuleTrace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "In case you use SphereTrace" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyKismetTraceType_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Allows to change from the regular line trace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyTraceChannel_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "In case you trace by channel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyObjectTypesToHit_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "In case you trace for objects (array)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldTraceComplex_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "True means trace complex, false means trace simple collisions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyActorsToIgnore_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Actors to ignore (array)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldIgnoreSelf_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "True means it will ignore self." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyDrawTime_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Custom duration for draw time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyTraceColor_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Color when tracing but not hitting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyTraceHitColor_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Color when hitting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyDrawDebugType_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "How you want to debug the trace if at all." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyWorldContextObject_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DidItHitActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Set by default to this. Do not change unless you know what it does." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAdded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyStaticMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyPrimitive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MySockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MySockets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastKnownSocketLocation_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LastKnownSocketLocation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LastKnownSocketLocation;
	static void NewProp_bHitSameSocketAtDifferentTimes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitSameSocketAtDifferentTimes;
	static void NewProp_bHitOtherSocketsAtSameTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitOtherSocketsAtSameTime;
	static void NewProp_bHitOtherSocketsAtDifferentTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitOtherSocketsAtDifferentTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ModuloSkip;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkipStringFilter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InclusionStringFilter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ModuloNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitArray;
	static void NewProp_CanTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanTrace;
	static void NewProp_UseKismet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseKismet;
	static void NewProp_TraceByChannelOrObjects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceByChannelOrObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxHalfSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxOrientation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MyKismetTraceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MyKismetTraceType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MyTraceChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MyObjectTypesToHit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MyObjectTypesToHit;
	static void NewProp_ShouldTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MyActorsToIgnore;
	static void NewProp_ShouldIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldIgnoreSelf;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyDrawTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyTraceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyTraceHitColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MyDrawDebugType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyWorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDidItHitActorComponent_AddHitToHitArray, "AddHitToHitArray" }, // 3659043605
		{ &Z_Construct_UFunction_UDidItHitActorComponent_ClearHitArray, "ClearHitArray" }, // 2011184433
		{ &Z_Construct_UFunction_UDidItHitActorComponent_ClearSocketLocationMap, "ClearSocketLocationMap" }, // 726463366
		{ &Z_Construct_UFunction_UDidItHitActorComponent_GetPrimaryComponent, "GetPrimaryComponent" }, // 4004298991
		{ &Z_Construct_UFunction_UDidItHitActorComponent_GetSocket_t0, "GetSocket_t0" }, // 1475672226
		{ &Z_Construct_UFunction_UDidItHitActorComponent_GetSockets, "GetSockets" }, // 1245887870
		{ &Z_Construct_UFunction_UDidItHitActorComponent_SetupVariables, "SetupVariables" }, // 1780246944
		{ &Z_Construct_UFunction_UDidItHitActorComponent_ToggleTraceCheck, "ToggleTraceCheck" }, // 4239068969
		{ &Z_Construct_UFunction_UDidItHitActorComponent_UpdateLastSocketLocation, "UpdateLastSocketLocation" }, // 158814897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDidItHitActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_OnItemAdded = { "OnItemAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, OnItemAdded), Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemAdded_MetaData), NewProp_OnItemAdded_MetaData) }; // 2350496217
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyStaticMeshComponent = { "MyStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyStaticMeshComponent_MetaData), NewProp_MyStaticMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyPrimitive = { "MyPrimitive", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyPrimitive_MetaData), NewProp_MyPrimitive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyActor = { "MyActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyActor_MetaData), NewProp_MyActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MySockets_Inner = { "MySockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MySockets = { "MySockets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MySockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MySockets_MetaData), NewProp_MySockets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_LastKnownSocketLocation_ValueProp = { "LastKnownSocketLocation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_LastKnownSocketLocation_Key_KeyProp = { "LastKnownSocketLocation_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_LastKnownSocketLocation = { "LastKnownSocketLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, LastKnownSocketLocation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownSocketLocation_MetaData), NewProp_LastKnownSocketLocation_MetaData) };
void Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitSameSocketAtDifferentTimes_SetBit(void* Obj)
{
	((UDidItHitActorComponent*)Obj)->bHitSameSocketAtDifferentTimes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitSameSocketAtDifferentTimes = { "bHitSameSocketAtDifferentTimes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDidItHitActorComponent), &Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitSameSocketAtDifferentTimes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitSameSocketAtDifferentTimes_MetaData), NewProp_bHitSameSocketAtDifferentTimes_MetaData) };
void Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtSameTime_SetBit(void* Obj)
{
	((UDidItHitActorComponent*)Obj)->bHitOtherSocketsAtSameTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtSameTime = { "bHitOtherSocketsAtSameTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDidItHitActorComponent), &Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtSameTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitOtherSocketsAtSameTime_MetaData), NewProp_bHitOtherSocketsAtSameTime_MetaData) };
void Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtDifferentTime_SetBit(void* Obj)
{
	((UDidItHitActorComponent*)Obj)->bHitOtherSocketsAtDifferentTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtDifferentTime = { "bHitOtherSocketsAtDifferentTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDidItHitActorComponent), &Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtDifferentTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitOtherSocketsAtDifferentTime_MetaData), NewProp_bHitOtherSocketsAtDifferentTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ModuloSkip = { "ModuloSkip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, ModuloSkip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuloSkip_MetaData), NewProp_ModuloSkip_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_SkipStringFilter = { "SkipStringFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, SkipStringFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkipStringFilter_MetaData), NewProp_SkipStringFilter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_InclusionStringFilter = { "InclusionStringFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, InclusionStringFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InclusionStringFilter_MetaData), NewProp_InclusionStringFilter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ModuloNumber = { "ModuloNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, ModuloNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuloNumber_MetaData), NewProp_ModuloNumber_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_HitArray_Inner = { "HitArray", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_HitArray = { "HitArray", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, HitArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitArray_MetaData), NewProp_HitArray_MetaData) }; // 267591329
void Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_CanTrace_SetBit(void* Obj)
{
	((UDidItHitActorComponent*)Obj)->CanTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_CanTrace = { "CanTrace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDidItHitActorComponent), &Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_CanTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanTrace_MetaData), NewProp_CanTrace_MetaData) };
void Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_UseKismet_SetBit(void* Obj)
{
	((UDidItHitActorComponent*)Obj)->UseKismet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_UseKismet = { "UseKismet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDidItHitActorComponent), &Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_UseKismet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseKismet_MetaData), NewProp_UseKismet_MetaData) };
void Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_TraceByChannelOrObjects_SetBit(void* Obj)
{
	((UDidItHitActorComponent*)Obj)->TraceByChannelOrObjects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_TraceByChannelOrObjects = { "TraceByChannelOrObjects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDidItHitActorComponent), &Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_TraceByChannelOrObjects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceByChannelOrObjects_MetaData), NewProp_TraceByChannelOrObjects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_BoxHalfSize = { "BoxHalfSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, BoxHalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxHalfSize_MetaData), NewProp_BoxHalfSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_BoxOrientation = { "BoxOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, BoxOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxOrientation_MetaData), NewProp_BoxOrientation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, CapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleRadius_MetaData), NewProp_CapsuleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, CapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHalfHeight_MetaData), NewProp_CapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyKismetTraceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyKismetTraceType = { "MyKismetTraceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyKismetTraceType), Z_Construct_UEnum_DidItHit_EKismetTraceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyKismetTraceType_MetaData), NewProp_MyKismetTraceType_MetaData) }; // 193619204
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyTraceChannel = { "MyTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyTraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyTraceChannel_MetaData), NewProp_MyTraceChannel_MetaData) }; // 1673313466
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyObjectTypesToHit_Inner = { "MyObjectTypesToHit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyObjectTypesToHit = { "MyObjectTypesToHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyObjectTypesToHit), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyObjectTypesToHit_MetaData), NewProp_MyObjectTypesToHit_MetaData) }; // 1798967895
void Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ShouldTraceComplex_SetBit(void* Obj)
{
	((UDidItHitActorComponent*)Obj)->ShouldTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ShouldTraceComplex = { "ShouldTraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDidItHitActorComponent), &Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ShouldTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldTraceComplex_MetaData), NewProp_ShouldTraceComplex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyActorsToIgnore_Inner = { "MyActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyActorsToIgnore = { "MyActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyActorsToIgnore_MetaData), NewProp_MyActorsToIgnore_MetaData) };
void Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ShouldIgnoreSelf_SetBit(void* Obj)
{
	((UDidItHitActorComponent*)Obj)->ShouldIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ShouldIgnoreSelf = { "ShouldIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDidItHitActorComponent), &Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ShouldIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldIgnoreSelf_MetaData), NewProp_ShouldIgnoreSelf_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyDrawTime = { "MyDrawTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyDrawTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyDrawTime_MetaData), NewProp_MyDrawTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyTraceColor = { "MyTraceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyTraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyTraceColor_MetaData), NewProp_MyTraceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyTraceHitColor = { "MyTraceHitColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyTraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyTraceHitColor_MetaData), NewProp_MyTraceHitColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyDrawDebugType = { "MyDrawDebugType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyDrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyDrawDebugType_MetaData), NewProp_MyDrawDebugType_MetaData) }; // 2070357899
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyWorldContextObject = { "MyWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDidItHitActorComponent, MyWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyWorldContextObject_MetaData), NewProp_MyWorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDidItHitActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_OnItemAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyStaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyPrimitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MySockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MySockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_LastKnownSocketLocation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_LastKnownSocketLocation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_LastKnownSocketLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitSameSocketAtDifferentTimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtSameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtDifferentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ModuloSkip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_SkipStringFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_InclusionStringFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ModuloNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_HitArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_HitArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_CanTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_UseKismet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_TraceByChannelOrObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_BoxHalfSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_BoxOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_CapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_CapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyKismetTraceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyKismetTraceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyObjectTypesToHit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyObjectTypesToHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ShouldTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_ShouldIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyDrawTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyTraceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyTraceHitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyDrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDidItHitActorComponent_Statics::NewProp_MyWorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDidItHitActorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDidItHitActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DidItHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDidItHitActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDidItHitActorComponent_Statics::ClassParams = {
	&UDidItHitActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDidItHitActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDidItHitActorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDidItHitActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDidItHitActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDidItHitActorComponent()
{
	if (!Z_Registration_Info_UClass_UDidItHitActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDidItHitActorComponent.OuterSingleton, Z_Construct_UClass_UDidItHitActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDidItHitActorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDidItHitActorComponent);
UDidItHitActorComponent::~UDidItHitActorComponent() {}
// ********** End Class UDidItHitActorComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h__Script_DidItHit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKismetTraceType_StaticEnum, TEXT("EKismetTraceType"), &Z_Registration_Info_UEnum_EKismetTraceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 193619204U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDidItHitActorComponent, UDidItHitActorComponent::StaticClass, TEXT("UDidItHitActorComponent"), &Z_Registration_Info_UClass_UDidItHitActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDidItHitActorComponent), 510456633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h__Script_DidItHit_335978868(TEXT("/Script/DidItHit"),
	Z_CompiledInDeferFile_FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h__Script_DidItHit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h__Script_DidItHit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h__Script_DidItHit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Huy_UE_Combo_Game_Test_Combat_HuyPG_Plugins_DidItHit_Source_DidItHit_Public_DidItHitActorComponent_h__Script_DidItHit_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
