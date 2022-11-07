#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

void menu();

//void ListInit(LTNode** phead);
LTNode* ListInit();

void ListPushBack(LTNode* phead, LTDataType x);

void ListPrint(LTNode* phead);

void ListPushFront(LTNode* phead, LTDataType x);

void ListPopFront(LTNode* phead);
void ListPopBack(LTNode* phead);
bool ListEmpty(LTNode* phead);

void ListFrontInsert(LTNode* pos, LTDataType x);
void ListBackInsert(LTNode* pos, LTDataType x);

void ListErase(LTNode* pos);
int ListSize(LTNode* phead);

void ListDestory(LTNode* phead);
void ListModify(LTNode* phead, LTDataType x, LTDataType y);
LTNode* ListFind(LTNode* phead, LTDataType x);