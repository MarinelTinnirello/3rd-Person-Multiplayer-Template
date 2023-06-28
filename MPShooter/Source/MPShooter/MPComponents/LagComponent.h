// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LagComponent.generated.h"

#pragma region Structs
#pragma region Physics Assets
USTRUCT(BlueprintType)
struct FBoxInformation
{
	GENERATED_BODY()

	UPROPERTY()
	FVector Location;
	UPROPERTY()
	FRotator Rotation;
	UPROPERTY()
	FVector BoxExtent;
};

USTRUCT(BlueprintType)
struct FCapsuleInformation
{
	GENERATED_BODY()

	UPROPERTY()
	FVector Location;
	UPROPERTY()
	FRotator Rotation;
	UPROPERTY()
	float CapsuleHalfHeight;
	UPROPERTY()
	float CapsuleRadius;
};
#pragma endregion

#pragma region Server-Side Rewind
USTRUCT(BlueprintType)
struct FFramePackage
{
	GENERATED_BODY()

	UPROPERTY()
	float Time;
	UPROPERTY()
	AMPCharacter* Character;
	UPROPERTY()
	TMap<FName, FBoxInformation> HitBoxInfo;
	UPROPERTY()
	TMap<FName, FCapsuleInformation> HitCapsuleInfo;
};

USTRUCT(BlueprintType)
struct FServerSideRewindResult
{
	GENERATED_BODY()

	UPROPERTY()
	bool bHitConfirmed;
	UPROPERTY()
	bool bHeadShot;
};

USTRUCT(BlueprintType)
struct FServerSideRewindShotgunResult
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<AMPCharacter*, uint32> HeadShots;
	UPROPERTY()
	TMap<AMPCharacter*, uint32> BodyShots;

};
#pragma endregion

#pragma endregion

#pragma region Forward Declarations
class AMPPlayerController;
#pragma endregion

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MPSHOOTER_API ULagComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	friend class AMPCharacter;

	#pragma region Constructor & Engine Overrides
	ULagComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	#pragma endregion

	#pragma region Actions
	void ShowFramePackage(const FFramePackage& Package, const FColor& Color);

	#pragma region Hit Scan
	//
	// Hit Scan
	//
	UFUNCTION(Server, Reliable)
	void ServerScoreRequest(
		AMPCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize& HitLocation,
		float HitTime
	);
	FServerSideRewindResult ServerSideRewind(
		class AMPCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize& HitLocation,
		float HitTime
	);
	#pragma endregion

	#pragma region Shotgun
	//
	// Shotgun
	//
	UFUNCTION(Server, Reliable)
	void ServerScoreRequestShotgun(
		const TArray<AMPCharacter*>& HitCharacters,
		const FVector_NetQuantize& TraceStart,
		const TArray<FVector_NetQuantize>& HitLocations,
		float HitTime
	);
	FServerSideRewindShotgunResult ServerSideRewindShotgun(
		const TArray<AMPCharacter*>& HitCharacters,
		const FVector_NetQuantize& TraceStart,
		const TArray<FVector_NetQuantize>& HitLocations,
		float HitTime
	);
	#pragma endregion

	#pragma region Projectile
	//
	// Projectile
	//
	UFUNCTION(Server, Reliable)
	void ServerScoreRequestProjectile(
		AMPCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize100& InitialVelocity,
		float HitTime
	);
	FServerSideRewindResult ServerSideRewindProjectile(
		AMPCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize100& InitialVelocity,
		float HitTime
	);
	#pragma endregion

	#pragma endregion

protected:
	#pragma region Engine Overrides
	virtual void BeginPlay() override;
	#pragma endregion

	#pragma region Actions
	#pragma region Frames
	void SaveFramePackage();
	void SaveFramePackage(FFramePackage& Package);
	FFramePackage GetFrameToCheck(AMPCharacter* HitCharacter, float HitTime);
	FFramePackage InterpBetweenFrames(const FFramePackage& OlderFrame, const FFramePackage& YoungerFrame, float HitTime);
	#pragma endregion

	#pragma region Collision
	void CacheHitPositions(AMPCharacter* HitCharacter, FFramePackage& OutFramePackage);
	void MoveHitColliders(AMPCharacter* HitCharacter, const FFramePackage& Package);
	void ResetHitColliders(AMPCharacter* HitCharacter, const FFramePackage& Package);
	void EnableCharacterMeshCollision(AMPCharacter* HitCharacter, ECollisionEnabled::Type CollisionEnabled);
	#pragma endregion

	#pragma region Server-Side Rewind
	#pragma region Hit Scan
	//
	// Hit Scan
	//
	FServerSideRewindResult ConfirmHit(
		const FFramePackage& Package,
		AMPCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize& HitLocation
	);
	#pragma endregion

	#pragma region Shotgun
	//
	// Shotgun
	//
	FServerSideRewindShotgunResult ConfirmHitShotgun(
		const TArray<FFramePackage>& FramePackages,
		const FVector_NetQuantize& TraceStart,
		const TArray<FVector_NetQuantize>& HitLocations
	);
	#pragma endregion

	#pragma region Projectile
	//
	// Projectile
	//
	FServerSideRewindResult ConfirmHitProjectile(
		const FFramePackage& Package,
		AMPCharacter* HitCharacter,
		const FVector_NetQuantize& TraceStart,
		const FVector_NetQuantize100& InitialVelocity,
		float HitTime
	);
	#pragma endregion

	#pragma endregion

	#pragma endregion

private:	
	#pragma region References
	UPROPERTY()
	AMPCharacter* Character;
	UPROPERTY()
	AMPPlayerController* Controller;
	#pragma endregion

	#pragma region Frame Properties
	//
	// Frame Properties
	//
	TDoubleLinkedList<FFramePackage> FrameHistory;
	UPROPERTY(EditAnywhere, Category = "Frame Properties", meta = (ToolTip = "Amount of time to draw debug lines for."))
	float ShowFramePkgLifeSpan = 4.f;
	UPROPERTY(EditAnywhere, Category = "Frame Properties", meta = (ToolTip = "Stores frame history over max amount of time."))
	float MaxRecordTime = 4.f;
	UPROPERTY(EditAnywhere, Category = "Frame Properties", meta = (ToolTip = "Name of the head bone, taken from one of the various hit collision types."))
	FName HeadBone;
	#pragma endregion

	#pragma region DEBUG
	//
	// DEBUG
	//
	UPROPERTY(EditAnywhere, Category = "DEBUG", meta = (ToolTip = "Checks whether or not to draw the frame packages for Server-Side Rewind."))
	bool bDrawSSRFramePkg = false;
	UPROPERTY(EditAnywhere, Category = "DEBUG", meta = (ToolTip = "Checks whether or not to draw the hit confirmation."))
	bool bDrawSSRConfirmHit = false;
	#pragma endregion
	
};
