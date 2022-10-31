#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("*****************************************************************\n");
	printf("1������      2���޸�\n");
	printf("3��β��      4��ͷ��\n");
	printf("5������ɾ    6�������\n");
	printf("7��βɾ      8��ͷɾ\n");
	printf("9����ӡ     -1���˳�\n");

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
			printf("��������Ҫ���ҵ�ֵ\n");
			int x;
			scanf("%d", &x);
			int pos = SLFind(&s1, x);
			printf("��%dλ�ô�\n",pos);
			break;
		case 2: {
			int y;
			int z;
			printf("��������Ҫ�޸ĵ�ֵ���޸ĺ��ֵ\n");
			scanf("%d%d", &y, &z);
			pos = SLFind(&s1, y);
			if (pos != -1)
			{
				SLModify(&s1, pos, z);
			}
			else
			{
				printf("û�ҵ���%d\n", y);
			}
			break;
		}
		case 3:
			printf("������������Ҫβ������ݣ���0������\n");
			scanf("%d", &val);
			while (val!=0)
			{
				SLPushBack(&s1, val);
				scanf("%d", &val);
			}
			break;
		case 4:
			printf("������������Ҫͷ������ݣ���0������\n");
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
			printf("��������Ҫɾ����λ��\n");
			scanf("%d", &y);
			SLErase(&s1, y);
			break;
		}
		case 6:
		{
			int y;
			int x;
			printf("��������Ҫ�����λ��,�Ͳ����ֵ\n");
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























































