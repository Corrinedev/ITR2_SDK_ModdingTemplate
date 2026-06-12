#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RadiusWeaponShootFailExplainer.generated.h"

UCLASS()
class INTOTHERADIUS2_API URadiusWeaponShootFailExplainer : public UObject {
    GENERATED_BODY()
public:
    URadiusWeaponShootFailExplainer(const FObjectInitializer& ObjectInitializer);
    
    UFUNCTION(BlueprintCallable)
    void ProcessFailedShot();
};

