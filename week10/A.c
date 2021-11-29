#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
char str[100000], key[100000];

int main(){
    int x = 0;
    str[0] = '0';
    while (str[x]!=' ') {
        x++;
        str[x] = getchar();     
    }
    int y = 0;
    key[y] = 0;
    while (key[y] != '\n') {
        y++;
        key[y] = getchar();
    }
    for (int a = 1; a < y;a++) {
        if (key[a] >= 'a')key[a] -= 97;
        else key[a] -= 65; 
    }
    for (int a = 1,b=1; a < x; a++,b++) {
        if (str[a] < 91) {
            str[a] += key[b];
            if (str[a] > 'Z')
                str[a] -= 26;
        }
        else {
            str[a] -= 26;
            str[a] += key[b];
            if (str[a] < 'a')
                str[a] += 26;
        }
        if (b == y - 1)b = 0;
        printf("%c", str[a]);
    }
    //A65 Z90 a97 z122
    //system("pause");
    return 0;
}
