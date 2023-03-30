#include <stdio.h>

void squeeze(char s1[], char s2[]) {
    int k = 0, j = 0;

    for(int i = 0; s1[i] != '\0'; i++) {
        for(j = 0; s2[j] != '\0' && s1[i] != s2[j]; j++)
            ;
        
        if(s2[j] == '\0')
            s1[k++] = s1[i];
    }

    s1[k] = '\0';
}

int main(void) {
    char s1[] = "Hello World";
    char s2[] = "el";

    squeeze(s1, s2);

    printf("s1: %s\r\n", s1);
    printf("s2: %s\r\n", s2);

    return 0;
}