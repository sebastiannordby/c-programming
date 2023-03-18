#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len, max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while((len = get_line(line, MAXLINE)) > 0) {
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if(max > 0) {
        printf("The longest line was: %s\n", longest);
        printf("The legth of the line was: %d\n", max);
    }

    return 0;
}

int get_line(char s[], int limit) {
    int c, i, j = 0;

    for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i ) {
        if(i < limit - 2) {
            s[j] = c;
            j++;
        }
    }

    if(c == '\n') {
        s[j] = c;
        ++i;
        ++j;
    }

    s[j] = '\0';

    return i;
}

void copy(char to[], char from[]) {
    for(int i = 0; (to[i] = from[i]) !='\0'; i++);
}