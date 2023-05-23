// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AGameCharacter::AGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

// Called to bind functionality to input
void AGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AGameCharacter::HeadMove(USphereComponent* _Sphere, UCameraComponent* _Camera)
{
	
}

void AGameCharacter::SetTakePos(USphereComponent* _Sphere, UCameraComponent* _Camera)
{
	if (bbendingDown) {
		if (ftake_pose < 1) {
			ftake_pose += 0.01;
		}
	}
	else {
		if (ftake_pose > 0) {
			ftake_pose -= 0.02;
		}
	}

	FRotator fRotator = _Sphere->GetComponentRotation();
	FVector fVector = _Sphere->GetComponentLocation();

	_Camera->SetWorldRotation(fRotator);
	_Camera->SetWorldLocation(fVector);
}

