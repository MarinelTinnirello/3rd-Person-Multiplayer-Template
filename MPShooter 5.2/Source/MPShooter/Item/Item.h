// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8
{
	EIT_Weapon UMETA(DisplayName = "Weapon"),
	EIT_Equipment UMETA(DisplayName = "Equipment"),
	EIT_Consumable UMETA(DisplayName = "Consumable"),
	EIT_Material UMETA(DisplayName = "Material"),

	EIT_MAX UMETA(DisplayName = "DefaultMAX")
};
UENUM(BlueprintType)
enum class EItemRarity : uint8
{
	EIR_Damaged UMETA(DisplayName = "Damaged"),
	EIR_Common UMETA(DisplayName = "Common"),
	EIR_Uncommon UMETA(DisplayName = "Uncommon"),
	EIR_Rare UMETA(DisplayName = "Rare"),
	EIR_Legendary UMETA(DisplayName = "Legendary"),

	EIR_MAX UMETA(DisplayName = "DefaultMAX")
};
UENUM(BlueprintType)
enum class EItemState : uint8
{
	EIS_Initial UMETA(DisplayName = "Initial"),
	EIS_Equipped UMETA(DisplayName = "Equipped"),
	EIS_EquippedSecondary UMETA(DisplayName = "EquippedSecondary"),
	EIS_Dropped UMETA(DisplayName = "Dropped"),

	EIS_MAX UMETA(DisplayName = "DefaultMAX")
};

USTRUCT(BlueprintType)
struct FItemProperties
{
	GENERATED_BODY()

	//
	// Item Properties
	//
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Mesh of an item."))
	class USkeletalMesh* ItemMesh;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Type of item."))
	EItemType ItemType;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Name of an item."))
	FString ItemName;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Description of an item."))
	FString ItemDescription;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Icon of an item in the inventory."))
	class UTexture2D* ItemIcon;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "SFX for when an item is picked up."))
	class USoundCue* PickupSound;

	//
	// Combat Properties
	//
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "SFX for when an item is equipped."))
	USoundCue* EquipSound;
};

UCLASS()
class MPSHOOTER_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem();
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void ShowPickupWidget(bool bShowWidget);

	virtual void Dropped();

protected:
	virtual void BeginPlay() override;
	UFUNCTION()
	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
	UFUNCTION()
	virtual void OnSphereEndOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndex
	);

	virtual void InitializeCustomDepth();

	virtual void OnItemStateSet();
	virtual void OnEquipped();
	virtual void OnEquippedSecondary();
	virtual void OnDropped();

	void SetActiveStars();

private:	
	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "Sphere surrounding an item in order to equip them."))
	class USphereComponent* AreaSphere;
	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "Displays pick up information over an item before it's equipped."))
	class UWidgetComponent* PickupWidget;

	//
	// Item Properties
	//
	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_ItemState, Category = "Item Properties", meta = (ToolTip = "State of an item (initial, equipped, dropped)."))
	EItemState ItemState;
	UPROPERTY(VisibleAnywhere, Category = "Item Properties", meta = (ToolTip = "Mesh of an item."))
	class USkeletalMeshComponent* ItemMesh;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Type of item."))
	EItemType ItemType;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Name of an item."))
	FString ItemName;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Description of an item."))
	FString ItemDescription;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Icon of an item in the inventory."))
	class UTexture2D* ItemIcon;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "SFX for when an item is picked up."))
	class USoundCue* PickupSound;
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "SFX for when an item is equipped."))
	USoundCue* EquipSound;

	UFUNCTION()
	void OnRep_ItemState();

	//
	// Rarity
	//
	UPROPERTY(EditAnywhere, Category = "Rarity", meta = (ToolTip = "Rarity of an item."))
	EItemRarity ItemRarity;
	UPROPERTY(VisibleAnywhere, Category = "Rarity", meta = (ToolTip = "Amount of stars currently, given the item's rarity."))
	TArray<bool> ActiveStars;
	UPROPERTY(VisibleAnywhere, Category = "Rarity", meta = (ToolTip = "Numver of stars shown in the PickupWidget, given the item's rarity."))
	int32 NumberOfStars;

public:
	FORCEINLINE USphereComponent* GetAreaSphere() const { return AreaSphere; }

	void SetItemState(EItemState State);
	FORCEINLINE USkeletalMeshComponent* GetItemMesh() const { return ItemMesh; }
	void SetItemName(FString Name) { ItemName = Name; }
	void SetIconItem(UTexture2D* Icon) { ItemIcon = Icon; }
	FORCEINLINE USoundCue* GetPickupSound() const { return PickupSound; }
	FORCEINLINE USoundCue* GetEquipSound() const { return EquipSound; }

	virtual void EnableCustomDepth(bool bCanChangeCustomDepth);

};
