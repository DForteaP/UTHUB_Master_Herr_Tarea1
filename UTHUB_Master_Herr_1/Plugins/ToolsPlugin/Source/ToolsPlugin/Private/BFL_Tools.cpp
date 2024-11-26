// Fill out your copyright notice in the Description page of Project Settings.


#include "BFL_Tools.h"

#include "AssetExportTask.h"
#include "EngineUtils.h"
#include "Engine/StaticMeshActor.h"
#include "Exporters/StaticMeshExporterFBX.h"

TArray<UStaticMesh*> UBFL_Tools::ListStaticMeshActorsInLevel()
{
	TArray<UStaticMesh*> MeshAssets;

#if WITH_EDITOR
	if (!GEditor)
	{
		return MeshAssets;
	}
	
	const FWorldContext& EditorWorldContext = GEditor->GetEditorWorldContext();
	UWorld* World = EditorWorldContext.World();

	if (!World)
	{
		return MeshAssets;
	}
	
	for (TActorIterator<AStaticMeshActor> It(World); It; ++It)
	{
		AStaticMeshActor* StaticMeshActor = *It;

		if (StaticMeshActor && StaticMeshActor->GetStaticMeshComponent())
		{
			UStaticMesh* StaticMesh = StaticMeshActor->GetStaticMeshComponent()->GetStaticMesh();
			if (StaticMesh)
			{
				MeshAssets.Add(StaticMesh);
			}
		}
	}
#else
	UE_LOG(LogTemp, Warning, TEXT("Esta función solo se puede usar en el editor."));
#endif

	return MeshAssets;
}

