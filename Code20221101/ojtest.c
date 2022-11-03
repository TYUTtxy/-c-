#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;
typedef struct ListNode
{
	SLTDataType data;
	struct SListNode* next;
};
int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode);
	assert(n1);
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode);
	assert(n2);

	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode);
	assert(n3);

	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode);
	assert(n4);

	n1->data = ;
	n2->data = ;
	n3->data = ;
	n4->data = ;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	struct ListNode* head = removeElements(n1, 7);


	return 0;
}