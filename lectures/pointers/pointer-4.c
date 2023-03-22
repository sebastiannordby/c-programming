#include <stdio.h>

int main(void) {
    int offset = 12;
    int *pInt, expr;
    char *pChar;
    pChar = (char*) pInt; 

    printf("pInt: %p\r\n", pInt);
    printf("pChar: %p\r\n", pChar);
    
    int* res1 = (int*) (pChar + offset);
    int* res2 = pInt + 3;
    expr = res1 == res2;

    printf("res1: %d\r\n", *res1);
    printf("res2: %d\r\n", *res2);

    if(expr) {
        printf("Holy guac: %d\n", expr);
    } else {
        printf("You will simply fail the exam: %d\n", expr);
    }

    return 0;
}