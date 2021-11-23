#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int n, q;
int ary[1000000];
long long int in;
void search(int left, int right) {
	while (left <= right) {
		int mid = (left + right) / 2;
		if (in > ary[mid])
			left = mid + 1;
		else if (in < ary[mid])
			right = mid - 1;
		else {
			printf("Yes\n");
			return;
		}
	}
	printf("No\n");
}
int main() {
	scanf("%d%d", &n, &q);
	for (int x = 1; x <= n; x++) {
		scanf("%lld", &ary[x]);
	}
	for (int y = 0; y < q; y++) {
		scanf("%lld", &in);
		search(1, n);
	}
	//system("pause");
	return 0;
}
