#include <stdio.h>

int any(char s1[], char s2[]) {
    int i, j;

    for(i = 0; s1[i] != '\0'; i++) {
        for(j = 0; s2[j] != '\0' && s1[i] != s2[j]; j++)
            ;

        if(s2[j] != '\0') {
            return i;
        }
    }

    return -1;
}

int main(void) {
    char s1[] = "Hello World";
    char s2[] = "ed";
    int index = any(s1, s2);

    printf("In \"%s\" we found matches of \"%s\" at index %d\r\n", 
        s1, s2, index);

    return 0;
}