#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m; // 1 <= N <= 100000, 1 <= M <= 100000
	int* arr, * acc, * sum;
	int i, j; // 1 <= i <= j <= N

	scanf("%d %d", &n, &m);

	arr = malloc(sizeof(int) * (n + 1));
	acc = malloc(sizeof(int) * (n + 1));
	sum = malloc(sizeof(int) * m);
	for (int i = 0; i < (n + 1); i++)
		acc[i] = 0;
	for (int i = 0; i < m; i++)
		sum[i] = 0;

	for (int i = 1; i < (n + 1); i++) {
		scanf("%d", &arr[i]);
		acc[i] = acc[i - 1] + arr[i];
	}

	for (int k = 0; k < m; k++) {
		scanf("%d %d", &i, &j);
		sum[k] = acc[j] - acc[i - 1];
	}

	for (int i = 0; i < m; i++) {
		printf("%d", sum[i]);
		if (m - i != 1)
			printf("\n");
	}
}