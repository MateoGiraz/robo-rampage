// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameViewportLocalMultiplayer/Public/CommonGameViewportMultiplayer.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonGameViewportMultiplayer() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonGameViewportClient();
	GAMEVIEWPORTLOCALMULTIPLAYER_API UClass* Z_Construct_UClass_UCommonGameViewportMultiplayer();
	GAMEVIEWPORTLOCALMULTIPLAYER_API UClass* Z_Construct_UClass_UCommonGameViewportMultiplayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameViewportLocalMultiplayer();
// End Cross Module References
	void UCommonGameViewportMultiplayer::StaticRegisterNativesUCommonGameViewportMultiplayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonGameViewportMultiplayer);
	UClass* Z_Construct_UClass_UCommonGameViewportMultiplayer_NoRegister()
	{
		return UCommonGameViewportMultiplayer::StaticClass();
	}
	struct Z_Construct_UClass_UCommonGameViewportMultiplayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonGameViewportMultiplayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_GameViewportLocalMultiplayer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameViewportMultiplayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonGameViewportMultiplayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommonGameViewportMultiplayer.h" },
		{ "ModuleRelativePath", "Public/CommonGameViewportMultiplayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonGameViewportMultiplayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonGameViewportMultiplayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonGameViewportMultiplayer_Statics::ClassParams = {
		&UCommonGameViewportMultiplayer::StaticClass,
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
		0x001000ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameViewportMultiplayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonGameViewportMultiplayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCommonGameViewportMultiplayer()
	{
		if (!Z_Registration_Info_UClass_UCommonGameViewportMultiplayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonGameViewportMultiplayer.OuterSingleton, Z_Construct_UClass_UCommonGameViewportMultiplayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonGameViewportMultiplayer.OuterSingleton;
	}
	template<> GAMEVIEWPORTLOCALMULTIPLAYER_API UClass* StaticClass<UCommonGameViewportMultiplayer>()
	{
		return UCommonGameViewportMultiplayer::StaticClass();
	}
	UCommonGameViewportMultiplayer::UCommonGameViewportMultiplayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonGameViewportMultiplayer);
	UCommonGameViewportMultiplayer::~UCommonGameViewportMultiplayer() {}
	struct Z_CompiledInDeferFile_FID_Users_Mate_Documents_Unreal_Projects_robo_rampage_Plugins_GameViewportLocalMultiplayer_Source_GameViewportLocalMultiplayer_Public_CommonGameViewportMultiplayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mate_Documents_Unreal_Projects_robo_rampage_Plugins_GameViewportLocalMultiplayer_Source_GameViewportLocalMultiplayer_Public_CommonGameViewportMultiplayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonGameViewportMultiplayer, UCommonGameViewportMultiplayer::StaticClass, TEXT("UCommonGameViewportMultiplayer"), &Z_Registration_Info_UClass_UCommonGameViewportMultiplayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonGameViewportMultiplayer), 1627948333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mate_Documents_Unreal_Projects_robo_rampage_Plugins_GameViewportLocalMultiplayer_Source_GameViewportLocalMultiplayer_Public_CommonGameViewportMultiplayer_h_1925535682(TEXT("/Script/GameViewportLocalMultiplayer"),
		Z_CompiledInDeferFile_FID_Users_Mate_Documents_Unreal_Projects_robo_rampage_Plugins_GameViewportLocalMultiplayer_Source_GameViewportLocalMultiplayer_Public_CommonGameViewportMultiplayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mate_Documents_Unreal_Projects_robo_rampage_Plugins_GameViewportLocalMultiplayer_Source_GameViewportLocalMultiplayer_Public_CommonGameViewportMultiplayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
