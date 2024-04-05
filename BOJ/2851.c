#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[10], acc[10] = {0, }, res = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		if (i == 0) acc[i] = arr[i];
		else acc[i] = arr[i] + acc[i - 1];
	}

	int a = 100, b = 0;
	for (int i = 0; i < 10; i++) {
		b = 100 - acc[i];
		if (b < 0){
			if (-b < a || -b == a) {
				a = -b;
				res = acc[i];
			}
		}
		else {
			if (b < a || b == a) {
				a = b;
				res = acc[i];
			}
		}
	}

	printf("%d", res);
}