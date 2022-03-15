#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print(int* arr, int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		printf("%d", arr[i]);
	}	
}
void init(int* arr, int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = 0;
	}
}
void resever(int* arr, int arrlength)
{
	for (int i = 0, j = arrlength; j > i; i++ ,j--)
	{
		int tmp = arr[i];
		arr[i] = arr[j - 1];
		arr[j - 1] = tmp;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int arrlength = sizeof(arr) / sizeof(arr[0]);
	print(arr, arrlength);
	printf("\n");
	resever(arr, arrlength);
	print(arr, arrlength);
	printf("\n");
	init(arr, arrlength);
	print(arr, arrlength);
	return 0;
}