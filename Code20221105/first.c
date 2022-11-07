#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"
int main()
{
	LTNode* plist = ListInit();
	
	
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
				ListPushBack(plist, val);
				scanf("%d", &val);
			}
			break;
		case 2: {
			printf("������������Ҫͷ������ݣ���0������\n");
			scanf("%d", &val);
			while (val != 0)
			{
				ListPushFront(plist, val);
				scanf("%d", &val);
			}
			break;
		}
		case 3:
			ListPopBack(plist);
			break;
		case 4:
			ListPopFront(plist);
			break;
		case 5:
		{
			int y;
			int x;
			printf("��������Ҫ�ı������,�Ͳ����ֵ\n");
			scanf("%d%d", &x, &y);
			LTNode* pos = ListFind(plist, x);
			ListFrontInsert(pos, y);
			break;
		}
		case 6:
		{
			int y;
			int x;
			printf("��������Ҫ�ı������,�Ͳ����ֵ\n");
			scanf("%d%d", &x, &y);
			LTNode* pos = ListFind(plist, x);
			ListBackInsert(pos, y);
			break;
		}
		case 7:
		{
			int x;
			printf("��������Ҫɾ����ֵ\n");
			scanf("%d", &x);
			LTNode* pos = ListFind(plist, x);
			ListErase(pos);
			break;
		}
		case 8:
		{
			int x;
			printf("��������Ҫɾ����ֵ\n");
			scanf("%d", &x);
			LTNode* pos = ListFind(plist, x);
			ListPopFront(pos);
			break;
		}
		case 9:
		{
			int x;
			printf("��������Ҫɾ����ֵ\n");
			scanf("%d", &x);
			LTNode* pos = ListFind(plist, x);
			ListPopBack(pos);
			break;
		}
		case 10:
		{
			int y;
			int x;
			printf("��������Ҫ�޸ĵ�λ��,���޸ĺ��ֵ\n");
			scanf("%d%d", &x, &y);
			ListModify(plist, x, y);
			break;
		}
		case 11:
			ListPrint(plist);
			break;
		default:
			exit(-1);
			break;
		}
	} while (option != -1);
	ListDestory(plist);
	return 0;
}