#include <stdio.h>

int main(void) {
    unsigned long long a, b;

    scanf("%llu %llu", &a, &b);

    printf("%llu", a+b);

    return 0;
}