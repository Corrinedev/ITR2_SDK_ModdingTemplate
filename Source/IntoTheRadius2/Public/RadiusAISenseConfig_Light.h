#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "RadiusAISenseConfig_Light.generated.h"

UCLASS()
class INTOTHERADIUS2_API URadiusAISenseConfig_Light : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISense* Implementation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightSenseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearClippingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointOfViewBackwardOffset;
    
    URadiusAISenseConfig_Light();
};

