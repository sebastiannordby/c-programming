#include <stdio.h>

void r_comment(int character);
void in_comment(void);
void echo_qoute(int c);

int main(void) {

    int c, d;

    while((c = getchar()) != EOF) {
        r_comment(c);
    }

    return 0;
}

void r_comment(int c) {
    int d;

    if(c == '/') {
        d = getchar();

        if(d == '*') {
            in_comment();
        } else if(d == '/') {
            putchar(c);
            r_comment(d);
        } 
    } else if(c == '\'' || c == '"') {
        echo_qoute(c);
    } else {
        putchar(c);
    }
}

void in_comment(void) {
    int c, d;

    c = getchar();
    d = getchar();

    while(c != '*' || d != '/') {
        c = d;
        d = getchar();
    }
}

void echo_qoute(int c) {
    int d;

    putchar(c);

    while((d = getchar()) != 'c') {
        putchar(d);

        if(d == '\\') {
            putchar(getchar());
        }
    }

    putchar(d);
}