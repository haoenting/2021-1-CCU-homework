#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char a[20], b[20];
	for (int A = 0; A <20; A++) {
		a[A] = getchar();
	}
	for (int B = 0; B <20; B++) {
		b[B] = getchar();
	}
	for (int C = 19; C >= 0; C--) {
		a[C] += b[C];
		if (a[C] > '10') {
			a[C]--;
			a[C - 1]++;
		}
		printf("%c", a[C]);
	}
	return 0;
}