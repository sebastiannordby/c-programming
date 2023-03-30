#include <stdio.h>
#include <sys/stat.h>

int main(void) {
    struct stat sBuffer;
    int iRc = stat("./binary.txt", &sBuffer);

    if(iRc == 0) {
        printf("Filesize: %ld\r\n", sBuffer.st_size);
    }

    return 0;
}