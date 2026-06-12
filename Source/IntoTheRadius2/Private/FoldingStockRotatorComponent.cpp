#include "FoldingStockRotatorComponent.h"

UFoldingStockRotatorComponent::UFoldingStockRotatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AngleToFoldAutomatically = 15.00f;
    this->LockSound = NULL;
    this->UnlockSound = NULL;
    this->LerpCoefficient = 6.00f;
    this->ControllerVelocityThreshold = 30.00f;
    this->ControllerAlignmentThreshold = 0.70f;
    this->AudioComponent = NULL;
}

void UFoldingStockRotatorComponent::SwitchState(bool bFolded) {
}

void UFoldingStockRotatorComponent::OnStockGripped(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation) {
}

void UFoldingStockRotatorComponent::OnStockDropped(UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed) {
}

bool UFoldingStockRotatorComponent::IsLocked() const {
    return false;
}

bool UFoldingStockRotatorComponent::IsFullyUnfolded() const {
    return false;
}

void UFoldingStockRotatorComponent::InitializeAudioComponent() {
}

void UFoldingStockRotatorComponent::Init(UPrimitiveComponent* InAnchor, UPrimitiveComponent* InStockMesh) {
}

