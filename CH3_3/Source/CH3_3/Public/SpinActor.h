#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpinActor.generated.h"

UCLASS()
class CH3_3_API ASpinActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpinActor();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="SpinActor|Components")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpinActor|Components")
	UStaticMeshComponent* StaticMeshComp;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="SpinActor|Components")
	float RotationSpeed;	// 회전 속도를 나타내는 변수

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
