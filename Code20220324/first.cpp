#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S1
{
	char c1;
	int i;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int i;
};
int main()
{
	struct S1 s;
	struct S2 s1;
	printf("%d", sizeof(s));
	printf("%d", sizeof(s1));
	return 0;
}