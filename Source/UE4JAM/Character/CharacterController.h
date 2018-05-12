// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "CharacterController.generated.h"


class UPaperFlipbook;
class UCameraComponent;
/**
 * 
 */
UCLASS()
class UE4JAM_API ACharacterController : public APaperCharacter
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flipbook")
	UPaperFlipbook* flipbook;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	UCameraComponent* camera;

	ACharacterController();


	
};
