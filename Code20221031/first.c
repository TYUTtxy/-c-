#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"SList.h"I
#include<assert.h>

void TestSList1()
{
	SLTNode* n1 = NULL;
	/*SLTNode* n1 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n1);*/
	//SLTNode* n2 = (SLTNode*)malloc(sizeof(SLTNode));
	//assert(n2);
	//SLTNode* n3 = (SLTNode*)malloc(sizeof(SLTNode));
	//assert(n3);
	//SLTNode* n4 = (SLTNode*)malloc(sizeof(SLTNode));
	//assert(n4);
	//n1->data = 1;
	//n2->data = 2;
	//n3->data = 3;
	//n4->data = 4;
	//n1->next = n2;
	//n2->next = n3;
	//n3->next = n4;
	//n4->next = NULL;
	SListPushFront(&n1, 1);

	SListPushBack(&n1, 5);

	SListPushBack(&n1, 2);
	SListPushFront(&n1, 1);

	SListPrint(n1);
	SListPopFront(&n1);
	SListPopFront(&n1);
	SListPopFront(&n1);
	SListPopFront(&n1);
	SListPrint(n1);

}


int main()
{
	TestSList1();
	return 0;
}