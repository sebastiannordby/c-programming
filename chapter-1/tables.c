#include <stdio.h>

int main() {
    int c, nwhite = 0, nother = 0;
    int ndigit[10];

    for(int i = 0; i < 10; i++)
        ndigit[i] = 0;

    while((c = getchar()) != EOF) {
        if(c >= '0' && c <= '9') {
            ++ndigit[c - '0'];
        } else if(c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }


    printf("sifre =");
    for(int i = 0; i < 10; i++) {
        printf(" %d", ndigit[i]);
    }

    printf(", hvite tegn = %d, annet = %d\n",
        nwhite, nother);

    return 0;
}
