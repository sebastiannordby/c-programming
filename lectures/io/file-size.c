#include <stdio.h>

int main(void) {

    long lSize = 0;
    FILE *f;

    if((f = fopen("./binary.txt", "r")) != NULL) {
        if(fseek(f, 0, SEEK_END) == 0) {
            lSize = ftell(f);
            printf("Size of file: %ld\r\n", lSize);
            rewind(f);
        }

        fclose(f);
    }

    return 0;
}