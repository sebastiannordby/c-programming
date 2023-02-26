#include <stdio.h>

void while_counter() {
    long nc = 0;
    
    while(getchar() != EOF) {
        ++nc;
    }

    printf("\nwhile_counter: %ld\n", nc);
}

void for_counter() {
    double nc;

    for(nc = 0; getchar() != EOF; ++nc);

    printf("\nfor_counter: %.0f\n", nc);
}

void count_lines() {
    int c, nl = 0;

    while((c = getchar()) != EOF) {
        if(c == '\n') {
            nl++;
        }
    }

    printf("count_lines: %d\n", nl);
}

void count_space_tab_and_newline() {
    int c, newLines = 0, tabs = 0, spaces = 0;

    while((c = getchar()) != EOF) {
        if(c == '\t') {
            ++tabs;
        } else if(c == '\n') {
            ++newLines;
        } else if(c == ' ') {
            ++spaces;
        }
    }

    printf("\nSpaces\tTabs\tLines\n");
    printf("%5d\t%4d\t%5d\n", spaces, tabs, newLines);
}

int main() {
    
    count_space_tab_and_newline();

    return 0;
}