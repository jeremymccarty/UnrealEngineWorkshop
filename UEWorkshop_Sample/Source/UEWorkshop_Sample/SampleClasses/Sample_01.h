// Fill out your copyright notice in the Description page of Project Settings.

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SampleInt = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SampleFloat = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SampleBool = true;

	UFUNCTION(BlueprintCallable)
	void BlueprintVisibleFunction(int32 s_int, float s_float, bool s_bool);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
