// All content © 2018 DigiPen (USA) Corporation, all rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "MySampleEnum.generated.h"

UENUM(BlueprintType)
enum MySampleEnum
{
	mse_firstElement UMETA(DisplayName = "First Element"),
	mse_secondElement UMETA(DisplayName = "Second Element")
};