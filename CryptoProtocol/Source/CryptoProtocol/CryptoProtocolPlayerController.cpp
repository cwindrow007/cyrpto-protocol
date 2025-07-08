// Copyright Epic Games, Inc. All Rights Reserved.


#include "CryptoProtocolPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "CryptoProtocolCameraManager.h"

ACryptoProtocolPlayerController::ACryptoProtocolPlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = ACryptoProtocolCameraManager::StaticClass();
}

void ACryptoProtocolPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}
	}
}
