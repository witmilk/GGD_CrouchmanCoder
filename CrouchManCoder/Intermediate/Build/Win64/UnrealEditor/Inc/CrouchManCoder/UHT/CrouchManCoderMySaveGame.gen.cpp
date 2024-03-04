// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrouchManCoder/Public/CrouchManCoderMySaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrouchManCoderMySaveGame() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CROUCHMANCODER_API UClass* Z_Construct_UClass_UCrouchManCoderMySaveGame();
	CROUCHMANCODER_API UClass* Z_Construct_UClass_UCrouchManCoderMySaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_CrouchManCoder();
// End Cross Module References
	void UCrouchManCoderMySaveGame::StaticRegisterNativesUCrouchManCoderMySaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrouchManCoderMySaveGame);
	UClass* Z_Construct_UClass_UCrouchManCoderMySaveGame_NoRegister()
	{
		return UCrouchManCoderMySaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_CrouchManCoder,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CrouchManCoderMySaveGame.h" },
		{ "ModuleRelativePath", "Public/CrouchManCoderMySaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::NewProp_PlayerTransform_MetaData[] = {
		{ "Category", "CrouchManCoderMySaveGame" },
		{ "ModuleRelativePath", "Public/CrouchManCoderMySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::NewProp_PlayerTransform = { "PlayerTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrouchManCoderMySaveGame, PlayerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::NewProp_PlayerTransform_MetaData), Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::NewProp_PlayerTransform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::NewProp_PlayerTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrouchManCoderMySaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::ClassParams = {
		&UCrouchManCoderMySaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCrouchManCoderMySaveGame()
	{
		if (!Z_Registration_Info_UClass_UCrouchManCoderMySaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrouchManCoderMySaveGame.OuterSingleton, Z_Construct_UClass_UCrouchManCoderMySaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrouchManCoderMySaveGame.OuterSingleton;
	}
	template<> CROUCHMANCODER_API UClass* StaticClass<UCrouchManCoderMySaveGame>()
	{
		return UCrouchManCoderMySaveGame::StaticClass();
	}
	UCrouchManCoderMySaveGame::UCrouchManCoderMySaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrouchManCoderMySaveGame);
	UCrouchManCoderMySaveGame::~UCrouchManCoderMySaveGame() {}
	struct Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_CrouchManCoderMySaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_CrouchManCoderMySaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCrouchManCoderMySaveGame, UCrouchManCoderMySaveGame::StaticClass, TEXT("UCrouchManCoderMySaveGame"), &Z_Registration_Info_UClass_UCrouchManCoderMySaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrouchManCoderMySaveGame), 134934943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_CrouchManCoderMySaveGame_h_711471167(TEXT("/Script/CrouchManCoder"),
		Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_CrouchManCoderMySaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_CrouchManCoderMySaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
