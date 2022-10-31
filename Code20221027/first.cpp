#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
using namespace std;
int Add(int left, int right)
{
	cout << "int Add(int left, int right)" << endl;
	return left + right;
}
double Add(double left, double right)
{
	cout << "double Add(double left, double right)" << endl;
	return left + right;
}
void f()
{
	cout << "f()" << endl;
}
void f(int a)
{
	cout << "f(int a)" << endl;
}
//int main() {
//	f();
//	f(1);
//	return 0;
//}
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(1.0, 2.2) << endl;
//
//	return 0;
//}
void func(int a, char b)
{
	cout << "void func(int a, char b)" << endl;
}
void func(char b, int a)
{
	cout << "void func(char b, int a)" << endl;
}
//int main()
//{
//	func('a', 2);
//	func(2, 'n');
//	return 0;
//}
//void Swap(double* p1, double* p2)
//{
//	double tmp
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	double c = 11.1, d = 2, 2;
//	Swap(&a, &b);
//	swap(&c, &d);
//	return 0; 
//}
//int main()
//{
//	int a = 0;
//	int& b = a;
//	a = 3;
//	b = 5;
//	cout << &b << endl;
//	cout << &a << endl;
//	cout << b << endl;
//	cout << a << endl;
//
//
//
//
//	return 0;
//}
