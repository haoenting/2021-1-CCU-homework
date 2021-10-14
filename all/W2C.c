#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char x[10];
	int a;
	for (int A = 0;A<10; A++) {
		x[A] = getchar();
	}
	scanf("%d", &a);

	for (int A = 0; A < 10; A++) {
		x[A] += a;
		if (x[A] > 'Z')x[A] -= 26;
		printf("%c", x[A]);
	}
	return 0;
}