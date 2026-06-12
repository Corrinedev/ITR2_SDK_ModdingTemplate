#include "RadiusAISense_Light.h"

URadiusAISense_Light::URadiusAISense_Light() {
    this->Delay = 0.00f;
}

void URadiusAISense_Light::ReportLightEvent(UObject* WorldContextObject, const FVector LightLocation, AActor* Instigator, const float MaxRange, const FName Tag) {
}

