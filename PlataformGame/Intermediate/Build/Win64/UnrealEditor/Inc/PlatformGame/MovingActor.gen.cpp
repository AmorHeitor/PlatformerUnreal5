// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformGame/MovingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingActor() {}
// Cross Module References
	PLATFORMGAME_API UClass* Z_Construct_UClass_AMovingActor_NoRegister();
	PLATFORMGAME_API UClass* Z_Construct_UClass_AMovingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PlatformGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMovingActor::StaticRegisterNativesAMovingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingActor);
	UClass* Z_Construct_UClass_AMovingActor_NoRegister()
	{
		return AMovingActor::StaticClass();
	}
	struct Z_Construct_UClass_AMovingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingActor.h" },
		{ "ModuleRelativePath", "MovingActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingActor_Statics::NewProp_MyVector_MetaData[] = {
		{ "Category", "MovingActor" },
		{ "ModuleRelativePath", "MovingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingActor_Statics::NewProp_MyVector = { "MyVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingActor, MyVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMovingActor_Statics::NewProp_MyVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::NewProp_MyVector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingActor_Statics::NewProp_MyVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingActor_Statics::ClassParams = {
		&AMovingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingActor()
	{
		if (!Z_Registration_Info_UClass_AMovingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingActor.OuterSingleton, Z_Construct_UClass_AMovingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingActor.OuterSingleton;
	}
	template<> PLATFORMGAME_API UClass* StaticClass<AMovingActor>()
	{
		return AMovingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingActor);
	struct Z_CompiledInDeferFile_FID_PlataformGame_Source_PlatformGame_MovingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlataformGame_Source_PlatformGame_MovingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingActor, AMovingActor::StaticClass, TEXT("AMovingActor"), &Z_Registration_Info_UClass_AMovingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingActor), 748826613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlataformGame_Source_PlatformGame_MovingActor_h_2427417610(TEXT("/Script/PlatformGame"),
		Z_CompiledInDeferFile_FID_PlataformGame_Source_PlatformGame_MovingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlataformGame_Source_PlatformGame_MovingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
