#include <stdio.h>
#include <stdlib.h>

#define MAX_FILE_SIZE 1000

int main(void) {
    FILE *f = fopen("./file", "r");

    unsigned char input[256];
    unsigned char output[256];
    int i, j;

    // Read the input string
    printf("Enter 7-bit ASCII code to decode: ");
    fgets(input, sizeof(input), f);

    // Decode the 7-bit ASCII code
    for (i = 0, j = 0; input[i] != '\0'; i++, j++) {
        output[j] = (input[i] << 1) | (input[i+1] >> 6);
        if (output[j] == '\r') j--; // skip over CR (carriage return)
    }
    output[j] = '\0';

    // Print the decoded string
    printf("Decoded string: %s\n", output);

    return 0;
}