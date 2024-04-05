#include <stdio.h>
#include <stdlib.h>
// #include <Windows.h>

int main(void) {
	int n = 0, * arr;
	unsigned long long sum = 0, * acc;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * (n + 1));
	acc = (unsigned long long*)malloc(sizeof(unsigned long long) * (n + 1));
	for (int i = 0; i < (n + 1); i++) {
		arr[i] = 0;
		acc[i] = 0;
	}

	for (int i = 1; i < n + 1; i++) {
		scanf("%d", &arr[i]);
		// arr[i] = i;
		acc[i] = (acc[i - 1] + arr[i]);
	}

	/*for (int i = 0; i < n + 1; i++) {
		printf("%d ", arr[i]);
	} printf("\n");
	for (int i = 0; i < n + 1; i++) {
		printf("%llu ", acc[i]);
	} printf("\n");*/

	for (int i = 1; i < n + 1; i++) {
		sum += arr[i] * (acc[n] - acc[i]);
		sum %= 1000000007;
		// Sleep(1);
		// printf("%llu\n", sum);
	}

	printf("%llu", sum);
	// printf("sum: %llu\nsum %% 1000000007: %llu", sum, sum % 1000000007);

	return 0;
}