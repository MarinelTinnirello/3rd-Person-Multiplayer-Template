#pragma once

#include "CoreMinimal.h"
#include "Team.generated.h"

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

	UPROPERTY(EditAnywhere, Category = "Team Color Properties", meta = (ToolTip = "Material instance to be changed."))
	class UMaterialInstance* Material;
	// Might need to be an array of names, cause there might be more than 1 color to change
	// but this assumes we're only changing base color
	UPROPERTY(EditAnywhere, Category = "Team Color Properties", meta = (ToolTip = "Parameter on the material that changes the color."))
	FName ColorParam;
	UPROPERTY(EditAnywhere, Category = "Team Color Properties", meta = (ToolTip = "Checks if we should swap the color."))
	bool bSwapColor;
	UPROPERTY(EditAnywhere, Category = "Team Color Properties", meta = (ToolTip = "Checks if we should use the default color."))
	bool bDefaultColor;
};

namespace TeamColor
{
	const FLinearColor NoTeam(FLinearColor(1, 1, 1, 1));
	const FLinearColor RedTeam(FLinearColor(1, 0, 0, 1));
	const FLinearColor BlueTeam(FLinearColor(0, 0.352182, 1, 1));
}