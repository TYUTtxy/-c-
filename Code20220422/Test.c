#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void TestSeqList1()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPushBack(&s1, 5);
	SLPushBack(&s1, 6);
	SLPrint(&s1);
}

void TestSeqList2()
{
	SL s1;
	SLInit(&s1);
	SLPushFront(&s1, 1);
	SLPushFront(&s1, 2);
	SLPushFront(&s1, 3);
	SLPushFront(&s1, 4);
	SLPushFront(&s1, 5);
	SLPrint(&s1);
}

void TestSeqList3()
{
	SL s1;
	SLInit(&s1);
	SLPushFront(&s1, 1);
	SLPushFront(&s1, 2);
	SLPushFront(&s1, 3);
	SLPushFront(&s1, 4);
	SLPushFront(&s1, 5);
	SLPrint(&s1);
	SLPopBack(&s1);
	SLPrint(&s1);
}

void TestSeqList4()
{
	SL s1;
	SLInit(&s1);
	SLPushFront(&s1, 1);
	SLPushFront(&s1, 2);
	SLPushFront(&s1, 3);
	SLPushFront(&s1, 4);
	SLPrint(&s1);
	SLPopFront(&s1);
	SLPrint(&s1);
	SLInsert(&s1, 1, 5);
}

void meau()
{
	printf("************************************************\n");
	printf("1��β�� 2��ͷ��\n");
	printf("5������ 6��ɾ��\n");
	printf("7���޸�  8����ӡ\n");
	printf("-1���˳�\n");
	printf("************************************************\n");

}

int main()
{
	SL s1;
	SLInit(&s1);
	int option = -1;
	do
	{
		meau();
		scanf("%d", &option);
		int val, pos;
		switch (option)
		{
		case 1:
			printf("������������Ҫβ������ݣ���0������>");
			scanf("%d", &val);
			while (val != 0)
			{
				SLPushBack(&s1, val);
				scanf("%d", &val);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			int y, z;
			printf("��������Ҫ�޸ĵ�ֵ���޸ĺ��ֵ:");
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
		case 8:
			SLPrint(&s1);
			break;
		default:
			break;
		}
	} while (option != -1);
	SLDestory(&s1);
	return 0;
}
