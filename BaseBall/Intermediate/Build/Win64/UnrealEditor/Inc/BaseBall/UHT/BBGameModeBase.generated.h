// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/BBGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALL_BBGameModeBase_generated_h
#error "BBGameModeBase.generated.h already included, missing '#pragma once' in BBGameModeBase.h"
#endif
#define BASEBALL_BBGameModeBase_generated_h

#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Game_BBGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBGameModeBase(); \
	friend struct Z_Construct_UClass_ABBGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABBGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseBall"), NO_API) \
	DECLARE_SERIALIZER(ABBGameModeBase)


#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Game_BBGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABBGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBGameModeBase(ABBGameModeBase&&); \
	ABBGameModeBase(const ABBGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABBGameModeBase) \
	NO_API virtual ~ABBGameModeBase();


#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Game_BBGameModeBase_h_11_PROLOG
#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Game_BBGameModeBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_HW09_BaseBall_Source_BaseBall_Game_BBGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_GitHub_HW09_BaseBall_Source_BaseBall_Game_BBGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALL_API UClass* StaticClass<class ABBGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_HW09_BaseBall_Source_BaseBall_Game_BBGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
