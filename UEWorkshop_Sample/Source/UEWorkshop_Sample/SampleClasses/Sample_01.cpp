// All content © 2018 DigiPen (USA) Corporation, all rights reserved.

#include "Sample_01.h"


// Sets default values
ASample_01::ASample_01()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ASample_01::BlueprintVisibleFunction(int32 s_int, float s_float, bool s_bool)
{
}

// Called when the game starts or when spawned
void ASample_01::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASample_01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

