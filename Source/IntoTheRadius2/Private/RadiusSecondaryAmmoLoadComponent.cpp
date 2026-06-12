#include "RadiusSecondaryAmmoLoadComponent.h"

URadiusSecondaryAmmoLoadComponent::URadiusSecondaryAmmoLoadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerRadiusFirearmComponent = NULL;
    this->InternalBulletComponent = NULL;
}

void URadiusSecondaryAmmoLoadComponent::Server_OnAmmoInserted_Internal_Implementation(const FGameplayTag BulletTag) {
}

void URadiusSecondaryAmmoLoadComponent::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void URadiusSecondaryAmmoLoadComponent::OnInsertAnimationEnded() {
}

void URadiusSecondaryAmmoLoadComponent::Multicast_OnAmmoInserted_Internal_Implementation(const FGameplayTag BulletTag) {
}

void URadiusSecondaryAmmoLoadComponent::FireOnAmmoInserted(FGameplayTag BulletTag) const {
}


