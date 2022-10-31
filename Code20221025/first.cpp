#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "hello world";
//}

#include <stdlib.h>
namespace bit
{
	void func()
	{
		printf("func()\n");
	}


	int rand = 0;
	struct TreeNode
	{
		int val;

	};
	namespace bit {
		int a = 100;
	}
}
namespace bit {

}
// C语言没办法解决类似这样的命名冲突问题，所以C++提出了namespace来解决
int main()
{
	//printf("%d\n", rand);
	bit::func();
	printf("%d\n", bit::rand);
	struct bit::TreeNode node;
	printf("%d", bit::bit::a);
	return 0;
}
// 编译后后报错：error C2365: “rand”: 重定义；以前的定义是“函数”