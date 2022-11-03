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


void SListPopBack(SLTNode** pphead);
void SListPopFront(SLTNode** pphead);

SLTNode* BuySListNode(SLTDataType x);

SLTDataType* SListFind(SLTNode* phead, SLTDataType x);
void SListModify(SLTNode* phead, SLTDataType x, SLTDataType y);
void SListFrontPush(SLTNode** pphead, SLTDataType x, SLTDataType y);
void SListBackPush(SLTNode** pphead, SLTDataType x, SLTDataType y);

void SListPop(SLTNode** pphead, SLTDataType x);

void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
void SListErase(SLTNode** pphead, SLTNode* pos);
