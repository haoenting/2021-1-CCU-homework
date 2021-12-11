#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char k[1005];
    long long int t;
    scanf("%s", k);
    while (scanf("%lld", &t) != EOF){
        char m[1005];
        int num[20],a=0,b=0; 
        while (t != 0) {
           num[a] = t % 256 ;
           m[a] = k[b] ^ num[a];
           t /= 256;
           a++;
           b++;
           if (k[b] == NULL)b = 0;
        }
        a--;
        b = 0;
        while (a >= 0) {
           m[a] ^= k[b];
            printf("%c",m[a]);
            b++;
            a--;
            if (k[b] == NULL)b = 0;
        }
    }
    // a b c d e f a b kbar
    // b a f e d c b a k
    // 7 6 5 4 3 2 1 0 num
    //system("pause");
    return 0;
}
/*
hate 1146714747 1749842552 147 152

ILoveYou
*/
