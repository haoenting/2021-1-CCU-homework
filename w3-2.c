#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	double x, y;
	int k;
	scanf("%lf%lf%d", &x, &y, &k);
	double Q = x + y;
	if (k == 0) {
		int q = Q * 10;
		if (q % 10 > 4)
			Q += 0.5;
		printf("%d", (int)Q);
	}
	else if (k == 1) {
		int q = Q * 100;
		if (q % 10 > 4)
			Q += 0.05;
		printf("%.1lf", Q);
	}
	else if (k == 2) {
		int q = Q * 1000;
		if (q % 10 > 4)
			Q += 0.005;
		printf("%.2lf", Q);
	}
	else if (k == 3) {
		int q = Q * 10000;
		if (q % 10 > 4)
			Q += 0.0005;
		printf("%.3lf", Q);
	}
	else if (k == 4) {
		int q = Q * 100000;
		if (q % 10 > 4)
			Q += 0.00005;
		printf("%.4lf", Q);
	}
	else {
		int q = Q * 1000000;
		if (q % 10 > 4)
			Q += 0.000005;
		printf("%.5lf", Q);
	}

	return 0;
}