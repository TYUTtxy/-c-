#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//实现求一个整数储存在内存中的二进制中1的个数
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