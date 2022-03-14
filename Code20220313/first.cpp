#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int (*pfarr[4])(int, int);
//	int (*(*p3)[4])(int, int) = &pfarr;
//	return 0;
//}
//void test()
//{
//	printf("¹þ¹þ¹þ");
//}
//void printhehe(void (*p)())
//{
//	if (1)
//		p();
//}
//int main()
//{
//	printhehe(test);
//	return 0;
//}
//void bubble_sort(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < ; j ++ ) {
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
////	}
//
//void print_arr(int arr[], int sz)
//{
//int main()
//{
//	int arr[] = { 9,8,7,6,5,43,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr);
//	return 0;
//}
//int judgmentlr(char arr[], char arr2[]) {
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1; i <= sz; i++)
//	{
//		for (int j = i; j <= sz - 1; j++)
//		{
//			char* lr = &arr[j];
//			lr++;
//			for(int k=0;k<i;k++){
//				char* lr = &arr[k];
//				lr++;
//			}
//			if (strcmp(lr, arr2) == 0)
//			{
//				return 1;
//			}
//		}
//		for (int j = sz-1; j >= sz - i ; j--)
//		{
//			char* lr = &arr[j];
//			lr++;
//			for (int k = 0; k < sz - i; k++) {
//				char* lr = &arr[k];
//				lr++;
//			}
//			if (strcmp(lr, arr2) == 0)
//			{
//				return 1;
//			}
//		}
//		
//	}
//	return 0;
//}
//int main()
//{
//	char a1[] = "ABCD";
//	char a2[] = "DABC";
//	int a = judgmentlr(a1, a2);
//	printf("%d",a);
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			int tem = arr[];
//			arr[j]
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr);
//	return 0;
//}
void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}
void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = {
		21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 
	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print_arr(arr, sz);
	return 0;
}