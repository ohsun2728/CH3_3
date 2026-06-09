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

	MoveSpeed = 200.0f;
	MaxRange = 500.0f;
}

void AMoveActor::BeginPlay()
{
	Super::BeginPlay();

	// 시작 위치 저장
	StartLocation = GetActorLocation();

	// 정방향 시작
	MoveDirection = 1.0f;
}

void AMoveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 현재 위치 가져오기
	FVector CurrentLocation = GetActorLocation();

	// 현재 방향으로 이동시키기
	CurrentLocation.X += MoveDirection * MoveSpeed * DeltaTime;
	SetActorLocation(CurrentLocation);

	// 시작 지점으로부터 얼마나 멀어졌는지 계산
	float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);

	// 설정한 최대 거리를 넘어가면 방향을 반대로 변경
	if (DistanceMoved >= MaxRange)
	{
		MoveDirection *= -1.0f;
	}
}