#include <stdio.h>

int main(void) {
    int *pInt, orgInt, newInt;

    orgInt = 10;
    newInt = 11;
    pInt = &orgInt;

    printf("Before modification:\r\n");
    printf("orgInt: %d\n", orgInt);
    printf("&orgInt: %p\n", pInt);
    printf("*pInt: %d\n", *pInt);
    printf("newInt: %d\n", newInt);

    *pInt = 22;
    printf("\r\nAfter modification(1):\r\n");
    printf("*pInt = 22;\r\n");
    printf("\torgInt: %d\n", orgInt);
    printf("\t&orgInt: %p\n", pInt);
    printf("\t*pInt: %d\n", *pInt);
    printf("\tnewInt: %d\n", newInt);

    int *pNewInt = &newInt;
    *pNewInt = 33;
    pInt = pNewInt;
    printf("\r\nAfter modification(2):\r\n");
    printf("\torgInt: %d\n", orgInt);
    printf("\t&orgInt: %p\n", pInt);
    printf("\t&pNewInt: %p\n", pNewInt);
    printf("\t*pInt: %d\n", *pInt);
    printf("\tnewInt: %d\n", newInt);

    *pInt = *pNewInt = 44;
    printf("\r\nAfter modification(3):\r\n");
    printf("\torgInt: %d\n", orgInt);
    printf("\t&orgInt: %p\n", pInt);
    printf("\t&pNewInt: %p\n", pNewInt);
    printf("\t*pInt: %d\n", *pInt);
    printf("\tnewInt: %d\n", newInt);
}