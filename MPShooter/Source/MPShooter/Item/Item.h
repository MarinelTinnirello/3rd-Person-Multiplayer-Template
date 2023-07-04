// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

#pragma region Enums & Structs
#pragma region Enums
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
#pragma endregion

#pragma region Structs
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
	UPROPERTY(EditAnywhere, Category = "Combat", meta = (ToolTip = "SFX for when an item is unequipped."))
	USoundCue* UnequipSound;
};
#pragma endregion

#pragma endregion

UCLASS()
class MPSHOOTER_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	#pragma region Engine Overrides
	AItem();
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	#pragma endregion

	#pragma region Overrideable Actions
	virtual void Dropped();
	#pragma endregion

	#pragma region Actions
	void ShowPickupWidget(bool bShowWidget);
	#pragma endregion

protected:
	#pragma region Engine Overrides
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
	#pragma endregion

	#pragma region Overrideable Actions
	virtual void InitializeCustomDepth();

	virtual void OnItemStateSet();
	virtual void OnEquipped();
	virtual void OnEquippedSecondary();
	virtual void OnDropped();
	#pragma endregion

	#pragma region Actions
	void SetActiveStars();
	#pragma endregion

private:	
	#pragma region Item Components
	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "Sphere surrounding an item in order to equip them."))
	class USphereComponent* AreaSphere;
	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "Displays pick up information over an item before it's equipped."))
	class UWidgetComponent* PickupWidget;
	#pragma endregion

	#pragma region Item Properties
	//
	// Item Properties
	//
	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_ItemState, Category = "Item Properties", meta = (ToolTip = "State of an item (initial, equipped, dropped)."))
	EItemState ItemState;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Properties", meta = (AllowPrivateAccess = "true"), meta = (ToolTip = "Mesh of an item."))
	class USkeletalMeshComponent* ItemMesh;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Type of item."))
	EItemType ItemType;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Name of an item."))
	FString ItemName;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Description of an item."))
	FString ItemDescription;
	UPROPERTY(EditAnywhere, Category = "Item Properties", meta = (ToolTip = "Icon of an item in the inventory."))
	class UTexture2D* ItemIcon;
	UPROPERTY(EditAnywhere, Category = "Item Properties - Sounds", meta = (ToolTip = "SFX for when an item is picked up."))
	class USoundCue* PickupSound;
	UPROPERTY(EditAnywhere, Category = "Combat - Sounds", meta = (ToolTip = "SFX for when an item is equipped."))
	USoundCue* EquipSound;
	UPROPERTY(EditAnywhere, Category = "Combat - Sounds", meta = (ToolTip = "SFX for when an item is unequipped."))
	USoundCue* UnequipSound;

	#pragma region OnRep
	UFUNCTION()
	void OnRep_ItemState();
	#pragma endregion

	#pragma endregion

	#pragma region Rarity
	//
	// Rarity
	//
	UPROPERTY(EditAnywhere, Category = "Rarity", meta = (ToolTip = "Rarity of an item."))
	EItemRarity ItemRarity;
	UPROPERTY(VisibleAnywhere, Category = "Rarity", meta = (ToolTip = "Amount of stars currently, given the item's rarity."))
	TArray<bool> ActiveStars;
	UPROPERTY(VisibleAnywhere, Category = "Rarity", meta = (ToolTip = "Numver of stars shown in the PickupWidget, given the item's rarity."))
	int32 NumberOfStars;
	#pragma endregion

public:
	#pragma region Item Components
	FORCEINLINE USphereComponent* GetAreaSphere() const { return AreaSphere; }
	#pragma endregion

	#pragma region Getters & Setters
	void SetItemState(EItemState State);
	FORCEINLINE USkeletalMeshComponent* GetItemMesh() const { return ItemMesh; }
	void SetItemName(FString Name) { ItemName = Name; }
	void SetIconItem(UTexture2D* Icon) { ItemIcon = Icon; }
	FORCEINLINE USoundCue* GetPickupSound() const { return PickupSound; }
	FORCEINLINE USoundCue* GetEquipSound() const { return EquipSound; }
	FORCEINLINE USoundCue* GetUnequipSound() const { return UnequipSound; }
	#pragma endregion

	#pragma region Overrideable Actions
	virtual void EnableCustomDepth(bool bCanChangeCustomDepth);
	#pragma endregion

};
