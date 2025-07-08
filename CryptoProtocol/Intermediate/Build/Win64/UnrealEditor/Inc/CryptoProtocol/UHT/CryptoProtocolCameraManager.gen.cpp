// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptoProtocol/CryptoProtocolCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCryptoProtocolCameraManager() {}

// ********** Begin Cross Module References ********************************************************
CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_ACryptoProtocolCameraManager();
CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_ACryptoProtocolCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_CryptoProtocol();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACryptoProtocolCameraManager *********************************************
void ACryptoProtocolCameraManager::StaticRegisterNativesACryptoProtocolCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACryptoProtocolCameraManager;
UClass* ACryptoProtocolCameraManager::GetPrivateStaticClass()
{
	using TClass = ACryptoProtocolCameraManager;
	if (!Z_Registration_Info_UClass_ACryptoProtocolCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CryptoProtocolCameraManager"),
			Z_Registration_Info_UClass_ACryptoProtocolCameraManager.InnerSingleton,
			StaticRegisterNativesACryptoProtocolCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACryptoProtocolCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ACryptoProtocolCameraManager_NoRegister()
{
	return ACryptoProtocolCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACryptoProtocolCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "CryptoProtocolCameraManager.h" },
		{ "ModuleRelativePath", "CryptoProtocolCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACryptoProtocolCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACryptoProtocolCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_CryptoProtocol,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptoProtocolCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACryptoProtocolCameraManager_Statics::ClassParams = {
	&ACryptoProtocolCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptoProtocolCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACryptoProtocolCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACryptoProtocolCameraManager()
{
	if (!Z_Registration_Info_UClass_ACryptoProtocolCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACryptoProtocolCameraManager.OuterSingleton, Z_Construct_UClass_ACryptoProtocolCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACryptoProtocolCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACryptoProtocolCameraManager);
ACryptoProtocolCameraManager::~ACryptoProtocolCameraManager() {}
// ********** End Class ACryptoProtocolCameraManager ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCameraManager_h__Script_CryptoProtocol_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACryptoProtocolCameraManager, ACryptoProtocolCameraManager::StaticClass, TEXT("ACryptoProtocolCameraManager"), &Z_Registration_Info_UClass_ACryptoProtocolCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACryptoProtocolCameraManager), 7375940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCameraManager_h__Script_CryptoProtocol_2006219613(TEXT("/Script/CryptoProtocol"),
	Z_CompiledInDeferFile_FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCameraManager_h__Script_CryptoProtocol_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolCameraManager_h__Script_CryptoProtocol_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
