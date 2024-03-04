// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrouchManCoder/Public/LightSwitchActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSwitchActor() {}
// Cross Module References
	CROUCHMANCODER_API UClass* Z_Construct_UClass_ALightSwitchActor();
	CROUCHMANCODER_API UClass* Z_Construct_UClass_ALightSwitchActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CrouchManCoder();
// End Cross Module References
	DEFINE_FUNCTION(ALightSwitchActor::execToggleLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLight();
		P_NATIVE_END;
	}
	void ALightSwitchActor::StaticRegisterNativesALightSwitchActor()
	{
		UClass* Class = ALightSwitchActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleLight", &ALightSwitchActor::execToggleLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightSwitchActor_ToggleLight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSwitchActor_ToggleLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light Switch" },
		{ "ModuleRelativePath", "Public/LightSwitchActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSwitchActor_ToggleLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSwitchActor, nullptr, "ToggleLight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSwitchActor_ToggleLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALightSwitchActor_ToggleLight_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALightSwitchActor_ToggleLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALightSwitchActor_ToggleLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightSwitchActor);
	UClass* Z_Construct_UClass_ALightSwitchActor_NoRegister()
	{
		return ALightSwitchActor::StaticClass();
	}
	struct Z_Construct_UClass_ALightSwitchActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LightSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightIntensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightSwitchActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrouchManCoder,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightSwitchActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightSwitchActor_ToggleLight, "ToggleLight" }, // 3278883873
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightSwitchActor.h" },
		{ "ModuleRelativePath", "Public/LightSwitchActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_PointLight_MetaData[] = {
		{ "Category", "Light Switch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//declare point light comp\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightSwitchActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "declare point light comp" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightSwitchActor, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_PointLight_MetaData), Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_PointLight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_LightSphere_MetaData[] = {
		{ "Category", "Light Switch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//declare sphere comp\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightSwitchActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "declare sphere comp" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_LightSphere = { "LightSphere", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightSwitchActor, LightSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_LightSphere_MetaData), Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_LightSphere_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_LightIntensity_MetaData[] = {
		{ "Category", "Light Switch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//declare light intensity variable\n" },
#endif
		{ "ModuleRelativePath", "Public/LightSwitchActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "declare light intensity variable" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_LightIntensity = { "LightIntensity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightSwitchActor, LightIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_LightIntensity_MetaData), Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_LightIntensity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightSwitchActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_PointLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_LightSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitchActor_Statics::NewProp_LightIntensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightSwitchActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightSwitchActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightSwitchActor_Statics::ClassParams = {
		&ALightSwitchActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightSwitchActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightSwitchActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitchActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALightSwitchActor()
	{
		if (!Z_Registration_Info_UClass_ALightSwitchActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightSwitchActor.OuterSingleton, Z_Construct_UClass_ALightSwitchActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALightSwitchActor.OuterSingleton;
	}
	template<> CROUCHMANCODER_API UClass* StaticClass<ALightSwitchActor>()
	{
		return ALightSwitchActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightSwitchActor);
	ALightSwitchActor::~ALightSwitchActor() {}
	struct Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_LightSwitchActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_LightSwitchActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALightSwitchActor, ALightSwitchActor::StaticClass, TEXT("ALightSwitchActor"), &Z_Registration_Info_UClass_ALightSwitchActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightSwitchActor), 1531526520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_LightSwitchActor_h_2792498472(TEXT("/Script/CrouchManCoder"),
		Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_LightSwitchActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_LightSwitchActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
