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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ABBPlayerController, ABBPlayerController::StaticClass, TEXT("ABBPlayerController"), &Z_Registration_Info_UClass_ABBPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBPlayerController), 1490133591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_3728005341(TEXT("/Script/BaseBall"),
	Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
