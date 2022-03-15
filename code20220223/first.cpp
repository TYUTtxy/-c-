#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("hello,bit\n");
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//int main()
//{
//	int prince;
//	prince = 55;
//	printf("%d", prince);
//	float weight = 23.33f;
//	printf("%f", weight);
//	return 0;
//}
//
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	scanf_s("%d", &num1);
	int sum = num1 + num2;
	printf("%d", sum);
	return 0;

}