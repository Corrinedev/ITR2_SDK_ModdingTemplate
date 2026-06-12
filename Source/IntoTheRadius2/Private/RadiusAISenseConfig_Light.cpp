#include "RadiusAISenseConfig_Light.h"

URadiusAISenseConfig_Light::URadiusAISenseConfig_Light() {
    this->Implementation = NULL;
    this->LightSenseRange = 100000.00f;
    this->SightRadius = 20000.00f;
    this->NearClippingRadius = 0.00f;
    this->PointOfViewBackwardOffset = 0.00f;
}

