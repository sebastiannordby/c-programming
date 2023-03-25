// Exercise 3:
// Take an input string and print all the occurrences of vowels[a,e,i,o,u] in the
// string in order of their occurrence.
#define NUMBER_OF_VOWELS 5
#define MAX_FILE_IN_BYTES 1500
#include <stdio.h>
#include <stdlib.h>
const char cVowels[] = {'a', 'e', 'i', 'o', 'u'};

typedef struct {
    int frequency;
    char vowel;
} Frequency;

Frequency* getVowels(char* str) {
    Frequency *frequencies = malloc(
        NUMBER_OF_VOWELS * sizeof(Frequency));

    for(int j = 0; j < NUMBER_OF_VOWELS; j++) {
        frequencies[j] = (Frequency) { 0, cVowels[j] };
    }

    int i = 0;
    while(str[i] != '\0') {
        char current = str[i];

        for(int vow = 0; vow < NUMBER_OF_VOWELS; vow++) {
            if(current == frequencies[vow].vowel) {
                frequencies[vow].frequency++;
                break;
            }
        }

        i++;
    }

    return frequencies;
}

char* getLoremString() {
    FILE* f = fopen("./lorem.txt", "r");
    unsigned long sizeOfSingleChar = sizeof(char);
    unsigned long size = MAX_FILE_IN_BYTES * sizeOfSingleChar;
    char* str = malloc(size);
    int currentSize = 0;
    int chr;

    while(currentSize * sizeOfSingleChar < size && (chr = fgetc(f)) != '\0' && chr != EOF) {
        str[currentSize++] = chr;
    }

    str[currentSize + 1] = '\0';

    fclose(f);
    f = NULL;

    return str;
}

int main(void) {
    char* str = getLoremString();
    Frequency* vowels = getVowels(str);

    printf("Vowel\tFrequency\r\n");
    for(int i = 0; i < NUMBER_OF_VOWELS; i++) {
        printf("%c\t%03d\r\n", 
            vowels[i].vowel, vowels[i].frequency);
    }

    free(vowels);
    free(str);
    vowels = NULL;
    str = NULL;
}