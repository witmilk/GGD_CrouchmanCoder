// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrouchManCoder/CrouchManCoderGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrouchManCoderGameMode() {}
// Cross Module References
	CROUCHMANCODER_API UClass* Z_Construct_UClass_ACrouchManCoderGameMode();
	CROUCHMANCODER_API UClass* Z_Construct_UClass_ACrouchManCoderGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CrouchManCoder();
// End Cross Module References
	void ACrouchManCoderGameMode::StaticRegisterNativesACrouchManCoderGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACrouchManCoderGameMode);
	UClass* Z_Construct_UClass_ACrouchManCoderGameMode_NoRegister()
	{
		return ACrouchManCoderGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACrouchManCoderGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrouchManCoderGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CrouchManCoder,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrouchManCoderGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrouchManCoderGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CrouchManCoderGameMode.h" },
		{ "ModuleRelativePath", "CrouchManCoderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrouchManCoderGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrouchManCoderGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrouchManCoderGameMode_Statics::ClassParams = {
		&ACrouchManCoderGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrouchManCoderGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACrouchManCoderGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACrouchManCoderGameMode()
	{
		if (!Z_Registration_Info_UClass_ACrouchManCoderGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrouchManCoderGameMode.OuterSingleton, Z_Construct_UClass_ACrouchManCoderGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACrouchManCoderGameMode.OuterSingleton;
	}
	template<> CROUCHMANCODER_API UClass* StaticClass<ACrouchManCoderGameMode>()
	{
		return ACrouchManCoderGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrouchManCoderGameMode);
	ACrouchManCoderGameMode::~ACrouchManCoderGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_CrouchManCoderGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_CrouchManCoderGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACrouchManCoderGameMode, ACrouchManCoderGameMode::StaticClass, TEXT("ACrouchManCoderGameMode"), &Z_Registration_Info_UClass_ACrouchManCoderGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrouchManCoderGameMode), 1741530524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_CrouchManCoderGameMode_h_2938020759(TEXT("/Script/CrouchManCoder"),
		Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_CrouchManCoderGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_CrouchManCoderGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
