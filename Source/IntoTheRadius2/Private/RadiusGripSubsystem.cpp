#include "RadiusGripSubsystem.h"

URadiusGripSubsystem::URadiusGripSubsystem() {
}

void URadiusGripSubsystem::UnregisterHolster(const FString& ContainerUid) {
}

bool URadiusGripSubsystem::TryAttachItemToMostRelevantHolster(const EVRHand Hand, const bool bAttachedItem, const bool bMultigrippedItem) {
    return false;
}

void URadiusGripSubsystem::RemoveItemFromTrack(const EVRHand Hand, const bool bAttachedItem, const bool bMultigrippedItem) {
}

void URadiusGripSubsystem::RegisterHolster(const FString& ContainerUid, UObject* ContainerObject) {
}

UObject* URadiusGripSubsystem::GetMostRelevantContainer(const EVRHand Hand, const bool bAttachedItem, const bool bMultigrippedItem) {
    return NULL;
}

void URadiusGripSubsystem::ForceContainerRelevant(const EVRHand Hand, UObject* Container, const bool bAttachedItem, const bool bMultigrippedItem) {
}

bool URadiusGripSubsystem::CanAttachItemToMostRelevantHolster(const EVRHand Hand, const bool bAttachedItem) const {
    return false;
}

void URadiusGripSubsystem::AddItemToTrack(const EVRHand Hand, AActor* Item, const bool bAttachedItem, const bool bMultigrippedItem) {
}


