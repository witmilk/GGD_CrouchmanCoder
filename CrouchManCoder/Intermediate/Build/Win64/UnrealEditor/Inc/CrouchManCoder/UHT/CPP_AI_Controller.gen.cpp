// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrouchManCoder/Public/CPP_AI_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_AI_Controller() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	CROUCHMANCODER_API UClass* Z_Construct_UClass_ACPP_AI_Controller();
	CROUCHMANCODER_API UClass* Z_Construct_UClass_ACPP_AI_Controller_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CrouchManCoder();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_AI_Controller::execLookForObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookForObject();
		P_NATIVE_END;
	}
	void ACPP_AI_Controller::StaticRegisterNativesACPP_AI_Controller()
	{
		UClass* Class = ACPP_AI_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LookForObject", &ACPP_AI_Controller::execLookForObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_AI_Controller_LookForObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_AI_Controller_LookForObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_AI_Controller.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_AI_Controller_LookForObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_AI_Controller, nullptr, "LookForObject", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_AI_Controller_LookForObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_AI_Controller_LookForObject_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACPP_AI_Controller_LookForObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_AI_Controller_LookForObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_AI_Controller);
	UClass* Z_Construct_UClass_ACPP_AI_Controller_NoRegister()
	{
		return ACPP_AI_Controller::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_AI_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_AI_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_CrouchManCoder,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_AI_Controller_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_AI_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_AI_Controller_LookForObject, "LookForObject" }, // 4012481457
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_AI_Controller_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_AI_Controller_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CPP_AI_Controller.h" },
		{ "ModuleRelativePath", "Public/CPP_AI_Controller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_AI_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_AI_Controller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_AI_Controller_Statics::ClassParams = {
		&ACPP_AI_Controller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_AI_Controller_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_AI_Controller_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACPP_AI_Controller()
	{
		if (!Z_Registration_Info_UClass_ACPP_AI_Controller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_AI_Controller.OuterSingleton, Z_Construct_UClass_ACPP_AI_Controller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_AI_Controller.OuterSingleton;
	}
	template<> CROUCHMANCODER_API UClass* StaticClass<ACPP_AI_Controller>()
	{
		return ACPP_AI_Controller::StaticClass();
	}
	ACPP_AI_Controller::ACPP_AI_Controller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_AI_Controller);
	ACPP_AI_Controller::~ACPP_AI_Controller() {}
	struct Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_CPP_AI_Controller_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_CPP_AI_Controller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_AI_Controller, ACPP_AI_Controller::StaticClass, TEXT("ACPP_AI_Controller"), &Z_Registration_Info_UClass_ACPP_AI_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_AI_Controller), 3547695241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_CPP_AI_Controller_h_1596156535(TEXT("/Script/CrouchManCoder"),
		Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_CPP_AI_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_CPP_AI_Controller_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
