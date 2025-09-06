// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/BBChatInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALL_BBChatInput_generated_h
#error "BBChatInput.generated.h already included, missing '#pragma once' in BBChatInput.h"
#endif
#define BASEBALL_BBChatInput_generated_h

#define FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


#define FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBBChatInput(); \
	friend struct Z_Construct_UClass_UBBChatInput_Statics; \
public: \
	DECLARE_CLASS(UBBChatInput, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BaseBall"), NO_API) \
	DECLARE_SERIALIZER(UBBChatInput)


#define FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBBChatInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBBChatInput(UBBChatInput&&); \
	UBBChatInput(const UBBChatInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBBChatInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBBChatInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBBChatInput) \
	NO_API virtual ~UBBChatInput();


#define FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_16_PROLOG
#define FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_19_INCLASS_NO_PURE_DECLS \
	FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALL_API UClass* StaticClass<class UBBChatInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_HW09_BaseBall_Source_BaseBall_UI_BBChatInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
