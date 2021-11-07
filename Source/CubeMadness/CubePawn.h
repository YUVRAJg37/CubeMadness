// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "CubePawn.generated.h"

UCLASS()
class CUBEMADNESS_API ACubePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACubePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Component, meta=(AllowPrivateAccess = "true"))
	UBoxComponent* CollisionBox;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Component, meta=(AllowPrivateAccess = "true"))
	UStaticMeshComponent* BoxMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Component, meta=(AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArm;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Component, meta=(AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

};
