#pragma once

#include "CoreMinimal.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL_Tools.generated.h"

UCLASS()
class TOOLSPLUGIN_API UBFL_Tools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	static void GetAllDependenciesRecursive(const IAssetRegistry& AssetRegistry, const FName& PackageName, TSet<FName>& AllDependencies);
	
public:
	
	UFUNCTION(BlueprintCallable, Category = "Utilities")
	static TArray<UStaticMesh*> ListStaticMeshActorsInLevel();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utilities")
	static FString GetExportAssetDir();
	
	UFUNCTION(BlueprintCallable, Category = "Utilities")
	static void ListDependencies();

	UFUNCTION(BlueprintCallable, Category= "Utilities")
	static void ExportListDependencies(const FString& LogContent);
};
