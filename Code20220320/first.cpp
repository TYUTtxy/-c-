#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//s/*ize_t mt_strlen(const char arr[])
//{
//	int count = 0;
//	assert(arr != NULL);
//	while(*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()*/
//{
	/*char arr[] = "abcdef";
	int len = strlen(arr);
	printf("%d", len);*/
	
	/*char arr[10] = { 'a','b','c','d','e','f'};
	int len = strlen(arr);
	printf("%d", len);
	/*return 0;*/
	/*if ((strlen("abc") - strlen("qwerty")) > 0)
	{
		printf(">");
	}
	else
	{
		printf("<=");
	}*/
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char arr2[] = "abcdef";
//	//strcpy(arr, arr2);
//	printf("%s", arr);
//}
//int main()
//{
//	char arr[] = "xxx";
//	printf("%s", arr);
//	return 0;
//}
//m/*y_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	*dest = *src;
//	while (*src!='/0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char* arr2 = "hello,bit";
//	my_strcpy(arr1, arr2);
//	return 0;
//}*/
//int main()
//{
//	char arr[] = "abcdef";
//	char arr2[] = "abq";
//	strcmp(arr, arr2);
//	return 0;
//}
//int main()
//{
//	//char ch = 'a';
//	//char arr[] = "abcdef";
//	char arr[10] = { 'a','b','c'};
//	int a = strlen(arr);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	if ((int)strlen("abc") - (int)strlen("qwerty")>0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//}
//#include<assert.h>
//
//#include<stdio.h>
//
//#include<string.h>
//
//size_t my_strlen(const char* str)
//
//{
//
//	int count = 0;
//
//	assert(str != NULL);
//
//	while (*str != '\0')
//
//	{
//
//		count++;
//
//		str++;
//
//	}
//
//	return count;
//
//}
//
//int main()
//
//{
//
//	char arr[] = "abcdfef";
//
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//
//}
//

int main()
{
	char arr1[20] = { 0 };
	//char arr2[] = "abcdefg";
	//char arr2[] = { 'a','b','c' };
	
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}