// All content © 2018 DigiPen (USA) Corporation, all rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sample_01.generated.h"

UCLASS()
class UEWORKSHOP_SAMPLE_API ASample_01 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASample_01();

	int32 SampleInt = 1;

	float SampleFloat = 1.0f;

	bool SampleBool = true;

	void BlueprintVisibleFunction(int32 s_int, float s_float, bool s_bool);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
