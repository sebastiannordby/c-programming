#include <stdio.h>

int count_func();

int main() {

    for(int i = 1; i <= 100; i++) {
        count_func();
    }

    return 0;
}


int count_func() {
    static int counter = 0;
    counter++;

    printf("Counter has been called: %d\n", counter);

    return counter;
}