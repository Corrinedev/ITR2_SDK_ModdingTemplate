#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFoldingStockState.h"
#include "FoldingStockRotatorComponent.generated.h"

class UAudioComponent;
class UGripMotionControllerComponent;
class UPrimitiveComponent;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UFoldingStockRotatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> RotationsToFullyFold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleToFoldAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LockSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* UnlockSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerAlignmentThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    UFoldingStockRotatorComponent(const FObjectInitializer& ObjectInitializer);
    
private:
    UFUNCTION(BlueprintCallable)
    void SwitchState(bool bFolded);
    
    UFUNCTION(BlueprintCallable)
    void OnStockGripped(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintCallable)
    void OnStockDropped(UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyUnfolded() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void InitializeAudioComponent();
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(UPrimitiveComponent* InAnchor, UPrimitiveComponent* InStockMesh);
    
};

