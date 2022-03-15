#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}
//int main()
//{
//	int t, a, b;
//	scanf("%d", &t);
//	int count = 0;
//	int arr[100];
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		arr[count] = a + b;
//		count++;
//	}
//}#include <stdio.h>
//int main() 
//{
//	int t;
//	scanf("%d", &t);
//	int a;
//	int b;
//	while (t--)
//	{
//		scanf("%d %d", &a, &b);
//		printf("%d\n", a + b);
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	int b;
//	while(scanf("%d %d",&a,&b)!=EOF)
//	{
//		printf("%d", a + b);
//	}
//	return 0;
//}
//int add(int a,int b) {
//	return a + b;
//}
//int main() {
//	printf("%d", add(1, 2));
//}
int main()
{
	int num;
	while (scanf("%d", &num) != EOF)
	{
		int sum = 0;
		for (int i = 0; i <= num; i++)
		{
			sum += i;
		}
		printf("%d\n\n",sum);
		
	}
	return 0;
}