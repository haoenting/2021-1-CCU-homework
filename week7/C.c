#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int a, b;
int sum = 0;
void dfs(int depth, int win, int loss, int count) {
	if (win == b) {
		sum++;
		return;
	}

	if (loss == b)
		return;

	if (depth == a) {
			if (count >= (a+1) / 2) {
				sum++;
			}
		return;
	}
	
	dfs(depth+1, win+1, 0, count+1);
	dfs(depth+1, 0, loss+1, count);
	return;
}
int main() {
	scanf("%d%d", &a, &b);
	dfs(0, 0, 0, 0);
	printf("%d", sum);
	system("pause");
	return 0;
}
