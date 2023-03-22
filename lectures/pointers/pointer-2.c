#include <stdio.h>

int main() {

    int *p, *q;
    int a = 10;
    int b = 25;
    
    printf("a after init: %d\n", a);
    printf("b after init: %d\n", b);
    
    p = &a;
    q = &b;

    printf("\r\np = %p\n", p);
    printf("q = %p\n", q);

    *q = 15;

    printf("\r\nb after modifying pointer q: %d\n", b);
    printf("q = %p\n", q);

    q = p;

    printf("\r\np = %p\n", p);
    printf("q = %p\n", q);

    printf("\r\na: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}