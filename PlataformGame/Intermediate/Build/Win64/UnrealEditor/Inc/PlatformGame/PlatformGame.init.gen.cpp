// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PlatformGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PlatformGame()
	{
		if (!Z_Registration_Info_UPackage__Script_PlatformGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PlatformGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9EFF8FA0,
				0xF8A24C3F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PlatformGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PlatformGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PlatformGame(Z_Construct_UPackage__Script_PlatformGame, TEXT("/Script/PlatformGame"), Z_Registration_Info_UPackage__Script_PlatformGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9EFF8FA0, 0xF8A24C3F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
