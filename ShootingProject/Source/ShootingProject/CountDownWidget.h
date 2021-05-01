// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CountDownWidget.generated.h"

class UProgressBar;
/**
 * 
 */
UCLASS(HideDropDown)
class SHOOTINGPROJECT_API UCountDownWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(meta=(BindWidget))
		UProgressBar* MyProgressBar;

	UFUNCTION(BlueprintCallable, Category = "Function")
		void Init();
};
