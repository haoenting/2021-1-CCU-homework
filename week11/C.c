#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int num = 3;
    char k[1005], m[1005];
    unsigned long long int t;
    scanf("%s", k);
    while (scanf("%llu", &t) != EOF) {
        for (int a = 0 ; a < 4 ; a++, t /= 256, num--) {
            m[num] = t % 256 ;
        }
        num += 8;
    }
    num -= 4;
    for (int b = 0,c = num; c >= 0;b++,c--) {      
        if (k[b] == NULL)b = 0;
        m[c] ^= k[b];
    }
    for (int b = 0,c = 0; c <= num; b++,c++) {
       if (k[b] == NULL)b = 0;
       m[c]^=k[b];
       printf("%c", m[c]);
    }
    //system("pause");
    return 0;
}
//a b c d  e a b c kbar
//c b a e  d c b a  k
//7 6 5 4  3 2 1 0  num
/*
hate 1146714747 1749842552

ILoveYou
*/
