// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "MPShooter/MPTypes/WeaponTypes.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	// Makes sure the weapon is shown where it's dropped between server and clients
	SetReplicateMovement(true);

	ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));
	SetRootComponent(ItemMesh);
	// Allows for item to bounce on drop and for us to step over it
	ItemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	ItemMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	AreaSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AreaSphere"));
	AreaSphere->SetupAttachment(RootComponent);
	// Collision should only really be done server-side, so ignore on client
	AreaSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	AreaSphere->SetSphereRadius(100.f);

	PickupWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("PickupWidget"));
	PickupWidget->SetupAttachment(RootComponent);
	// Set widget class in-editor
	PickupWidget->SetWidgetSpace(EWidgetSpace::Screen);
	PickupWidget->SetDrawAtDesiredSize(true);

	// Turns on an outline
	ItemMesh->SetCustomDepthStencilValue(CUSTOM_DEPTH_BLUE);
	ItemMesh->MarkRenderStateDirty();
	EnableCustomDepth(true);
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	
	if (HasAuthority())
	{
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		AreaSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
		AreaSphere->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnSphereOverlap);
		AreaSphere->OnComponentEndOverlap.AddDynamic(this, &AItem::OnSphereEndOverlap);
	}

	if (PickupWidget)
	{
		PickupWidget->SetVisibility(false);
	}

	SetActiveStars();
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AItem, ItemState);
}

void AItem::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void AItem::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
}

void AItem::SetActiveStars()
{
	// 0th element isn't used
	for (int32 i = 0; i <= 5; i++)
	{
		ActiveStars.Add(false);
	}

	switch (ItemRarity)
	{
	case EItemRarity::EIR_Damaged:
		ActiveStars[1] = true;
		break;
	case EItemRarity::EIR_Common:
		ActiveStars[1] = true;
		ActiveStars[2] = true;
		break;
	case EItemRarity::EIR_Uncommon:
		ActiveStars[1] = true;
		ActiveStars[2] = true;
		ActiveStars[3] = true;
		break;
	case EItemRarity::EIR_Rare:
		ActiveStars[1] = true;
		ActiveStars[2] = true;
		ActiveStars[3] = true;
		ActiveStars[4] = true;
		break;
	case EItemRarity::EIR_Legendary:
		ActiveStars[1] = true;
		ActiveStars[2] = true;
		ActiveStars[3] = true;
		ActiveStars[4] = true;
		ActiveStars[5] = true;
		break;
	}
}

void AItem::EnableCustomDepth(bool bCanChangeCustomDepth)
{
	if (bCanChangeCustomDepth)
	{
		ItemMesh->SetRenderCustomDepth(true);
	}
	else
	{
		ItemMesh->SetRenderCustomDepth(false);
	}
}

void AItem::InitializeCustomDepth()
{
	EnableCustomDepth(false);
}


void AItem::ShowPickupWidget(bool bShowWidget)
{
	if (PickupWidget)
	{
		PickupWidget->SetVisibility(bShowWidget);
	}
}

void AItem::SetItemState(EItemState State)
{
	ItemState = State;
	OnItemStateSet();
}

void AItem::OnRep_ItemState()
{
	OnItemStateSet();
}

void AItem::OnItemStateSet()
{
	switch (ItemState)
	{
	case EItemState::EIS_Equipped:
		OnEquipped();
		break;
	case EItemState::EIS_EquippedSecondary:
		OnEquippedSecondary();
		break;
	case EItemState::EIS_Dropped:
		OnDropped();
		break;
	}
}

void AItem::OnEquipped()
{
	ShowPickupWidget(false);
	AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ItemMesh->SetSimulatePhysics(false);
	ItemMesh->SetEnableGravity(false);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	EnableCustomDepth(false);
}

void AItem::OnEquippedSecondary()
{
	ShowPickupWidget(false);
	AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ItemMesh->SetSimulatePhysics(false);
	ItemMesh->SetEnableGravity(false);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	EnableCustomDepth(false);
}

void AItem::OnDropped()
{
	if (HasAuthority())
	{
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}

	ItemMesh->SetSimulatePhysics(true);
	ItemMesh->SetEnableGravity(true);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ItemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	ItemMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
	ItemMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	EnableCustomDepth(true);
}

void AItem::Dropped()
{
	SetItemState(EItemState::EIS_Dropped);
	FDetachmentTransformRules DetatchRules(EDetachmentRule::KeepWorld, true);
	ItemMesh->DetachFromComponent(DetatchRules);
	SetOwner(nullptr);
}