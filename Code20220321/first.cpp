#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{

	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	const char* arr2 = "hello txy";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}