#pragma once
#include "CoreMinimal.h"
#include "RadiusAISightAngles.generated.h"

USTRUCT(BlueprintType)
struct FRadiusAISightAngles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Horizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Vertical;
    
    FRadiusAISightAngles();
};

