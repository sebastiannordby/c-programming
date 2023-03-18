#include <stdio.h>

enum escapes {
    BELL = '\a',
    BACKSPACE = '\b',
    TAB = '\t',
    NEWLINE = '\n',
    VTAB = '\v',
    RETURN = '\r'
} escapes;

int main(void) {

    printf("BELL: %c\n", BELL);
    printf("BACKSPACE: %c\n", BACKSPACE);
    printf("TAB: %c\n", TAB);
    printf("NEWLINE: %c\n", NEWLINE);
    printf("VTAB: %c\n", VTAB);
    printf("RETURN: %c\n", RETURN);

    return 0;
}