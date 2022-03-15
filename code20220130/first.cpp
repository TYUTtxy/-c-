#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		printf("%d\n", sum);
	}
	return 0;
}