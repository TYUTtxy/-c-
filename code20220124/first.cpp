#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//ʵ����һ�������������ڴ��еĶ�������1�ĸ���
{	
	int num;
	scanf("%d", &num);
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((num >> i) & 1)) {
			count++;
		}

	}
	//00000 00000 00000 00000 00000 00001 01
	printf("%d", count);
	return 0;
}