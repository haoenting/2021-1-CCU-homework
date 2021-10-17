#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y,sum=0;
	scanf("%d%d", &x, &y);
	for (int a = 0; a < 5; a++) {
		if (x % 2 == y % 2 && x % 2 == 1)
			sum++;
		x /= 2;
		y /= 2;
	}
	printf("%d", sum);
	return 0;

}