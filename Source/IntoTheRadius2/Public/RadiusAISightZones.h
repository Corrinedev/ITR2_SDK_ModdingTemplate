#pragma once
#include "CoreMinimal.h"
#include "RadiusAISightZone.h"
#include "RadiusAISightZones.generated.h"

USTRUCT(BlueprintType)
struct FRadiusAISightZones {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DetectTimeCurve;
    
    FRadiusAISightZones();
};

