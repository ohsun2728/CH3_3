#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveActor.generated.h"

UCLASS()
class CH3_3_API AMoveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMoveActor();

protected:
	USceneComponent* SceneRoot;

	UStaticMeshComponent* StaticMeshComp;
	
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};