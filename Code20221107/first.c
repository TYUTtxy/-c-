#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void meau()
{
	printf("*****************************************\n");
	printf("1��������ջ                   2�����ݳ�ջ\n");
	printf("3���鿴ջ������	              4��ջ�ĳ���\n");
	printf("5��ȫ����ջ\n");
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
			printf("scanf�������\n");
			exit(0);
			break;
		}
		switch (option)
		{
		case 1:
		{
			printf("��������Ҫ��ջ������\n");
			scanf("%d", &num);
			StackPush(&st, num);
			break;
		}
		case 2:
		{
			printf("Ԫ��%d��ɳ�ջ\n", StackTop(&st));
			StackPop(&st);
			break;
		}
		case 3:
		{
			printf("Ԫ��%d��ջ��\n", StackTop(&st));
			break;
		}
		case 4:
		{
			printf("ջ�ĳ���Ϊ%d\n", StackSize(&st));
			break;
		}
		case 5:
		{
			printf("ȫ����ջ\n");
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