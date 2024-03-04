// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrouchManCoder/Public/ChestCannonComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChestCannonComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CROUCHMANCODER_API UClass* Z_Construct_UClass_UChestCannonComponent();
	CROUCHMANCODER_API UClass* Z_Construct_UClass_UChestCannonComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CrouchManCoder();
// End Cross Module References
	void UChestCannonComponent::StaticRegisterNativesUChestCannonComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChestCannonComponent);
	UClass* Z_Construct_UClass_UChestCannonComponent_NoRegister()
	{
		return UChestCannonComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChestCannonComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Projectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChestCannonComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CrouchManCoder,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChestCannonComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestCannonComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ChestCannonComponent.h" },
		{ "ModuleRelativePath", "Public/ChestCannonComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestCannonComponent_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "ChestCannonComponent" },
		{ "ModuleRelativePath", "Public/ChestCannonComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UChestCannonComponent_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChestCannonComponent, Projectile), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChestCannonComponent_Statics::NewProp_Projectile_MetaData), Z_Construct_UClass_UChestCannonComponent_Statics::NewProp_Projectile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChestCannonComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestCannonComponent_Statics::NewProp_Projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChestCannonComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChestCannonComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChestCannonComponent_Statics::ClassParams = {
		&UChestCannonComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChestCannonComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChestCannonComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChestCannonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UChestCannonComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChestCannonComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UChestCannonComponent()
	{
		if (!Z_Registration_Info_UClass_UChestCannonComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChestCannonComponent.OuterSingleton, Z_Construct_UClass_UChestCannonComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChestCannonComponent.OuterSingleton;
	}
	template<> CROUCHMANCODER_API UClass* StaticClass<UChestCannonComponent>()
	{
		return UChestCannonComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChestCannonComponent);
	UChestCannonComponent::~UChestCannonComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_ChestCannonComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_ChestCannonComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChestCannonComponent, UChestCannonComponent::StaticClass, TEXT("UChestCannonComponent"), &Z_Registration_Info_UClass_UChestCannonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChestCannonComponent), 4273168281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_ChestCannonComponent_h_3857370698(TEXT("/Script/CrouchManCoder"),
		Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_ChestCannonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_OneDrive_Documents_Unreal_Projects_CrouchManCoder_Source_CrouchManCoder_Public_ChestCannonComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
