#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int pri[1000000000];
void isPrime(int num) {
	if (pri[num] == 0)printf("False\n");
	else printf("True\n");
}
int main() {
	int n, num;
	pri[1] = 0;
	for (int x = 4; x <= 1000000000; x++) {
		for (int y = 2; y < x / 2; y++) {
			if (x % y == 0) {
				pri[x] = 0;
				break;
			}
		}
	}
	scanf("%d", &n);
	for (int x = 0; x < n; x++) {
		scanf("%d", &num);
		isPrime(num);
	}
	system("pause");
	return 0;
}
