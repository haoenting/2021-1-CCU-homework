#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100000000
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ary[SIZE];
char* token;
int main() {
    while (fgets(ary, SIZE, stdin) != NULL) {
        if (strlen(ary) == 1) {
            continue;
        }
        int sum = 0;
        token = strtok(ary, " ");
        while (token != NULL) {
            sum += atoi(token);
            token = strtok(NULL, " ");
        }
        printf("%d\n", sum);
    }
    //system("pause");
    return 0;
}
