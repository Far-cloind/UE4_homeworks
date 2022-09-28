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

	// �ӿں���
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
	

	//����ǰ���ƶ�����
	UFUNCTION()
	void MoveForward(float Value);

	//���������ƶ�����
	UFUNCTION()
	void MoveRight(float Value);

	// ��Ծ������
	UFUNCTION()
	void StartJump();
	
	// ��Ծ���ͷ�
	UFUNCTION()
	void StopJump();


	// ���ɱ�
	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArm;

	// �����
	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;

	// 
};
