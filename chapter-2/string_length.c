#include <stdio.h>

int stringlength(char s[]);

int main(void) {

    char s[] = "This is my string";
    printf("\"%s\" has a length of: %d\n",
    s, stringlength(s));

    return 0;
}

int stringlength(char string[]) {
    int i = 0;

    while(string[i] != '\0')
        i++;

    return i;
}