#pragma once
#include "CoreMinimal.h"
#include "RadiusAILightEvent.generated.h"

USTRUCT(BlueprintType)
struct FRadiusAILightEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    FRadiusAILightEvent();
};

