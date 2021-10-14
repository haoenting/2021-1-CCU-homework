#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double x, y;
	scanf("%lf%lf", &x, &y);
	int a = (x + y)*10;
	if (a % 10 > 4)a += 5;
	a /= 10;
	printf("%d", a);
	return 0;
}