#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	float a = 3 % 2;
//	printf("%f", a);
//	return 0;
//}
//int main()
//{
//	int a = -5;
//	int b = a << 1;
//	printf("%d\n", a);//aÊÇ-5
//	printf("%d\n", b);//bÊÇ-10
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	
//	return 0;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	int c = num1& num2;
//	printf("%d", c);
//	c = num1 | num2;
//	printf("%d", c);
//	c = num1^ num2;
//	printf("%d", c);
//	return 0;
//}
int main()
{
	int a = 3;
	int b = 4;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	return 0;
}