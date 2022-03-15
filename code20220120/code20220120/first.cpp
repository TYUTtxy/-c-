#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
//int sushu(int num) 
//{
//	for (int j = 2; j <= sqrt(num); j++)
//	{
//		if (num % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (sushu(i)) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int runnian(int year)
//{
//	if (year % 100 != 0 && year % 4 == 0)
//	{
//		return 1;
//	}
//	if (year % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (runnian(year) == 1)
//	{
//		printf("%d年是闰年", year);
//	}
//	else
//	{
//		printf("%d年不是闰年", year);
//	}
//	return 0;
//}
void exchange(int* a, int* b)
{
	int tem = *a;
	*a = *b;
	*b = tem;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	exchange(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
//void chenfa(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j <= n; j++)
//		{
//			int k = i * j;
//			printf("%d*%d=%d ", i, j, k);
//			
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	chenfa(n);
//	return 0;
//}