// strlen() outputs the length of a string and is part of the string.h.
// Write a small function to output the length of a string without using strlen().
// Hint:  In C a sting is assumed to be terminated with '\0'

#include <stdio.h>

int string_length(char* str);

int main() {
    char* st = "Denne sj9\0";
    int length = string_length(st);

    printf("Length: %d: %s\r\n", length, st);
}

int string_length(char* str) {
    int i = 0;
    char c = str[i];

    while(c != '\0') {
        c = str[++i];
    }

    return i;
}