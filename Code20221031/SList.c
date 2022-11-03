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
	assert(pphead);
	SLTNode* newnode = BuySListNode(x);
	
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

SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SListPushFront(SLTDataType** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopBack(SLTNode** pphead)
{
	assert(pphead);

	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* tail = *pphead;
		/*SLTNode* tailPrev = NULL;

		while (tail->next != NULL)
		{
			tailPrev = tail;
			tail = tail->next;
		}
		free(tail);
		tailPrev->next = NULL;*/
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}
void SListPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

SLTDataType* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void SListModify(SLTNode* phead, SLTDataType x, SLTDataType y)
{
	SLTNode* ret = SListFind(phead, x);
	if (ret)
	{
		ret->data = y;
	}
}
void SListFrontPush(SLTNode** pphead, SLTDataType x, SLTDataType y)
{
	assert(pphead);
	assert(*pphead);
	SLTNode* pos = SListFind(*pphead, x);
	if (pos)
	{
		SListInsert(pphead, pos, y);
	}
}

void SListBackPush(SLTNode** pphead, SLTDataType x, SLTDataType y)
{
	assert(pphead);
	assert(*pphead);
	SLTNode* pos = SListFind(*pphead, x);
	if (pos)
	{
		if (pos == *pphead)
		{
			SListPushBack(pphead, x);
		}
		else
		{
			SLTNode* newnode = BuySListNode(x);
			newnode->next = pos->next;
			pos->next = newnode;
			newnode->data = y;
		}
	}
}

void SListPop(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	assert(*pphead);
	SLTNode* pos = SListFind(*pphead, x);
	if (pos)
	{
		SListErase(pphead, pos);
	}
}

void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pos);
	assert(pphead);
	if (pos == *pphead)
	{
		SListPushFront(pphead, x);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos )
		{
			prev = prev->next;
		}
		SLTNode* newnode = BuySListNode(x);
		prev->next = newnode;
		newnode->next = pos;		
	}
}
void SListErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);
	if (*pphead == pos)
	{
		SListPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}