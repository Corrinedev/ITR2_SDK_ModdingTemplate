#pragma once
#include "CoreMinimal.h"
#include "RadiusAISightZone.generated.h"

USTRUCT(BlueprintType)
struct FRadiusAISightZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FRadiusAISightZone();
};

