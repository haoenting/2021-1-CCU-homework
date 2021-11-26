#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

long long int ary[300001];
int main() {
	long long int size, max;
	scanf("%lld %lld", &size, &max);
	long long int sum = size * (size - 1) / 2;
	long long int now = size;
	int T = 0;
	for (long long int x = 1; x <= size; x++) {
		scanf("%lld", &ary[x]);
		if (ary[x] >= max && T==0) {
			now = x-1;
			T++;
		}
	}
	long long int left=1;
	while (left < now ) {
		long long int right = now - 1;
		left = 1;
		for (;left < now;) {
			long long int mid = (left + right) / 2;
			if (ary[left] == ary[now]) {
				if (ary[now] * 2 < max) {
					left = now;
					break;
				}
				else now = left - 1;
			}
			else if (ary[now] + ary[mid] >= max) {
				if (ary[now] + ary[mid - 1] < max|| mid==1) {
					sum = sum - mid + 1;
					break;
				}
				right = mid -1;
			}
			else if (ary[now] + ary[mid] < max) {
				if (ary[now] + ary[mid + 1] >= max) {
					sum -= mid;
					break;
				}			
				left = mid+1;
			}
		}
		now--;
	}
	sum = sum - (left - 1) * left / 2;
	printf("%lld", sum);
	//system("pause");
	return 0;
}
