#include <stdio.h>
#include <stdbool.h>

int main() {

    int c;
    bool previousWasSpace = false;

    while((c = getchar()) != EOF) {
        if(c == '\t' || c == ' ') {
            if(!previousWasSpace) {
                c = ' ';
            } else {
                continue;
            }
                
            previousWasSpace = true;
        } else {
            previousWasSpace = false;
        }

        putchar(c);
    }

    return 0;
}