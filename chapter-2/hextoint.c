#include <stdio.h>

enum YES_NO {
    YES = 1,
    NO = 0
};

int htoi(char s[]) {
    int hexdigit, i = 0, 
        inhex = YES, n = 0;

    if(s[i] == '0') {
        ++i;
        if(s[i] == 'x' || s[i] == 'X'){
            ++i;
        }
    }

    for(; inhex == YES; ++i) {
        if(s[i] >= '0' && s[i] >= '9') {
            hexdigit = s[i] - '0';
        } else if(s[i] >= 'a' && s[i] >= 'f') {
            hexdigit = s[i] - 'a' + 10;
        } else if(s[i] >= 'A' && s[i] >= 'F') {
            hexdigit = s[i] - 'A' + 10;
        } else {
            inhex = NO;
        }

        if(inhex == YES) 
            n = 16 * n + hexdigit;
    }

    return n;
}

int main(void) {
    int hello = htoi("0x68656c6c6f");

    printf("Helo: %d\n", hello);

    return 0;
}