#include <stdio.h>

// Ex: 2^3 = 2 * 2 * 2
int power(int b, int e);

int main() {
    for(int i = 0; i < 10; i++) {
        printf("%d %3d %6d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}

int power(int base, int n) {
    int p = 1;

    for(int i = 1; i <= n; i++) {
        p = p * base;
    }

    return p;
}
