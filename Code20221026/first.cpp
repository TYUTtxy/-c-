#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

#include<stdio.h>

void Func(int a = 0 ) {

	std::cout << a << std::endl;
}
namespace txy
{
	int rand = 10;
}
using namespace std;
int main()
{
	Func(1);
	Func();

	/*int i;
	double d;
	char c;
	std::cout << "hello world" << std::endl;
	cin >> i >> d >> c;
	cout << i << endl;
	cout << d << endl;
	cout << d << " " << c << endl;*/
	return 0;
}
//int main()
//{
//	std::cout << "hello world" << std::endl;
//}