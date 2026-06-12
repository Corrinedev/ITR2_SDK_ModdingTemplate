#include "UnderwaterBehaviorComponent.h"

UUnderwaterBehaviorComponent::UUnderwaterBehaviorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaterSplashEffect = NULL;
    this->SideEffectFrequency = 1.00f;
    this->WaterSplashEffectFrequency = 0.50f;
    this->DangerWaterDamageTypeClass = NULL;
    this->SafeWaterDamageTypeClass = NULL;
    this->MaxUnderwaterDepth = 0.00f;
}

float UUnderwaterBehaviorComponent::GetCurrentDepth() const {
    return 0.0f;
}

void UUnderwaterBehaviorComponent::BeginPlay() {
}


