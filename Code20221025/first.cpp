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
// C����û�취�������������������ͻ���⣬����C++�����namespace�����
int main()
{
	//printf("%d\n", rand);
	bit::func();
	printf("%d\n", bit::rand);
	struct bit::TreeNode node;
	printf("%d", bit::bit::a);
	return 0;
}
// �����󱨴�error C2365: ��rand��: �ض��壻��ǰ�Ķ����ǡ�������