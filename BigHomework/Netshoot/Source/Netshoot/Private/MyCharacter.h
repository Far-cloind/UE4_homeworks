// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "MyInterface.h"
#include "MyCharacter.generated.h"

UCLASS()
class AMyCharacter : public ACharacter, public IMyInterface
{
	GENERATED_BODY()

	// 接口函数
	//virtual void AnimEssensialParams(float& Pitch, float& Yaw);
public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	

	//处理前后移动输入
	UFUNCTION()
	void MoveForward(float Value);

	//处理左右移动输入
	UFUNCTION()
	void MoveRight(float Value);

	// 跳跃键按下
	UFUNCTION()
	void StartJump();
	
	// 跳跃键释放
	UFUNCTION()
	void StopJump();


	// 弹簧臂
	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArm;

	// 摄像机
	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;

	// 
};
