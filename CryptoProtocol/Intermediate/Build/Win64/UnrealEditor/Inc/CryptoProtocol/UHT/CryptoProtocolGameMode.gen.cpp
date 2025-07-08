// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptoProtocol/CryptoProtocolGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCryptoProtocolGameMode() {}

// ********** Begin Cross Module References ********************************************************
CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_ACryptoProtocolGameMode();
CRYPTOPROTOCOL_API UClass* Z_Construct_UClass_ACryptoProtocolGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CryptoProtocol();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACryptoProtocolGameMode **************************************************
void ACryptoProtocolGameMode::StaticRegisterNativesACryptoProtocolGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACryptoProtocolGameMode;
UClass* ACryptoProtocolGameMode::GetPrivateStaticClass()
{
	using TClass = ACryptoProtocolGameMode;
	if (!Z_Registration_Info_UClass_ACryptoProtocolGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CryptoProtocolGameMode"),
			Z_Registration_Info_UClass_ACryptoProtocolGameMode.InnerSingleton,
			StaticRegisterNativesACryptoProtocolGameMode,
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
	return Z_Registration_Info_UClass_ACryptoProtocolGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACryptoProtocolGameMode_NoRegister()
{
	return ACryptoProtocolGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACryptoProtocolGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CryptoProtocolGameMode.h" },
		{ "ModuleRelativePath", "CryptoProtocolGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACryptoProtocolGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACryptoProtocolGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CryptoProtocol,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptoProtocolGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACryptoProtocolGameMode_Statics::ClassParams = {
	&ACryptoProtocolGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptoProtocolGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACryptoProtocolGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACryptoProtocolGameMode()
{
	if (!Z_Registration_Info_UClass_ACryptoProtocolGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACryptoProtocolGameMode.OuterSingleton, Z_Construct_UClass_ACryptoProtocolGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACryptoProtocolGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACryptoProtocolGameMode);
ACryptoProtocolGameMode::~ACryptoProtocolGameMode() {}
// ********** End Class ACryptoProtocolGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolGameMode_h__Script_CryptoProtocol_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACryptoProtocolGameMode, ACryptoProtocolGameMode::StaticClass, TEXT("ACryptoProtocolGameMode"), &Z_Registration_Info_UClass_ACryptoProtocolGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACryptoProtocolGameMode), 42719273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolGameMode_h__Script_CryptoProtocol_867944238(TEXT("/Script/CryptoProtocol"),
	Z_CompiledInDeferFile_FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolGameMode_h__Script_CryptoProtocol_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Blake_Documents_Unreal_Projects_CryptoProtocol_Source_CryptoProtocol_CryptoProtocolGameMode_h__Script_CryptoProtocol_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
