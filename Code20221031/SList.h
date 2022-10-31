#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);

void SListPushBack(SLTDataType** phead, SLTDataType x);
void SListPushFront(SLTDataType** phead, SLTDataType x);


void SListPopBack(SLTNode* pphead);
void SListPopFront(SLTNode** pphead);

SLTNode* BuySListnODE(SLTDataType x);
