#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void lest_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	lest_move(arr, k);
//	printf("%s", arr);
//	return 0;
//}
//void left_move(char arr[], int k)
//{
//	for (int j = 0; j < k; j++)
//	{
//		char tmp = arr[0];
//		int len = strlen(arr);
//		for (int i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s", arr);
//	return 0;
//}
#include<stdio.h>
//void find_k(int arr[3][3], int k, int r, int c)
//{
//	int x = 0;
//	int y = c - 1;
//	int flag = 0;
//	while (x < r && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("找到了，下标是：%d %d \n", x, y);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("找不到");
//	}
//}
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int k = 7;
//	find_k(arr, k, 3, 3);
//	return 0;
//}
#include<stdio.h>
void print_air(int k)
{
	k = 2 * k - 4;

	for (int i = 0; i < k; i++)
	{
		printf(" ");
	}
}
void print_point(int k)
{
	for (int i = 0; i < k; i++)
	{
		printf("* ");
	}
}
void print_Triangle(int k)
{
	if (k == 3)
	{
		for (int i = 0; i < 3; i++)
		{
			print_point(i+1);
			printf("\n");
		}
	}
	else
	{
		for (int i = 0; i < 2; i++)
		{
			print_point(i + 1);
			printf("\n");
		}
		for (int i = 2; i < k - 1; i++)
		{
			print_point(1);
			print_air(i + 1);
			print_point(1);
			printf("\n");
		}
		print_point(k);
	}
}
int main()
{
	int k = 0;
	while (scanf("%d", &k) != EOF)
	{
		print_Triangle(k);
	}
	return 0;
}