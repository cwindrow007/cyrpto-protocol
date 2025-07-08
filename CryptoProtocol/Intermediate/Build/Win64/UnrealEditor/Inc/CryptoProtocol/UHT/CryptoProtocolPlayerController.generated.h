// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CryptoProtocolPlayerController.h"

#ifdef CRYPTOPROTOCOL_CryptoProtocolPlayerController_generated_h
#error "CryptoProtocolPlayerController.generated.h already included, missing '#pragma once' in CryptoProtocolPlayerController.h"
#endif
#define CRYPTOPROTOCOL_CryptoProtocolPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACryptoProtocolPlayerController ******************************************
CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_ACryptoProtocolPlayerController_NoRegister();

#define FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACryptoProtocolPlayerController(); \
	friend struct Z_Construct_UClass_ACryptoProtocolPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_ACryptoProtocolPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACryptoProtocolPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptoProtocol"), Z_Construct_UClass_ACryptoProtocolPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACryptoProtocolPlayerController)


#define FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACryptoProtocolPlayerController(ACryptoProtocolPlayerController&&) = delete; \
	ACryptoProtocolPlayerController(const ACryptoProtocolPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptoProtocolPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptoProtocolPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACryptoProtocolPlayerController) \
	NO_API virtual ~ACryptoProtocolPlayerController();


#define FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolPlayerController_h_16_PROLOG
#define FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACryptoProtocolPlayerController;

// ********** End Class ACryptoProtocolPlayerController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
