#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Count(int arr[],int n, int N1)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (N1 > arr[i]) {
			count++;
		}
	}
	return count;
}
int main()
{
	int n;
	int N;
	scanf("%d %d", &n, &N);
	int arr[200];
	int count;
	while (scanf("%d", &count)!=EOF)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = count;
		}
	}
	int sumA = 0;
	for (int i = 0; i < N; i++)
	{
		sumA += Count(arr,n,i);
	}
	printf("%d", sumA);
	return 0;
}