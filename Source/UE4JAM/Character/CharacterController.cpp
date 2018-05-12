// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterController.h"
#include "GameFramework/Actor.h"
#include "PaperFlipbook.h"
#include "Camera/CameraComponent.h"

ACharacterController::ACharacterController()
{
	camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	if (camera != nullptr)
	{
		camera->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 400.0f), FRotator(0.0f, -90.0f, 0.0f));
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Couldn't find Camera component"));
	}
	
}

void ACharacterController::Tick(float DeltaTime)
{
	camera->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 200.0f), FRotator(0.0f, -90.0f, 0.0f));
}