#include <stdio.h>

int main(void) {
    FILE *f = fopen("./writing.txt", "r");
    int c;

    while((c = fgetc(f)) != EOF) {
        printf("%c", c);
    }

    fclose(f);
    f = NULL;

    return 0;
}