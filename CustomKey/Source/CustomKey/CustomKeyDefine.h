// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomKeyDefine.generated.h"

/**
 * 按键对应 id 信息
 */
USTRUCT( BlueprintType )
struct FKeyBoardIdInfo : public FTableRowBase
{
	GENERATED_BODY()

	/* Id */
	UPROPERTY( BlueprintReadWrite, EditAnywhere )
	FKey Key;
	
	/* 注释 */
	UPROPERTY( BlueprintReadWrite, EditAnywhere )
	FString KeyName;

	/* Id */
	UPROPERTY( BlueprintReadWrite, EditAnywhere )
	int KeyId = 0;
};