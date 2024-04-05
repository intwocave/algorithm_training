#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m; int i, j; // (1 ¡Â N ¡Â 100,000) (-1,000 ¡Â Ai ¡Â 1,000)
	// 1 <= i <= j <= N

	scanf("%d", &n);
	int* a = malloc(sizeof(int) * (n + 1));

	for (int i = 1; i < n + 1; i++) {
		scanf("%d", &a[i]);
		a[i] += a[i - 1];
	}

	scanf("%d", &m);
	int* sum = malloc(sizeof(int) * m);

	for (int k = 0; k < m; k++) {
		scanf("%d %d", &i, &j);
		sum[k] = a[j] - a[i - 1];
	}

	for (int i = 0; i < m; i++) {
		printf("%d", sum[i]);
		if (m - i != 1)
			printf("\n");
	}

	return 0;
}