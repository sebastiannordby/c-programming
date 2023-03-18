#include <stdio.h>

void changeconst(const char a[]);

int main(void) {
    changeconst('d');

    return 0;
}

// Won't compile (y)
void changeconst(const char a[]) {
    a[0] = 'a';
}