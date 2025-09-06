// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BBPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASEBALL_BBPawn_generated_h
#error "BBPawn.generated.h already included, missing '#pragma once' in BBPawn.h"
#endif
#define BASEBALL_BBPawn_generated_h

#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABBPawn(); \
	friend struct Z_Construct_UClass_ABBPawn_Statics; \
public: \
	DECLARE_CLASS(ABBPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BaseBall"), NO_API) \
	DECLARE_SERIALIZER(ABBPawn)


#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABBPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABBPawn(ABBPawn&&); \
	ABBPawn(const ABBPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABBPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABBPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABBPawn) \
	NO_API virtual ~ABBPawn();


#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPawn_h_9_PROLOG
#define FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASEBALL_API UClass* StaticClass<class ABBPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_HW09_BaseBall_Source_BaseBall_Player_BBPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
