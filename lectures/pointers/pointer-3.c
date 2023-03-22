#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* test = malloc(10 * sizeof(int));
    if(test == NULL) {
        exit(1);
    }

    int* first = &test[0];
    int* last = &test[9];
    int* current = first;

    printf("first: %p\r\n", first);
    printf("last: %p\r\n", last);
    printf("current: %p\r\n", current);
    
    while(current <= last) {
        printf("%d\r\n", *current);
        current = current + 1;
    }

    free(test);

    return 0;
}