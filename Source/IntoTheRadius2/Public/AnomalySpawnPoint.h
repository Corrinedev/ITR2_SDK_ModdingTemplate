#pragma once
#include "CoreMinimal.h"
#include "MonsterSpawnPoint.h"
#include "AnomalySpawnPoint.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API AAnomalySpawnPoint : public AMonsterSpawnPoint {
    GENERATED_BODY()
public:
    AAnomalySpawnPoint(const FObjectInitializer& ObjectInitializer);

};

