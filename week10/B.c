#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
char name[500][200];
int main() {
    int x = 0;
    char tmp[100];
    while (scanf("%s", name[x]) != EOF) {
        x++;        
    }
    for (int a = 0; a < x - 1; a++) {
        for (int b = 0; b < x - 1 - a; b++) { 
            if (strcmp(name[b], name[b + 1]) > 0) {
                strcpy(tmp, name[b]);
                strcpy(name[b], name[b + 1]);
                strcpy(name[b + 1], tmp);
            }
        }
    }
    for (int c = 0; c < x; c++) {
        printf("%s", name[c]);
        if (c != x - 1)printf("\n");
    }
    //system("pause");
    return 0;
}
