#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    long long int x, y;
    long long int X[35], Y[35];
    int sum1=0, sum2=0, sum3=0;
    scanf("%lld %lld", &x, &y);
    if (x < y) {
        long long int z = y;
        y = x;
        x = z;
    }
    for (int a=0;x!=0; a++,x/=2,y/=2) {
        X[a] = x % 2;
        Y[a] = y % 2;
       // printf("%lld %lld\n", x%2, y%2);
        if (X[a] != Y[a]) {
            sum3++;
            if (X[a] == 1|| Y[a]==1) 
                sum2++;
        }
        else if (X[a] == 1 && Y[a] == 1) {
            sum1++;
            sum2++;
        }
    }
    printf("%d %d %d", sum1, sum2, sum3);
    //system("pause");
    return 0;
}
