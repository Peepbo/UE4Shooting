// Fill out your copyright notice in the Description page of Project Settings.


#include "CountDownWidget.h"
#include <Components/ProgressBar.h>

void UCountDownWidget::Init()
{
	//MyProgressBar->Percent = 0.75f;
	MyProgressBar->SetPercent(0.75f);
}
