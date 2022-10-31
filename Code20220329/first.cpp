#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
//int main()
//{
//	int arr[10];
//	char arr2[40];
//	int* ptr = (int*)malloc(40);
//	int* p = ptr;
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}
int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		perror("calloc:");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", *(p + i));
	}
	return 0;
}