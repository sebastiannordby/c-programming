#include <stdio.h>

int main(void) {
    FILE *f = fopen("./writing.txt", "w");

    for(int i = 1; i <= 10; i++) 
        fputs("Hello World\r\n", f);

    fclose(f);
    f = NULL;

    return 0;
}