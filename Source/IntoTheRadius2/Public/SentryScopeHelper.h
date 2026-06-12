#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SentryScopeHelper.generated.h"

class USentryScope;

UCLASS()
class INTOTHERADIUS2_API USentryScopeHelper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Attachment;
    
    USentryScopeHelper();
    
    UFUNCTION(BlueprintCallable)
    void AddAttachmentToScope(USentryScope* Scope);
};

