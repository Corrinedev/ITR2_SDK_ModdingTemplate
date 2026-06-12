#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "RadiusAISense_Light.generated.h"

UCLASS()
class INTOTHERADIUS2_API URadiusAISense_Light : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    URadiusAISense_Light();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportLightEvent(UObject* WorldContextObject, const FVector LightLocation, AActor* Instigator, const float MaxRange, const FName Tag);
};

