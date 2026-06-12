#include "RadiusLODActor.h"

ARadiusLODActor::ARadiusLODActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
}

