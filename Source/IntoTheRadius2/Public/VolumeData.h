#pragma once
#include "CoreMinimal.h"
#include "VolumeData.generated.h"

USTRUCT(BlueprintType)
struct FVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* VolumeClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PolyFlags;

    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRootOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Polys;
    
    FVolumeData();
};

