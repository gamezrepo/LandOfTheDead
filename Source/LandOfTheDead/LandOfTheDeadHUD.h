// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "LandOfTheDeadHUD.generated.h"

UCLASS()
class ALandOfTheDeadHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALandOfTheDeadHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

