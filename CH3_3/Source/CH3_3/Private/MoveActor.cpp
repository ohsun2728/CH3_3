#include "MoveActor.h"

AMoveActor::AMoveActor()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset
	(TEXT("/Game/Mega_Survival_Tools/Models/SM_Claw_Hammer.SM_Claw_Hammer"));
	if (MeshAsset.Succeeded())
	{
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}

	PrimaryActorTick.bCanEverTick = true;

}

void AMoveActor::BeginPlay()
{
	Super::BeginPlay();
}

void AMoveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}