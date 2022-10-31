#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"SList.h"
void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}

	printf("null\n");
}

void SListPushBack(SLTDataType** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListnODE(x);
	
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

SLTNode* BuySListnODE(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SListPushFront(SLTDataType** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListnODE(x);
		newnode->next = *pphead;
		*pphead = newnode;
}

void SListPopBack(SLTNode* pphead)
{

}
void SListPopFront(SLTNode** pphead)
{
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}