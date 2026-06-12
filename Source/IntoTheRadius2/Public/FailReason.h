#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FailReason.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FFailReason {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ReasonTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FText> WeaponTypeToLocalizedText;

    FFailReason();
};

