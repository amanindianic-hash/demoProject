// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OXRVisionOSSettings/Public/OXRVisionOSRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOXRVisionOSRuntimeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
OXRVISIONOSSETTINGS_API UClass* Z_Construct_UClass_UOXRVisionOSRuntimeSettings();
OXRVISIONOSSETTINGS_API UClass* Z_Construct_UClass_UOXRVisionOSRuntimeSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_OXRVisionOSSettings();
// End Cross Module References

// Begin Class UOXRVisionOSRuntimeSettings
void UOXRVisionOSRuntimeSettings::StaticRegisterNativesUOXRVisionOSRuntimeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOXRVisionOSRuntimeSettings);
UClass* Z_Construct_UClass_UOXRVisionOSRuntimeSettings_NoRegister()
{
	return UOXRVisionOSRuntimeSettings::StaticClass();
}
struct Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OXRVisionOSRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/OXRVisionOSRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OXRVisionOSAimPoseAdjustment_MetaData[] = {
		{ "Category", "OpenXR visionOS" },
		{ "Comment", "// Defines a rotation adjustment to the aim pose from the OpenXR visionOS native controller orientation.  This pose may be fine without adjustment.\n" },
		{ "DisplayName", "Aim Pose Adjustment" },
		{ "ModuleRelativePath", "Public/OXRVisionOSRuntimeSettings.h" },
		{ "ToolTip", "Defines a rotation adjustment to the aim pose from the OpenXR visionOS native controller orientation.  This pose may be fine without adjustment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OXRVisionOSGripPoseAdjustment_MetaData[] = {
		{ "Category", "OpenXR visionOS" },
		{ "Comment", "// Defines a rotation adjustment to the grip pose from the OpenXR visionOS native controller orientation.  We provide a default adjustment to grip.\n" },
		{ "DisplayName", "Grip Pose Adjustment" },
		{ "ModuleRelativePath", "Public/OXRVisionOSRuntimeSettings.h" },
		{ "ToolTip", "Defines a rotation adjustment to the grip pose from the OpenXR visionOS native controller orientation.  We provide a default adjustment to grip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OXRVisionOSNumUILayers_MetaData[] = {
		{ "Category", "OpenXR visionOS" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "Comment", "// Number of UI2D/quad layers supported by OpenXR visionOS, required at app startup time\n" },
		{ "DeprecatedProperty", "" },
		{ "DisplayName", "Max Number UI Layers" },
		{ "ModuleRelativePath", "Public/OXRVisionOSRuntimeSettings.h" },
		{ "ToolTip", "Number of UI2D/quad layers supported by OpenXR visionOS, required at app startup time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OXRVisionOSAimPoseAdjustment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OXRVisionOSGripPoseAdjustment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OXRVisionOSNumUILayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOXRVisionOSRuntimeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::NewProp_OXRVisionOSAimPoseAdjustment = { "OXRVisionOSAimPoseAdjustment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOXRVisionOSRuntimeSettings, OXRVisionOSAimPoseAdjustment), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OXRVisionOSAimPoseAdjustment_MetaData), NewProp_OXRVisionOSAimPoseAdjustment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::NewProp_OXRVisionOSGripPoseAdjustment = { "OXRVisionOSGripPoseAdjustment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOXRVisionOSRuntimeSettings, OXRVisionOSGripPoseAdjustment), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OXRVisionOSGripPoseAdjustment_MetaData), NewProp_OXRVisionOSGripPoseAdjustment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::NewProp_OXRVisionOSNumUILayers = { "OXRVisionOSNumUILayers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOXRVisionOSRuntimeSettings, OXRVisionOSNumUILayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OXRVisionOSNumUILayers_MetaData), NewProp_OXRVisionOSNumUILayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::NewProp_OXRVisionOSAimPoseAdjustment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::NewProp_OXRVisionOSGripPoseAdjustment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::NewProp_OXRVisionOSNumUILayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_OXRVisionOSSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::ClassParams = {
	&UOXRVisionOSRuntimeSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOXRVisionOSRuntimeSettings()
{
	if (!Z_Registration_Info_UClass_UOXRVisionOSRuntimeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOXRVisionOSRuntimeSettings.OuterSingleton, Z_Construct_UClass_UOXRVisionOSRuntimeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOXRVisionOSRuntimeSettings.OuterSingleton;
}
template<> OXRVISIONOSSETTINGS_API UClass* StaticClass<UOXRVisionOSRuntimeSettings>()
{
	return UOXRVisionOSRuntimeSettings::StaticClass();
}
UOXRVisionOSRuntimeSettings::UOXRVisionOSRuntimeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOXRVisionOSRuntimeSettings);
UOXRVisionOSRuntimeSettings::~UOXRVisionOSRuntimeSettings() {}
// End Class UOXRVisionOSRuntimeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_githubproject_demoProject_OpenXRVisionOS_HostProject_Plugins_OpenXRVisionOS_Source_OXRVisionOSSettings_Public_OXRVisionOSRuntimeSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOXRVisionOSRuntimeSettings, UOXRVisionOSRuntimeSettings::StaticClass, TEXT("UOXRVisionOSRuntimeSettings"), &Z_Registration_Info_UClass_UOXRVisionOSRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOXRVisionOSRuntimeSettings), 1362540828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_githubproject_demoProject_OpenXRVisionOS_HostProject_Plugins_OpenXRVisionOS_Source_OXRVisionOSSettings_Public_OXRVisionOSRuntimeSettings_h_3953844521(TEXT("/Script/OXRVisionOSSettings"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_githubproject_demoProject_OpenXRVisionOS_HostProject_Plugins_OpenXRVisionOS_Source_OXRVisionOSSettings_Public_OXRVisionOSRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_githubproject_demoProject_OpenXRVisionOS_HostProject_Plugins_OpenXRVisionOS_Source_OXRVisionOSSettings_Public_OXRVisionOSRuntimeSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
