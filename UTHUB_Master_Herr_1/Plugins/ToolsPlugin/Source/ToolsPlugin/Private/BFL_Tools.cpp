#include "BFL_Tools.h"
#include "EngineUtils.h"
#include "AssetRegistry/AssetRegistryModule.h"
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


void UBFL_Tools::GetAllDependenciesRecursive(const IAssetRegistry& AssetRegistry, const FName& PackageName, TSet<FName>& AllDependencies)
{
	TArray<FName> DirectDependencies;
	if (AssetRegistry.GetDependencies(PackageName, DirectDependencies))
	{
		for (const FName& Dependency : DirectDependencies)
		{
			if (!AllDependencies.Contains(Dependency))
			{
				AllDependencies.Add(Dependency);
				GetAllDependenciesRecursive(AssetRegistry, Dependency, AllDependencies);
			}
		}
	}
}


void UBFL_Tools::ListDependencies()
{
	const FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	const IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();
	TArray<FAssetData> AllAssets;
	AssetRegistry.GetAllAssets(AllAssets);
	FStringBuilderBase OutputBuilder;

	for (const FAssetData& Asset : AllAssets)
	{
		TArray<FName> References;
		if (!AssetRegistry.GetReferencers(Asset.AssetName, References))
		{
			OutputBuilder.Appendf(TEXT("%s [ROOT]\n"), *Asset.GetSoftObjectPath().ToString());
			TSet<FName> AllDependencies;
			GetAllDependenciesRecursive(AssetRegistry, Asset.PackageName, AllDependencies);

			for (const FName& Dependency : AllDependencies)
			{
				OutputBuilder.Appendf(TEXT("   | - %s\n"), *Dependency.ToString());
			}
		}
	}
	ExportListDependencies(OutputBuilder.ToString());
}

void UBFL_Tools::ExportListDependencies(const FString& LogContent)
{
	if(LogContent.IsEmpty()) return;
	const FString FilePath = FPaths::ProjectSavedDir() /TEXT("Logs/UTHUB_Master_Herr1_") + FDateTime::Now().ToString() + TEXT(".log");
	if(FFileHelper::SaveStringToFile(LogContent, *FilePath))
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(FString::Printf(TEXT("El log ha sido almacenado en: %s"), *FilePath)));
	}
}

