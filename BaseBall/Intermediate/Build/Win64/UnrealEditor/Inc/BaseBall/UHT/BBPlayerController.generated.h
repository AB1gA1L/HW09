// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BBPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALL_BBPlayerController_generated_h
#error "BBPlayerController.generated.h already included, missing '#pragma once' in BBPlayerController.h"
#endif
#define BASEBALL_BBPlayerController_generated_h

#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_16_CALLBACK_WRAPPERS
#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBPlayerController(); \
	friend struct Z_Construct_UClass_ABBPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABBPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseBall"), NO_API) \
	DECLARE_SERIALIZER(ABBPlayerController)


#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABBPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBPlayerController(ABBPlayerController&&); \
	ABBPlayerController(const ABBPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABBPlayerController) \
	NO_API virtual ~ABBPlayerController();


#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_13_PROLOG
#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_16_CALLBACK_WRAPPERS \
	FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALL_API UClass* StaticClass<class ABBPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
