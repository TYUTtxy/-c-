#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//void bubbles_swap(char* e1, char* e2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char* tmp = e1;
//		e1 = e2;
//		e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//
//void bubbles_qsort(void* base, int sz, int width, int (*cmp)(const void* e1,const void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char*)base + (width * j), (char*)base + (width * (j + 1))) > 0)
//			{
//				bubbles_swap((char*)base + (width * j), (char*)base + (width * (j + 1)), width);
//			}
//		}
//	}
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1_int(int arr[],int sz)
//{
//	
//	bubbles_qsort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//void printarr(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 11,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubbles_qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	printarr(arr, sz);
//	return 0;
//}
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}