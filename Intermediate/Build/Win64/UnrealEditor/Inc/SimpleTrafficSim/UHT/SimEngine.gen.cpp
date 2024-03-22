// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleTrafficSim/Public/SimEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimEngine() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SIMPLETRAFFICSIM_API UClass* Z_Construct_UClass_USimEngine();
	SIMPLETRAFFICSIM_API UClass* Z_Construct_UClass_USimEngine_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleTrafficSim();
// End Cross Module References
	void USimEngine::StaticRegisterNativesUSimEngine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimEngine);
	UClass* Z_Construct_UClass_USimEngine_NoRegister()
	{
		return USimEngine::StaticClass();
	}
	struct Z_Construct_UClass_USimEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleTrafficSim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimEngine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SimEngine.h" },
		{ "ModuleRelativePath", "Public/SimEngine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimEngine_Statics::ClassParams = {
		&USimEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USimEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimEngine()
	{
		if (!Z_Registration_Info_UClass_USimEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimEngine.OuterSingleton, Z_Construct_UClass_USimEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimEngine.OuterSingleton;
	}
	template<> SIMPLETRAFFICSIM_API UClass* StaticClass<USimEngine>()
	{
		return USimEngine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimEngine);
	USimEngine::~USimEngine() {}
	struct Z_CompiledInDeferFile_FID_project_futurecity_Plugins_SimpleTrafficSim_Source_SimpleTrafficSim_Public_SimEngine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project_futurecity_Plugins_SimpleTrafficSim_Source_SimpleTrafficSim_Public_SimEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimEngine, USimEngine::StaticClass, TEXT("USimEngine"), &Z_Registration_Info_UClass_USimEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimEngine), 538361106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project_futurecity_Plugins_SimpleTrafficSim_Source_SimpleTrafficSim_Public_SimEngine_h_2892069923(TEXT("/Script/SimpleTrafficSim"),
		Z_CompiledInDeferFile_FID_project_futurecity_Plugins_SimpleTrafficSim_Source_SimpleTrafficSim_Public_SimEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_project_futurecity_Plugins_SimpleTrafficSim_Source_SimpleTrafficSim_Public_SimEngine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
