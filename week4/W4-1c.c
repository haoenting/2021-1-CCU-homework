#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int secore;
	scanf("%d", &secore);
	if (secore >= 90)printf("A+");
	else if(secore >= 85)printf("A");
	else if (secore >= 80)printf("A-");
	else if (secore >= 77)printf("B+");
	else if (secore >= 73)printf("B");
	else if (secore >= 70)printf("B-");
	else if (secore >= 67)printf("C+");
	else if (secore >= 63)printf("C");
	else if (secore >= 60)printf("C-");
	else if (secore >= 50)printf("D");
	else printf("E");
	return 0;
}