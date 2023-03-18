#include <stdio.h>
#include <string.h>

void reverse(char mystr[]) {
    const int size = strlen(mystr);
    char reversed[size];

    int j = size - 1;

    for(int i = 0; i < size; i++) {
        reversed[i] = mystr[j--];
    }

    printf("Reversed: %s\n", reversed);
}

int main() {

    reverse("test, what the crap, BIG");

    return 0;
}