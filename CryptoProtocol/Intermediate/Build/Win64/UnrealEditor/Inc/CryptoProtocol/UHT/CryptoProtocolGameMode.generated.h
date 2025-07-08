// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CryptoProtocolGameMode.h"

#ifdef CRYPTOPROTOCOL_CryptoProtocolGameMode_generated_h
#error "CryptoProtocolGameMode.generated.h already included, missing '#pragma once' in CryptoProtocolGameMode.h"
#endif
#define CRYPTOPROTOCOL_CryptoProtocolGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACryptoProtocolGameMode **************************************************
CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_ACryptoProtocolGameMode_NoRegister();

#define FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACryptoProtocolGameMode(); \
	friend struct Z_Construct_UClass_ACryptoProtocolGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_ACryptoProtocolGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACryptoProtocolGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptoProtocol"), Z_Construct_UClass_ACryptoProtocolGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACryptoProtocolGameMode)


#define FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACryptoProtocolGameMode(ACryptoProtocolGameMode&&) = delete; \
	ACryptoProtocolGameMode(const ACryptoProtocolGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptoProtocolGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptoProtocolGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACryptoProtocolGameMode) \
	NO_API virtual ~ACryptoProtocolGameMode();


#define FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolGameMode_h_12_PROLOG
#define FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACryptoProtocolGameMode;

// ********** End Class ACryptoProtocolGameMode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
