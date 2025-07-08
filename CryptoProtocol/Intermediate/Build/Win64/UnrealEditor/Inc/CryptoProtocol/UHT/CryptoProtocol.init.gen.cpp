// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptoProtocol_init() {}
	CRYPTOPROTOCOL_API UFunction* Z_Construct_UDelegateFunction_CryptoProtocol_BulletCountUpdatedDelegate__DelegateSignature();
	CRYPTOPROTOCOL_API UFunction* Z_Construct_UDelegateFunction_CryptoProtocol_PawnDeathDelegate__DelegateSignature();
	CRYPTOPROTOCOL_API UFunction* Z_Construct_UDelegateFunction_CryptoProtocol_SprintStateChangedDelegate__DelegateSignature();
	CRYPTOPROTOCOL_API UFunction* Z_Construct_UDelegateFunction_CryptoProtocol_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CryptoProtocol;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CryptoProtocol()
	{
		if (!Z_Registration_Info_UPackage__Script_CryptoProtocol.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CryptoProtocol_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CryptoProtocol_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CryptoProtocol_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CryptoProtocol_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CryptoProtocol",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF2D987E1,
				0x44F004CB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CryptoProtocol.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CryptoProtocol.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CryptoProtocol(Z_Construct_UPackage__Script_CryptoProtocol, TEXT("/Script/CryptoProtocol"), Z_Registration_Info_UPackage__Script_CryptoProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF2D987E1, 0x44F004CB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
