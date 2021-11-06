#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void isPrime(int num) {
    int TF = 1;
    if (num == 2)TF = 1;
    else if (num % 2 == 0 || num == 1)TF = 0;
    else {
        for (int x = 3; x <= sqrt(num); x += 2) {
            if (num % x == 0) {
                TF = 0;
                break;
            }
        } 
    }
    if (TF == 1)printf("True\n");
    else printf("False\n");
}
int main() {
    int count;
    long long int num;
    scanf("%d", &count);
    for (int x = 0; x < count; x++) {
        scanf("%ld", &num);
        printf("%d\n", num);
        isPrime(num);
    }
    system("pause");
    return 0;
}
