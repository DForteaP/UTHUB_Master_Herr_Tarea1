// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL_Tools.generated.h"

/**
 * 
 */
UCLASS()
class TOOLSPLUGIN_API UBFL_Tools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:

	UFUNCTION(BlueprintCallable, Category = "MyPlugin|Utilities")
	static TArray<UStaticMesh*> ListStaticMeshActorsInLevel();
};
