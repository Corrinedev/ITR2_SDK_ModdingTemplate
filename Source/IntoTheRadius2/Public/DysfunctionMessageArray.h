#pragma once
#include "CoreMinimal.h"
#include "DysfunctionMessageGroup.h"
#include "DysfunctionMessageArray.generated.h"

USTRUCT(BlueprintType)
struct FDysfunctionMessageArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDysfunctionMessageGroup> Messages;
    
    INTOTHERADIUS2_API FDysfunctionMessageArray();
};

