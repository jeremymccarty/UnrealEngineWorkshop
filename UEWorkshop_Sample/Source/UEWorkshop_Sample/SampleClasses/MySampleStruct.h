// All content © 2018 DigiPen (USA) Corporation, all rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "MySampleStruct.generated.h"

USTRUCT(BlueprintType)
struct FMySampleStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct Members")
	int32 my_int;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct Members")
	float my_float;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct Members")
	bool my_bool;
};