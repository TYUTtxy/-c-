#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"SList.h"
#include<assert.h>

void menu()
{
	printf("*****************************************************************\n");
	printf("1��β��      2��ͷ��\n");
	printf("3��βɾ      4��ͷɾ\n");
	printf("5��ǰ���    6�������\n");
	printf("7������ɾ    8���޸�\n");
	printf("9����ӡ     -1���˳�\n");

	printf("*****************************************************************\n");

}

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
	SLTNode* a = SListFind(n1, 5);
	SListModify(n1, 1, 6);
	SListPrint(n1);
	SListFrontPush(&n1, 1, 2);

	SListPrint(n1);
	SListPrint(n1);

}


int main()
{
	SLTNode* n1 = NULL;
	int option;
	do {
		menu();
		if (scanf("%d", &option) == EOF)
		{
			printf("scanf�������\n");
			break;
		}

		int val, pos;
		switch (option)
		{
		case -1:
			printf("�˳�\n");
			exit(0);
			break;
		case 1:
			printf("������������Ҫβ������ݣ���0������\n");
			scanf("%d", &val);
			while (val != 0)
			{
				SListPushBack(&n1, val);
				scanf("%d", &val);
			}
			break;
		case 2: {
			printf("������������Ҫͷ������ݣ���0������\n");
			scanf("%d", &val);
			while (val != 0)
			{
				SListPushFront(&n1, val);
				scanf("%d", &val);
			}
			break;
		}
		case 3:
			SListPopBack(&n1);
			break;
		case 4:
			SListPopFront(&n1);
			break;
		case 5:
		{
			int y;
			int x;
			printf("��������Ҫ�ı������,�Ͳ����ֵ\n");
			scanf("%d%d", &x, &y);
			SListFrontPush(&n1, x, y);
			break;
		}
		case 6:
		{
			int y;
			int x;
			printf("��������Ҫ�ı������,�Ͳ����ֵ\n");
			scanf("%d%d", &x, &y);
			SListBackPush(&n1, x, y);
			break;
		}
		case 7:
		{
			int x;
			printf("��������Ҫɾ����ֵ\n");
			scanf("%d", &x);
			SListPop(&n1, x);
		}
		case 8:
		{
			int y;
			int x;
			printf("��������Ҫ�޸ĵ�λ��,���޸ĺ��ֵ\n");
			scanf("%d%d", &x, &y);
			SListModify(n1, x, y);
			break;
		}
		case 9:
			SListPrint(n1);
			break;
		default:
			exit(-1);
			break;
		}
	} while (option != -1);
	return 0;
}