// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_3/Public/MoveActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveActor() {}

// Begin Cross Module References
CH3_3_API UClass* Z_Construct_UClass_AMoveActor();
CH3_3_API UClass* Z_Construct_UClass_AMoveActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CH3_3();
// End Cross Module References

// Begin Class AMoveActor
void AMoveActor::StaticRegisterNativesAMoveActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveActor);
UClass* Z_Construct_UClass_AMoveActor_NoRegister()
{
	return AMoveActor::StaticClass();
}
struct Z_Construct_UClass_AMoveActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoveActor.h" },
		{ "ModuleRelativePath", "Public/MoveActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMoveActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveActor_Statics::ClassParams = {
	&AMoveActor::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoveActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoveActor()
{
	if (!Z_Registration_Info_UClass_AMoveActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveActor.OuterSingleton, Z_Construct_UClass_AMoveActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoveActor.OuterSingleton;
}
template<> CH3_3_API UClass* StaticClass<AMoveActor>()
{
	return AMoveActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveActor);
AMoveActor::~AMoveActor() {}
// End Class AMoveActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_3_CH3_3_Source_CH3_3_Public_MoveActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoveActor, AMoveActor::StaticClass, TEXT("AMoveActor"), &Z_Registration_Info_UClass_AMoveActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveActor), 1660197611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_3_CH3_3_Source_CH3_3_Public_MoveActor_h_3748545367(TEXT("/Script/CH3_3"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_3_CH3_3_Source_CH3_3_Public_MoveActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_3_CH3_3_Source_CH3_3_Public_MoveActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
