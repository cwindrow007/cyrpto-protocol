// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Shooter/ShooterPickup.h"

#ifdef CRYPTOPROTOCOL_ShooterPickup_generated_h
#error "ShooterPickup.generated.h already included, missing '#pragma once' in ShooterPickup.h"
#endif
#define CRYPTOPROTOCOL_ShooterPickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin ScriptStruct FWeaponTableRow ***************************************************
#define FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponTableRow_Statics; \
	CRYPTOPROTOCOL_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FWeaponTableRow;
// ********** End ScriptStruct FWeaponTableRow *****************************************************

// ********** Begin Class AShooterPickup ***********************************************************
#define FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishRespawn); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h_38_CALLBACK_WRAPPERS
CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_AShooterPickup_NoRegister();

#define FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterPickup(); \
	friend struct Z_Construct_UClass_AShooterPickup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_AShooterPickup_NoRegister(); \
public: \
	DECLARE_CLASS2(AShooterPickup, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptoProtocol"), Z_Construct_UClass_AShooterPickup_NoRegister) \
	DECLARE_SERIALIZER(AShooterPickup)


#define FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShooterPickup(AShooterPickup&&) = delete; \
	AShooterPickup(const AShooterPickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPickup); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AShooterPickup) \
	NO_API virtual ~AShooterPickup();


#define FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h_35_PROLOG
#define FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h_38_CALLBACK_WRAPPERS \
	FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h_38_INCLASS_NO_PURE_DECLS \
	FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShooterPickup;

// ********** End Class AShooterPickup *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CryptoProtocol_Source_CryptoProtocol_Variant_Shooter_ShooterPickup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
