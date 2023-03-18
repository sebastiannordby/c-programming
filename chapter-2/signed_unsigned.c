#include <stdio.h>
#include <limits.h>


int main(void) {
    unsigned int posInt;
    signed int canNegInt;
    long double longDoub;
    unsigned char unChar;
    signed char siChar;
    unsigned long unLong;
    signed long siLong;

    printf("Own declared:\n\n");
    printf("posInt: %d\n", posInt);
    printf("canNegInt: %d\n", canNegInt);
    printf("longDoub: %Lf\n", longDoub);
    printf("unChar: %c\n", unChar);
    printf("siChar: %c\n", siChar);
    printf("unLong: %lu\n", unLong);
    printf("siLong: %lu\n", siLong);

    printf("\n\nRange of types:\n\n");
    printf("signed char min = %d\n", SCHAR_MIN);
    printf("signed char max = %d\n", SCHAR_MAX);
    printf("signed short min = %d\n", SHRT_MIN);
    printf("signed short max = %d\n", SHRT_MAX);
    printf("signed int min = %d\n", INT_MIN);
    printf("signed int max = %d\n", INT_MAX);
    printf("signed long min = %ld\n", LONG_MIN);
    printf("signed long max = %ld\n", LONG_MAX);
    printf("unsigned char max = %u\n", UCHAR_MAX);
    printf("unsigned short max = %u\n", USHRT_MAX);
    printf("unsigned int max = %u\n", UINT_MAX);
    printf("unsigned long max = %lu\n", ULONG_MAX);


    printf("\n\nSigned types:\n\n");
    printf("signed char min = %d\n",
        -(char)(unsigned char) 0 >> 1);
    printf("signed char max = %d\n",
        (char)(unsigned char) 0 >> 1);
    
    return 0;
}