#pragma once

UENUM(BlueprintType)
enum class ETeam : uint8
{
	ET_NoTeam UMETA(DisplayName = "No Team"),
	ET_RedTeam UMETA(DisplayName = "Red Team"),
	ET_BlueTeam UMETA(DisplayName = "Blue Team"),

	ET_MAX UMETA(DisplayName = "DefaultMAX")
};

USTRUCT(BlueprintType)
struct FTeamColorInformation
{
	GENERATED_BODY()

	UPROPERTY()
	class UMaterialInstance* Material;
	// Might need to be an array of names, cause there might be more than 1 color to change
	// but this assumes we're only changing base color
	UPROPERTY()
	FName ColorParam;
	UPROPERTY()
	bool bSwapColor;
};

namespace TeamColor
{
	const FLinearColor NoTeam(FColor(1, 1, 1, 1));
	const FLinearColor RedTeam(FColor(1, 0, 0, 1));
	const FLinearColor BlueTeam(FColor(0, 0.352182, 1, 1));
}