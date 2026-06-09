#include "SpinActor.h"

ASpinActor::ASpinActor()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset
	(TEXT("/Game/Mega_Survival_Tools/Models/SM_Combat_Knife.SM_Combat_Knife"));
	if (MeshAsset.Succeeded())
	{
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}

	PrimaryActorTick.bCanEverTick = true;

	RotationSpeed = 120.0f;
}

void ASpinActor::BeginPlay()
{
	Super::BeginPlay();
}

void ASpinActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!FMath::IsNearlyZero(RotationSpeed))	// RotationSpeed가 0이 아니라면 회전 처리
	{
		// 초당 RotationSpeeed만큼, 한 프레임 당 (RotationSpeed * DeltaTiem) 만큼 회전
		AddActorLocalRotation(FRotator(0.0f, 0.0f, RotationSpeed * DeltaTime));
	}
}