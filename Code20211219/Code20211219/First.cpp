#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//extern int a;
//int main(){
//	printf("%d", a);
//	return 0;
//}
//extern int add(int x, int y);
//int main() {
//	int a = 10;
//	int b = 20;
//	int ret = add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//#define MAX 1000;
//#define STRa  R"(hello)";
//int main() {
//	int m = MAX;
//	printf("%s", STRa);
//	printf("%d", m);
//	return 0;
//}
//int main() {
//	int a = 10;
//	int* pa = &a;
//	printf("%d", *pa);
//	//printf("%p\n", pa);
//	/*printf("%d", pa);*/
//	//printf("%p\n", &a);
//	return 0;
//}
//int main() {
//	int a = 10;
//	char ch = 'w';
//	int* pa = &a;
//	char* pb = &ch;
//	printf("%d", sizeof(pa));
//	printf("%d", sizeof(pb));
//	return 0;
//}
typedef struct Stu
{
	char  name[20];
	int age;
	char sex[5];
	char id[20];
}a;
int main() {
	struct Stu s1 = { "ÌïĞùÓî",18,"ÄĞ",2020007217 };
	printf("%d", s1.age);
	Stu* p = &s1;
	a* p1 = &s1;
	printf("%s", p1->name);
	printf("%s", p->name);
	printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.id);
	printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.id);
	return 0;
}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}
//int main() {
//	return 0;
//}