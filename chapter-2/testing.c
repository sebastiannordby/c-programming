#include <stdio.h>

int main(void) {
    int a = 4; // 00000100
    int b = 9; // 00001001
    int c = 0;
    int d = a & b;

    if(d == c) {
        printf("Bingo, you understand bitwise and\n");
    } else {
        printf("Hmm, you should practise some more: %d\n",
        d);
    }

    return 0;
}
