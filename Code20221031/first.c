#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"SList.h"
#include<assert.h>

void menu()
{
	printf("*****************************************************************\n");
	printf("1、尾插      2、头插\n");
	printf("3、尾删      4、头删\n");
	printf("5、前面插    6、后面插\n");
	printf("7、任意删    8、修改\n");
	printf("9、打印     -1、退出\n");

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
			printf("scanf输入错误\n");
			break;
		}

		int val, pos;
		switch (option)
		{
		case -1:
			printf("退出\n");
			exit(0);
			break;
		case 1:
			printf("请连续输入你要尾插的数据，以0结束：\n");
			scanf("%d", &val);
			while (val != 0)
			{
				SListPushBack(&n1, val);
				scanf("%d", &val);
			}
			break;
		case 2: {
			printf("请连续输入你要头插的数据，以0结束：\n");
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
			printf("请输入你要的被插入的,和插入的值\n");
			scanf("%d%d", &x, &y);
			SListFrontPush(&n1, x, y);
			break;
		}
		case 6:
		{
			int y;
			int x;
			printf("请输入你要的被插入的,和插入的值\n");
			scanf("%d%d", &x, &y);
			SListBackPush(&n1, x, y);
			break;
		}
		case 7:
		{
			int x;
			printf("请输入你要删除的值\n");
			scanf("%d", &x);
			SListPop(&n1, x);
		}
		case 8:
		{
			int y;
			int x;
			printf("请输入你要修改的位置,和修改后的值\n");
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