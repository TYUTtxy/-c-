#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"



LTNode* BuyListNode(LTDataType x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->data = x;
	node->next = NULL;
	node->prev = NULL;
	return node;
}

//void ListInit(LTNode** pphead)
//{
//	*pphead = BuyListNode(-1);
//	(* pphead)->next = *pphead;
//	(* pphead)->prev = *pphead;
//}

void menu()
{
	printf("*****************************************************************\n");
	printf("1、尾插      2、头插\n");
	printf("3、尾删      4、头删\n");
	printf("5、前面插    6、后面插\n");
	printf("7、任意删    8、前删\n");
	printf("9、后删    10、修改\n");
	printf("11、打印     -1、退出\n");

	printf("*****************************************************************\n");

}

LTNode* ListInit()
{
	LTNode* phead = BuyListNode(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
void ListPushBack(LTNode* phead, LTDataType x) {
	assert(phead);
	/*LTNode* newnode = BuyListNode(x);
	LTNode* tail = phead->prev;
	newnode->next = phead;
	newnode->prev = tail;
	tail->next = newnode;
	phead->prev = newnode;*/
	ListFrontInsert(phead, x);
}
void ListPrint(LTNode* phead){
	assert(phead);
	LTNode* cur = phead->next;
	while (cur!=phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void ListPushFront(LTNode* phead, LTDataType x) {
	assert(phead);
	/*LTNode* newnode = BuyListNode(x);
	LTNode* head = phead->next;
	newnode->next = head;
	newnode->prev = phead;
	phead->next = newnode;
	head->prev = newnode;*/
	ListFrontInsert(phead->next, x);
}

void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(!ListEmpty(phead));
	LTNode* tail = phead->prev;
	tail->prev->next = phead;
	phead->prev = tail->prev;
	free(tail);
	//ListErase(phead->prev);
}
bool ListEmpty(LTNode* phead)
{
	assert(phead);
	return phead->next == phead;
}
void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(!ListEmpty(phead));
	LTNode* nexthead = phead->next;
	nexthead->next->prev = phead;
	phead->next = nexthead->next;
	free(nexthead);
	//ListErase(phead->next);
}
void ListFrontInsert(LTNode* pos, LTDataType x)
{
	LTNode* newnode = BuyListNode(x);
	LTNode* prev = pos->prev;
	newnode->next = pos;
	newnode->prev = prev;
	prev->next = newnode;
	pos->prev = newnode;
}
void ListBackInsert(LTNode* pos, LTDataType x)
{
	LTNode* newnode = BuyListNode(x);
	LTNode* next = pos->next;
	newnode->next = next;
	newnode->prev = pos;
	pos->next = newnode;
	next->prev = newnode;
}
void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* next = pos->next;
	prev->next = next;
	next->prev = prev;
	free(pos);

}
int ListSize(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	int size = 0;
	while (cur != phead)
	{
		++size;
		cur = cur->next;
	}
	return size;
}
void ListDestory(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		ListErase(cur);
		cur = next;
	}
	free(phead);
}
LTNode* ListFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	if (phead == NULL)
	{
		return NULL;
	}
	for (LTNode* cur = phead->next; cur != phead; cur = cur->next) {
		if (cur->data == x) {
			return cur;
		}
	}

	return NULL;
}
void ListModify(LTNode* phead, LTDataType x, LTDataType y)
{
	LTNode* ret = ListFind(phead, x);
	if (ret)
	{
		ret->data = y;
	}
}