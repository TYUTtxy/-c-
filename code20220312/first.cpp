#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*nt main()
{

	return 0;
}
char* arr[5];*/
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	return 0;
//}
//int main()
//{
//	return 0;
//}
//int* parr1[10];
//int(*parr2)[10];
//void test2(int** p);
//void test2(int* arr[])
//int main()
//{
//	int arr[3][5] = { 0 };
//	return 0;
//}
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test()
//void test(int* p, int sz)
//{
//	/*int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d\n", *p);
//		p++;
//	}*/
//
//}
//int main()
//{
//	int arr[10] = {
//		1,2,3,4,5,6,7,8,9,10
//	};
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(p,sz);
//	return 0;
//}
//void test(char** ppc) {
//
//}
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	char** ppc = &pc;
//	test(&pc);
//	test(ppc);
//}
//int main()
//{
//	char a = 'w';
//	char* pa = &a;
//	char** ppa = &pa;
//	return 0;
//}
//void test1(int (*p)[5])
//	{
//
//	}
//void test2(int(*p)[3][5])
//{
//
//}
//int main()
//{
//	int arr[3][5];
//	test1(arr);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int test(char* str)
//{
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	int (*p)[10] = &arr;
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	int (*pf)(int, int) = Add;
//	int (*pt)(char*)=test;
//	int ret = (*pf)(2, 3);
//	printf("%d", ret);
//	return 0;
//}
int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x + y;
}
int Mul(int x, int y) {
	return x * y;
}
int Div(int x, int y) {
	return x + y;
}
int main()
{
	char* arr[5];
	int* arr[4];
	int (*pf1)(int, int) = Add;
	int (*pf2)(int, int) = Sub;
	int (*pf2)(int, int) = Mul;
	int (*pf2)(int, int) = Div;
	int (*pf[4])(int, int) = { Add,Sub,Div,Mul };
	return 0;
}