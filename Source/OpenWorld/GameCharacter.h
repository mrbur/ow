// Fill out your copyright notice in the Descrip,tion page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameCharacter.generated.h"

UCLASS()
class OPENWORLD_API AGameCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGameCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "GameChar")
	bool bbendingDown = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "GameChar")
	float ftake_pose = 0.0;

	UFUNCTION(BlueprintCallable, Category = "GameChar")
	void HeadMove(USphereComponent* _Sphere, UCameraComponent* _Camera);

	UFUNCTION(BlueprintCallable, Category = "GameChar")
	void SetTakePos(USphereComponent* _Sphere, UCameraComponent* _Camera);
};
