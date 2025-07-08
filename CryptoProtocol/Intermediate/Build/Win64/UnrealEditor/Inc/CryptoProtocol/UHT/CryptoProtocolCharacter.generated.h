// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CryptoProtocolCharacter.h"

#ifdef CRYPTOPROTOCOL_CryptoProtocolCharacter_generated_h
#error "CryptoProtocolCharacter.generated.h already included, missing '#pragma once' in CryptoProtocolCharacter.h"
#endif
#define CRYPTOPROTOCOL_CryptoProtocolCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACryptoProtocolCharacter *************************************************
#define FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_ACryptoProtocolCharacter_NoRegister();

#define FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACryptoProtocolCharacter(); \
	friend struct Z_Construct_UClass_ACryptoProtocolCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_ACryptoProtocolCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACryptoProtocolCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptoProtocol"), Z_Construct_UClass_ACryptoProtocolCharacter_NoRegister) \
	DECLARE_SERIALIZER(ACryptoProtocolCharacter)


#define FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACryptoProtocolCharacter(ACryptoProtocolCharacter&&) = delete; \
	ACryptoProtocolCharacter(const ACryptoProtocolCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptoProtocolCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptoProtocolCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACryptoProtocolCharacter) \
	NO_API virtual ~ACryptoProtocolCharacter();


#define FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCharacter_h_21_PROLOG
#define FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACryptoProtocolCharacter;

// ********** End Class ACryptoProtocolCharacter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
