// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBall/Player/BBPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBPlayerController() {}

// Begin Cross Module References
BASEBALL_API UClass* Z_Construct_UClass_ABBPlayerController();
BASEBALL_API UClass* Z_Construct_UClass_ABBPlayerController_NoRegister();
BASEBALL_API UClass* Z_Construct_UClass_UBBChatInput_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_BaseBall();
// End Cross Module References

// Begin Class ABBPlayerController
void ABBPlayerController::StaticRegisterNativesABBPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABBPlayerController);
UClass* Z_Construct_UClass_ABBPlayerController_NoRegister()
{
	return ABBPlayerController::StaticClass();
}
struct Z_Construct_UClass_ABBPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/BBPlayerController.h" },
		{ "ModuleRelativePath", "Player/BBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetClass_MetaData[] = {
		{ "Category", "BBPlayerController" },
		{ "ModuleRelativePath", "Player/BBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/BBPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatInputWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABBPlayerController_Statics::NewProp_ChatInputWidgetClass = { "ChatInputWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBPlayerController, ChatInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBBChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetClass_MetaData), NewProp_ChatInputWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABBPlayerController_Statics::NewProp_ChatInputWidgetInstance = { "ChatInputWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBPlayerController, ChatInputWidgetInstance), Z_Construct_UClass_UBBChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetInstance_MetaData), NewProp_ChatInputWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABBPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBPlayerController_Statics::NewProp_ChatInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABBPlayerController_Statics::NewProp_ChatInputWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABBPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABBPlayerController_Statics::ClassParams = {
	&ABBPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABBPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABBPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABBPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABBPlayerController()
{
	if (!Z_Registration_Info_UClass_ABBPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABBPlayerController.OuterSingleton, Z_Construct_UClass_ABBPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABBPlayerController.OuterSingleton;
}
template<> BASEBALL_API UClass* StaticClass<ABBPlayerController>()
{
	return ABBPlayerController::StaticClass();
}
ABBPlayerController::ABBPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABBPlayerController);
ABBPlayerController::~ABBPlayerController() {}
// End Class ABBPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABBPlayerController, ABBPlayerController::StaticClass, TEXT("ABBPlayerController"), &Z_Registration_Info_UClass_ABBPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBPlayerController), 2930291664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_515732822(TEXT("/Script/BaseBall"),
	Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
