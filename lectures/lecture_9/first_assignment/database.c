#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "database.h"

typedef struct _LIST {
    struct _LIST *pNext;
    struct _LIST *pPrev;
    char entry[MAX_ENTRY_LENGTH]
} LIST;

LIST *pHead;

void createDatabase(int type) {
    printf("Creating database of type: %d\r\n", type);
}

void addEntry(char entry[]) {
    LIST *pThis = malloc(sizeof(LIST));
    memset(pThis, 0, sizeof(LIST));

    printf("Adding entry: %s\r\n", entry);

    pThis->pNext = pHead;
    strcpy(pThis->entry, entry);

    if(pHead != NULL) {
        pHead->pPrev = pThis;
    }

    pHead = pThis;
}

void listEntries(void) {
    if(pHead != NULL) {
        printf("All entries:\r\n");

        LIST *current = pHead;

        do {
            printf("%s\r\n", current->entry);
        } while((current = current->pNext) != NULL);
    } else {
        printf("No entries registered.\r\n");
    }
}