#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void swap(char* e1, char* e2)
//{
//	int tmp = *(int*)e1;
//	*(int*)e1 = *(int*)e2;
//	*(int*)e2 = tmp;
//}
//
//int  compare_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void bubble_qsort(void* base, int sz, int width, int (*compare)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - i; j++)
//		{
//			if (compare((char*)base + (width * j), (char*)base + width * (j + 1)) > 0)
//			{
//				swap((char*)base + (width * j), (char*)base + (width * (j + 1)));
//			}
//		}
//	}
//}
//
//void printarr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//
//void testint(int arr[], int sz, int width)
//{
//	bubble_qsort(arr, sz, width, compare_int);
//	printarr(arr, sz);
//}
//
//int main()
//{
//	int arr[] = { 20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int width = sizeof(arr[0]);
//	printarr(arr, sz);
//	testint(arr, sz, width);
//	return 0;
//}
#include<stdio.h>
#include <stdlib.h>

void printarr(int arr[],int sz)
{
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}
//int compair(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void TestInt() {
//	int arr[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printarr(arr,sz);
//	qsort(arr, sz, sizeof(arr[0]), compair);
//	printarr(arr, sz);
//
//}
struct Stu
{
	char name[20];
	int age;
	double score;
}Stu;
int compairStu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void testStu()
{
	struct Stu arr[3]= { {"ÌïĞùÓî",19,100},{"ÌïĞùÓîÒ»ºÅ",20,100},{"ÌïĞùÓî¶şºÅ",20,100} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), compairStu_by_age);
}
int main()
{
	//TestInt();
	testStu();
	return 0;
}
