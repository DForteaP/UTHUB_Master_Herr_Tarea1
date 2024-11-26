#include "BFL_Tools.h"
#include "EngineUtils.h"
#include "Engine/StaticMeshActor.h"
#include "Kismet/KismetSystemLibrary.h"

TArray<UStaticMesh*> UBFL_Tools::ListStaticMeshActorsInLevel()
{
	TArray<UStaticMesh*> MeshAssets;

	#if WITH_EDITOR
		if (!GEditor){return MeshAssets;}
		
		const FWorldContext& EditorWorldContext = GEditor->GetEditorWorldContext();
		const UWorld* World = EditorWorldContext.World();

		if (!World){return MeshAssets;}
		
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
	#endif
	
	return MeshAssets;
}

FString UBFL_Tools::GetExportAssetDir()
{
	return UKismetSystemLibrary::GetProjectContentDirectory() / TEXT("Saved/Rework");
}



