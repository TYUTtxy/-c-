#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
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
//int main()
//{
	/*int arr[] = { 20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print_arr(arr,sz);
	return 0;*/
//}
int cmp_int1(const void* e1, const void* e2)
{
	if (*(int*)e1 > *(int*)e2)
	{
		return 1;
	}
	else if (*(int*)e1 == *(int*)e2)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void test1()
{
	int arr[] = { 20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print_arr(arr, sz);
}
void test2()
{
	int arr[] = { 20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
struct Stu {
	char name[20];
	int age;
	double score;
};
int com_stu_by_age(const void* e1,const void* e2) {
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test3()
{
	struct Stu arr[3] = { {"张三",20,55},{"李华",30,88.0},{"王五",22,90.0} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), com_stu_by_age);
}
int com_stu_by_name(const void* e1, const void* e2) {
	strcmp(((struct Stu*)e1)->name, ((struct Stu*)e1)->name);
}
void test3()
{
	struct Stu arr[3] = { {"张三",20,55},{"李华",30,88.0},{"王五",22,90.0} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), com_stu_by_name);
}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}
