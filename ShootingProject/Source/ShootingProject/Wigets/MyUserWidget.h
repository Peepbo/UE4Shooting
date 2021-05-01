// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
class UButton;
class UTextBlock;
class UCanvasPanel;
UCLASS()
class SHOOTINGPROJECT_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* m_MainBtn;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* m_BtnName;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCanvasPanel* m_MainCanvas;
};
