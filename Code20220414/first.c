#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define NUM 100;
//int main()
//{
//	int num = NUM;
//	printf("%d", num);
//	return 0;
//}
//#define MAX(x,y) x>y?x:y;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = MAX(a, b);
//	printf("%d", c);
//	return 0;
//}
#define SQUARE(x) x*x
int main()
{
	int a = 9;
	int r = SQUARE(a + 1);
	printf("%d\n", r);
}