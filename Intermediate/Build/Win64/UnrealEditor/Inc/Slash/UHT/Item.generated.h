// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Item.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLASH_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define SLASH_Item_generated_h

#define FID_Slash_Source_Slash_Public_Items_Item_h_12_SPARSE_DATA
#define FID_Slash_Source_Slash_Public_Items_Item_h_12_RPC_WRAPPERS
#define FID_Slash_Source_Slash_Public_Items_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Slash_Source_Slash_Public_Items_Item_h_12_ACCESSORS
#define FID_Slash_Source_Slash_Public_Items_Item_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Slash"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define FID_Slash_Source_Slash_Public_Items_Item_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Slash"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define FID_Slash_Source_Slash_Public_Items_Item_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	NO_API virtual ~AItem();


#define FID_Slash_Source_Slash_Public_Items_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem) \
	NO_API virtual ~AItem();


#define FID_Slash_Source_Slash_Public_Items_Item_h_9_PROLOG
#define FID_Slash_Source_Slash_Public_Items_Item_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Slash_Source_Slash_Public_Items_Item_h_12_SPARSE_DATA \
	FID_Slash_Source_Slash_Public_Items_Item_h_12_RPC_WRAPPERS \
	FID_Slash_Source_Slash_Public_Items_Item_h_12_ACCESSORS \
	FID_Slash_Source_Slash_Public_Items_Item_h_12_INCLASS \
	FID_Slash_Source_Slash_Public_Items_Item_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Slash_Source_Slash_Public_Items_Item_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Slash_Source_Slash_Public_Items_Item_h_12_SPARSE_DATA \
	FID_Slash_Source_Slash_Public_Items_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Slash_Source_Slash_Public_Items_Item_h_12_ACCESSORS \
	FID_Slash_Source_Slash_Public_Items_Item_h_12_INCLASS_NO_PURE_DECLS \
	FID_Slash_Source_Slash_Public_Items_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLASH_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Slash_Source_Slash_Public_Items_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
