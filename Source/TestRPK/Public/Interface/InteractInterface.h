
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"


UINTERFACE(MinimalAPI, Blueprintable)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

 
class TESTRPK_API IInteractInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Interact();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Activate();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	bool GetArtifactNameAndDescription(FString& ArtifactName, FString& ArtifactDescription);
};
