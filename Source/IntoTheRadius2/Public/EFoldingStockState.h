#pragma once
#include "CoreMinimal.h"
#include "EFoldingStockState.generated.h"

UENUM(BlueprintType)
enum class EFoldingStockState : uint8 {
    NotInitialized,
    FullyUnfolded,
    Unlocked,
    FullyFolded,
};

