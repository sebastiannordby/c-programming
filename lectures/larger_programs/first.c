#include <stdlib.h>
#include <stdio.h>

int test();

int main() {
    system("curl http://example.com/");
    system("ifconfig");

    printf("%d\n", test());

    return 0;
}


int test() {
    return 1;
}
