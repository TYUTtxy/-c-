#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void meau()
{
	printf("*****************************************\n");
	printf("1、数据入栈                   2、数据出栈\n");
	printf("3、查看栈顶数据	              4、栈的长度\n");
	printf("5、全部出栈\n");
	printf("*****************************************\n");
}
int main()
{
	ST st;
	StackInit(&st);
	int option;
	int num;
	do {
		meau();
		if (scanf("%d", &option) == EOF)
		{
			printf("scanf输入错误\n");
			exit(0);
			break;
		}
		switch (option)
		{
		case 1:
		{
			printf("请输入你要入栈的数据\n");
			scanf("%d", &num);
			StackPush(&st, num);
			break;
		}
		case 2:
		{
			printf("元素%d完成出栈\n", StackTop(&st));
			StackPop(&st);
			break;
		}
		case 3:
		{
			printf("元素%d在栈顶\n", StackTop(&st));
			break;
		}
		case 4:
		{
			printf("栈的长度为%d\n", StackSize(&st));
			break;
		}
		case 5:
		{
			printf("全部出栈\n");
			while (!StackEmpty(&st))
			{
				printf("%d\n", StackTop(&st));
				StackPop(&st);
			}
			break;
		}
		default:
			exit(-1);
			break;
		}

	} while (option != -1);
	StackDestroy(&st);
	return 0;
}