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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="MoveActor|Components")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MoveActor|Components")
	UStaticMeshComponent* StaticMeshComp;
	
	
	FVector StartLocation;

	float MoveDirection;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MoveActor|Components")
	float MoveSpeed;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MoveActor|Components")
	float MaxRange;

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};