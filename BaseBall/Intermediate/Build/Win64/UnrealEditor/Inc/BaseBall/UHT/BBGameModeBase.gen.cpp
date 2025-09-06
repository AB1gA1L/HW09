// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBall/Game/BBGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBGameModeBase() {}

// Begin Cross Module References
BASEBALL_API UClass* Z_Construct_UClass_ABBGameModeBase();
BASEBALL_API UClass* Z_Construct_UClass_ABBGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BaseBall();
// End Cross Module References

// Begin Class ABBGameModeBase
void ABBGameModeBase::StaticRegisterNativesABBGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABBGameModeBase);
UClass* Z_Construct_UClass_ABBGameModeBase_NoRegister()
{
	return ABBGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ABBGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/BBGameModeBase.h" },
		{ "ModuleRelativePath", "Game/BBGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABBGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABBGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABBGameModeBase_Statics::ClassParams = {
	&ABBGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABBGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABBGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABBGameModeBase()
{
	if (!Z_Registration_Info_UClass_ABBGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABBGameModeBase.OuterSingleton, Z_Construct_UClass_ABBGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABBGameModeBase.OuterSingleton;
}
template<> BASEBALL_API UClass* StaticClass<ABBGameModeBase>()
{
	return ABBGameModeBase::StaticClass();
}
ABBGameModeBase::ABBGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABBGameModeBase);
ABBGameModeBase::~ABBGameModeBase() {}
// End Class ABBGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_Game_BBGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABBGameModeBase, ABBGameModeBase::StaticClass, TEXT("ABBGameModeBase"), &Z_Registration_Info_UClass_ABBGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABBGameModeBase), 3729228694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_Game_BBGameModeBase_h_3156141451(TEXT("/Script/BaseBall"),
	Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_Game_BBGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_Game_BBGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
