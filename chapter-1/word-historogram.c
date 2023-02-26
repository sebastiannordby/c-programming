#include <stdio.h>

#define IN 1
#define OUT 0

void print_word_length(int wordLength) {
    if(wordLength > 0) {
        for(int i = 1; i <= wordLength; i++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int c, wordLength = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n' || c == '\t') {
            print_word_length(wordLength);
            wordLength = 0;
        } else {
            wordLength++;
        }
    }   
}