#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL_Tools.generated.h"

UCLASS()
class TOOLSPLUGIN_API UBFL_Tools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Utilities")
	static TArray<UStaticMesh*> ListStaticMeshActorsInLevel();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utilities")
	static FString GetExportAssetDir();
};
