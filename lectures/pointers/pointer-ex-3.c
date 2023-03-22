#include <stdio.h>
#include <stdbool.h>


int main(void) {
    int a, b, *pA = &a, *pB = &b;

    printf("Enter two numbers separated by space\r\n");
    scanf("%d %d", pA, pB);

    if(a > b) {
        printf("First entered was the largest\r\n");
    } else if(a < b) {
        printf("Second entered was the largest\r\n");
    } else {
        printf("Both is equal\r\n");
    }

    pA = NULL;
    pB = NULL;

    return 0;
}
