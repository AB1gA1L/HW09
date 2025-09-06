// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBall/UI/BBChatInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBBChatInput() {}

// Begin Cross Module References
BASEBALL_API UClass* Z_Construct_UClass_UBBChatInput();
BASEBALL_API UClass* Z_Construct_UClass_UBBChatInput_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BaseBall();
// End Cross Module References

// Begin Class UBBChatInput
void UBBChatInput::StaticRegisterNativesUBBChatInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBBChatInput);
UClass* Z_Construct_UClass_UBBChatInput_NoRegister()
{
	return UBBChatInput::StaticClass();
}
struct Z_Construct_UClass_UBBChatInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/BBChatInput.h" },
		{ "ModuleRelativePath", "UI/BBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BBChatInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_ChatInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBBChatInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBBChatInput_Statics::NewProp_EditableTextBox_ChatInput = { "EditableTextBox_ChatInput", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBBChatInput, EditableTextBox_ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_ChatInput_MetaData), NewProp_EditableTextBox_ChatInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBBChatInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBBChatInput_Statics::NewProp_EditableTextBox_ChatInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBBChatInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBBChatInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BaseBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBBChatInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBBChatInput_Statics::ClassParams = {
	&UBBChatInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBBChatInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBBChatInput_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBBChatInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UBBChatInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBBChatInput()
{
	if (!Z_Registration_Info_UClass_UBBChatInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBBChatInput.OuterSingleton, Z_Construct_UClass_UBBChatInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBBChatInput.OuterSingleton;
}
template<> BASEBALL_API UClass* StaticClass<UBBChatInput>()
{
	return UBBChatInput::StaticClass();
}
UBBChatInput::UBBChatInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBBChatInput);
UBBChatInput::~UBBChatInput() {}
// End Class UBBChatInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBBChatInput, UBBChatInput::StaticClass, TEXT("UBBChatInput"), &Z_Registration_Info_UClass_UBBChatInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBBChatInput), 2645114064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_3104772434(TEXT("/Script/BaseBall"),
	Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
