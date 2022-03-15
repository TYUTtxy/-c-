#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int sum = 1;
//	for (i = 1; i <= 10; i++)
//	{	
//		ret = i * ret;
//		sum += ret;
//	}
//	printf("结果%d", sum);
//	return 0;
//}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 2;
	int left = 0;
	int right = sz - 1;
	int mid = (left + right)/2;
	while (left<=right) {
		int mid = left + (right - left) / 2;
		if (arr[mid]<k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了\n");
	}
	
	return 0;
}
//int main()
//{
//	return 0;
//}
//int main()
//{
//	return 0;
//}
//int main()
//{
//	return 0
//}
//int main()
//{
//	return 0;
//}
//int main()
//{
//	return 0;
//}
//int main()
//{
//	return 0;
//}
//int main()
//{
//	return 0;
//}
//int main()
//{
//	return 0;
//}
//int main()
//{
//	return 0;
//}
//int main()
//{
//	return 0;
//}
//int main()
//{
//	return 0;
//}
//int main()
//{
//	return 0;
//}
