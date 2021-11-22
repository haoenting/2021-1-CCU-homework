#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int n, q;
int str[501];
void sort() {
	int p = 0;
	for (int y = n; y > 0; y--) {
		for (int x = 0; x < y; x++) {
			if (str[x] > str[x + 1]) {
				p = str[x];
				str[x] = str[x + 1];
				str[x + 1] = p;
			}
		}		
	}
}

int main() {
	scanf("%d%d", &n, &q);
	for (int x = 1; x <= n; x++) {
		scanf("%d", &str[x]);
	}
	sort();
	int num;
	for (int y = 1; y <= q; y++) {
		scanf("%d",&num);
		printf("%d\n", str[num]);
	}
	system("pause");
	return 0;
}
