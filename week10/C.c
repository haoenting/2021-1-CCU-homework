#define _CRT_SECURE_NO_WARNINGS
#define SIZE  1000005
#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main() {
    int sum=0,num=0;
    char ary[SIZE];
    bool select = false;
    while (fgets(ary, SIZE, stdin) != NULL) {
        while (ary[num] != NULL) {
            if (isalpha(ary[num])) {
                if (select == false) {
                    select = true;
                    sum++;
                }
            }
            else select = false;
            num++;
        }
        num = 0;
    }
    printf("%d", sum);
    //system("pause");
    return 0;
}
/*
Never gonna give you up
Never gonna let you down
Never gonna run around and desert you
Never gonna make you cry
Never gonna say goodbye
Never gonna tell a lie and hurt you

Once upon a time, an enormous dragon appeared...!
It came with disaster, and left with the princess.

Uh,oh...
*/
