#pragma once

UENUM(BlueprintType)
enum class EHitActor : uint8
{
	EHA_None UMETA(DisplayName = "None"),
	EHA_Character UMETA(DisplayName = "Character"),
	EHA_Environment UMETA(DisplayName = "Environment"),

	EHA_MAX UMETA(DisplayName = "DefaultMAX")
};