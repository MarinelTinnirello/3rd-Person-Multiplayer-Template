// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponWheelWidget.h"
#include "Components/Image.h"

void UWeaponWheelWidget::ChangeColorOnHover(bool bIsHovered, UButton* button, UImage* image, UWidgetAnimation* hoverAnimation)
{
	if (bIsHovered)
	{
		if (hoverAnimation) PlayAnimation(hoverAnimation);
		if (image) image->SetColorAndOpacity(ImageHoverColor);
	}
	else
	{
		if (hoverAnimation) PlayAnimationReverse(hoverAnimation);
		if (image) image->SetColorAndOpacity(FColor(255, 255, 255, 255));
	}
}
