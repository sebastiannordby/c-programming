#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *f = fopen("binary.txt", "r");
    if(f == NULL) {
        perror("Could not open file");
        return 1;
    }

    int numberOfCharacters = 20;
    int numberOfCharactersRead = 0;
    unsigned char buffer[numberOfCharacters + 1];
    memset(buffer, 0, sizeof(buffer));


    do {
        if(numberOfCharactersRead = fread(buffer, sizeof(unsigned char), numberOfCharacters, f)) {
            if(numberOfCharactersRead == numberOfCharacters) {
                printf("%s", buffer);
            } else {
                for(int i = 0; i < numberOfCharactersRead; i++) {
                    printf("%c", buffer[i]);
                }
            }
        } 
    } while(numberOfCharactersRead > 1);
 
    printf("\r\n");

    fclose(f);

    return 0;
}