#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadiusLODActor.generated.h"

UCLASS()
class INTOTHERADIUS2_API ARadiusLODActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    ARadiusLODActor(const FObjectInitializer& ObjectInitializer);

};

