#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//char* my_strcat(char arr1[], char arr2[])
//{
//	char* ret = arr1;
//	assert(arr1 && arr2);
//	while (*arr1)
//	{
//		*arr1++;
//	}
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " bit";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	char arr[20] = "bit";
//	strcat(arr, arr);
//	printf("%s", arr);
//	return 0;
//}
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{	
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int a = strcmp(arr1, arr2);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char arr[] = "26661756211@qq.com";
//	const char* sep = "@ .";
//	char* arr1 = strtok(arr, sep);
//	printf("%s", arr1);
//	arr1 = strtok(NULL, sep);
//	printf("%s", arr1);
//	return 0;
//}
#include<limits.h>
#include <malloc.h>
//int main()
//{/*
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));*/
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		printf("%S", strerror(errno));
//		return 0;
//	}
//	return 0;
//}
//int main()
//{
//	char ch = 'a';
//	putchar(toupper(ch));
//	return 0;
//}
#include<assert.h>
void* my_memcpy(void* dest, void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	while (count)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr[5] = { 0 };
	memcpy(arr, arr1, 20);

	return 0;
}