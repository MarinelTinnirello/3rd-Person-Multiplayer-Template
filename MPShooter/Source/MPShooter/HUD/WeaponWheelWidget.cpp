// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponWheelWidget.h"
#include "Components/Image.h"

void UWeaponWheelWidget::ChangeColorOnHover(bool bIsHovered, UButton* button, UImage* image)
{
	if (image == nullptr)
	{
		return;
	}

	if (bIsHovered)
	{
		image->ColorAndOpacity = ImageHoverColor;
	}
	else
	{
		image->ColorAndOpacity = FColor(255, 255, 255, 255);
	}
}
