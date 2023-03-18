#include <stdio.h>

int atoi(char s[]) {
    int n;

    for(int i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] - '0');
    }

    return n;
}

int main(void) {
    printf("%d\n", atoi("0123456789"));

    return 0;
}