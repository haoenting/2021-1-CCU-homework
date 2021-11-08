#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int x, y;
int run(int i) {
    if (i == 1)return x;
    else if (i == 2)return y;
    else if (i % 2 == 0)return 2 * run(i - 1); 
    else return run(i - 1) + run(i - 2);
}

int main() {
    int i,sum;
    scanf("%d%d%d", &x, &y, &i);
    sum = run(i);
    printf("%d", sum);
    system("pause");
    return 0;
}
