#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char string[81];
	int i, num = 0, word = 0;
	char c;
	gets_s(string,81);
	for (i = 0;((c = string[i]) != '\0'); i++)
	{
		if (c == ' ')
		{
			word = 0;
		}
		else
		{
			if (word == 0)
			{
				word = 1;
				num++;
			}
		}
	}
	printf("There are %d words in this line.\n", num);
	return 0;
}
//int main()
//{
//
//	return 0;
//
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}