// Fill out your copyright notice in the Description page of Project Settings.


#include "Tale4GameMode.h"

void ATale4GameMode::SecondsToNormalTime(float input1)
{
	minu = input1 % 60;
	sec=input1//60;

	return (float minu, float sec);
}