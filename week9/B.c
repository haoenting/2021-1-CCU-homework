#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int matrix1[500][500], matrix2[500][500];
int main() {
	int n, m, r;
	scanf("%d%d%d", &n, &m, &r);
	for (int i = 0; i < n ; i++) {
		for (int j = 0; j < m ; j++) {
			scanf("%d", &matrix1[i][j]);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < r; j++) {
			scanf("%d", &matrix2[j][i]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < r; k++) {
			int num = 0;
			for (int j = 0; j < m; j++) {
				num += matrix1[i][j] * matrix2[k][j];
			}
			printf("%d ", num);
		}
		printf("\n");
	}
	//system("pause");
	return 0;
}
