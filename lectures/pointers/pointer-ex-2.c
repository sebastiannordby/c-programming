#include <stdio.h>

int main(void) {

    int *pInt;
    char *pChar;
    short *pShort;
    double *pDouble;

    printf("Size of pointers: %lu %lu %lu %lu\r\n",
        sizeof(pInt), sizeof(pChar), sizeof(pShort), sizeof(pDouble));

    // When using the asterix = *
    // the pointer is dereferenced and you get the value that the 
    // pointer points to 
    printf("Size of variables: %lu %lu %lu %lu\r\n",
        sizeof(*pInt), sizeof(*pChar), sizeof(*pShort), sizeof(*pDouble));

    return 0;
}