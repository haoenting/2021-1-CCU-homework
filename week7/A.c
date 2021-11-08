#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
    float a, b, c, d;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    //printf("%f\n%f\n%f\n%f\n", a, b, c, d);
    int sum = (a + b + c) * 1000000,D = d * 1000000;
    printf("%d\n%d", sum, D);
    if (sum < D)printf("Less than");
    else if (sum > D)printf("Greater than");
    else  printf("Equal to");
    system("pause");
    return 0;
}
