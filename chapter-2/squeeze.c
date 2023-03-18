#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void squeeze(char[], char[]);

int main() {

    char s1[] = "Dette er spennande crue?"; 

    squeeze(s1, "abcde");

    printf("%s\n", s1);

    return 0;
}

void squeeze(char s1[], char s2[]) {
    int i, j, scnt = 0;

    for(i = 0; i < strlen(s1); i++) {
        bool valid = true;

        for(j = 0; j < strlen(s2); j++) {
            if(s1[i] == s2[j]) {
                valid = false;
                break;
            }
        }

        if(valid) {
            s1[scnt++] = s1[i];
        }
    }

    s1[++scnt] = '\0';
}