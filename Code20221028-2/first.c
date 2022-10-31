#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("*****************************************************************\n");
	printf("1、查找      2、修改\n");
	printf("3、尾插      4、头插\n");
	printf("5、任意删    6、任意插\n");
	printf("7、尾删      8、头删\n");
	printf("9、打印     -1、退出\n");

	printf("*****************************************************************\n");

}


int main()
{
	SL s1;
	SLInit(&s1);
	int option ;
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
			printf("请输入你要查找的值\n");
			int x;
			scanf("%d", &x);
			int pos = SLFind(&s1, x);
			printf("在%d位置处\n",pos);
			break;
		case 2: {
			int y;
			int z;
			printf("请输入你要修改的值和修改后的值\n");
			scanf("%d%d", &y, &z);
			pos = SLFind(&s1, y);
			if (pos != -1)
			{
				SLModify(&s1, pos, z);
			}
			else
			{
				printf("没找到：%d\n", y);
			}
			break;
		}
		case 3:
			printf("请连续输入你要尾插的数据，以0结束：\n");
			scanf("%d", &val);
			while (val!=0)
			{
				SLPushBack(&s1, val);
				scanf("%d", &val);
			}
			break;
		case 4:
			printf("请连续输入你要头插的数据，以0结束：\n");
			scanf("%d", &val);
			while (val != 0)
			{
				
				SLPushFront(&s1, val);
				scanf("%d", &val);
			}
			break;
		case 5:
		{
			int y;
			printf("请输入你要删除的位置\n");
			scanf("%d", &y);
			SLErase(&s1, y);
			break;
		}
		case 6:
		{
			int y;
			int x;
			printf("请输入你要插入的位置,和插入的值\n");
			scanf("%d%d", &y, &x);
			SLInsert(&s1, y, x);
			break;
		}
		case 7:
			SLpopBack(&s1);
			break;
		case 8:
			SLpopFront(&s1);
			break;

		case 9:
			SLPrint(&s1);
			break;
		default:
			exit(-1);
			break;
		}
	} while (option != -1);
	SLDestory(&s1);
		return 0;
}























































