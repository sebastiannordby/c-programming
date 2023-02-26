#include <stdio.h>
#include <stdbool.h> 


// CTRL + D = EOF

int main() {
    int c = getchar();
    int t = c != EOF;

    while(t) {
        printf("%d\n", t);
        putchar(c);
        c = getchar();
        t = c != EOF;
    }

    return 0;
}