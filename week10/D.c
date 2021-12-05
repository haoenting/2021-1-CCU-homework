#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char str[1000][100], tmp[100];
int main() {
    int x=0,num=0;
    int sum=1;
    while (scanf("%s",str[num]) != EOF) { 
        while (str[num][x] != NULL) {
            str[num][x] = tolower(str[num][x]);
            x++;
        }
        x = 0;
        num++;       
    }
    for (int a = 0; a < num; a++) {
        for (int b = 0; b < num - a; b++) {
            if (strcmp(str[b], str[b + 1]) > 0) {
                strcpy(tmp, str[b]);
                strcpy(str[b], str[b + 1]);
                strcpy(str[b + 1], tmp);
            }
        }
    }
    for (int c = 1; c <= num; c++) {
        if (strcmp(str[c], str[c+1]) == 0) {
            sum++;
        }
        else {
            printf("%s %d\n", str[c], sum );
            sum = 1;
        }
    }
    //system("pause");
    return 0;
}
/*
Never gonna give you up Never gonna let you down Never gonna run around and desert YOU

and 1
around 1
desert 1
down 1
give 1
gonna 3
let 1
never 3
run 1
up 1
you 3
*/
