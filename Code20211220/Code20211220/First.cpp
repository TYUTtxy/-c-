#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void fen()
//{
//	static int count = 1;
//	static float a[30] = { 0 };
//	if (count <= 30) {
//		scanf("%f %f %f %f %f", &a[count], &a[count + 1], &a[count + 2], &a[count + 3], &a[count + 4]);
//		a[count + 5] = a[count] + a[count + 1] + a[count + 2] + a[count + 3] + a[count + 4];
//		count += 6;
//	}
//	else
//	{
//		for (int i = 1; i <= 30; i += 5) {
//			printf("%.1f %.1f %.1f %.1f %.1f\n", a[i], a[i + 1], a[i + 2], a[i + 3], a[i + 4], a[i + 5]);
//		}
//	}
//}
//int main()
//{
//	for (int i = 0; i < 6; i++) {
//		fen();
//	}
//}
//#include<stdio.h>
//
//float max3(float a, float b, float c) {
//
//	if (a > b && a > c) {
//
//		return a;
//
//	}
//
//	else if (b > a && b > c) {
//
//		return b;
//
//	}
//
//	else {
//
//		return c;
//
//	}
//
//}
//
//int main() {
//
//	float a, b, c;
//
//	scanf("%f %f %f", &a, &b, &c);
//
//	double m = max3((a + b), b, c) / (max3(a, (b + c), c) + max3(a, b, (b + c)));
//
//	printf("%f", m);
//
//	return 0;
//
//}
//#include<stdio.h>
//int main() {
//	float a, b, c, d, e, ave;
//	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
//	ave = (a + b + c + d + e) / 5;
//	printf("%.2f", ave);
//	}
#include<stdio.h>
int main() {
	int a;

	while (scanf("%d", &a) != EOF) {
		for (int i = 0; i < a; i++) {
			printf("*");
		}
		printf("\n");
	}
}