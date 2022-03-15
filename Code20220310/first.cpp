

#include <stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);
	return 0;
}
//int mian()
//{
//	int a = 10;
//	int* p = &a;
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//
//
//	return 0;
//}