#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
double distance(double x1, double y1, double x2, double y2) {
	double total, range, x = x1 - x2, y = y1 - y2;
	total = pow(x, 2) + pow(y, 2);
	//printf("%f\n%f", x, y);
	range = sqrt(total);
	return range;
}
int main() {
	double x1, y1, x2, y2, range;
	while (scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF) {
		range = distance(x1, y1, x2, y2);
		printf("%.8f\n", range);
	}
	
	//printf("%f\n%f\n%f\n%f\n", x1, y1, x2,y2);
	
	//system("pause");
	return 0;
}
