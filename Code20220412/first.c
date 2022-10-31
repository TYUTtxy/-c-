#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//extern int Add(int, int);
//extern int Sub(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	int d = Sub(a, b);
//	printf("%d %d", c, d);
//	return 0;
//}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("file:%s line:%d data:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__,i);
	}
	return 0;
}