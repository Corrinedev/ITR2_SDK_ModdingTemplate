#pragma once
#include "CoreMinimal.h"
#include "RadiusHealth.generated.h"

USTRUCT(BlueprintType)
struct FRadiusHealth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    FRadiusHealth();
};

