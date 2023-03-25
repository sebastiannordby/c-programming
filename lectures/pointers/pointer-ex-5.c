#include <stdio.h>
#include <strings.h>

void print_strings(char *strings[]);

int main(void) {

    char *strings[] = {
        "Hello", 
        "YOU", 
        "You may wondering while i write this code?",
        "It's simply to learn.",
        "You see, i like to learn.",
        "XRP??",
        "\0"
    };

    print_strings(strings);

    return 0;
}

void print_strings(char *strings[]) {
    int size = 0;
    while(strings[size] != "\0") {
        printf("%02d) %s\r\n", size, *(strings + size));
        ++size;
    }
}