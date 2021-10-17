#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char x[10];
	int a;
	for (int A = 0; A < 10; A++) {
		x[A] = getchar();
		x[A] -= 50;
	}
	scanf("%d", &a);

	for (int A = 0; A < 10; A++) {
		//(超過 Z ,原本小於Z) - 26
		if ((x[A] + a) > 40 && x[A] < 41)x[A] -= 26;
		else if((x[A]+a)>72)x[A] -= 26;
		x[A] =x[A]+50+a;
		printf("%c", x[A]);
	}
	return 0;
}