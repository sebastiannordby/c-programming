#include <stdio.h>
#include "list.h"
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCT_NAME_LENGTH 100

typedef struct _NODE{
    struct _NODE *next;
    struct _NODE *previous;
    char name[MAX_PRODUCT_NAME_LENGTH];
    int quanity;
    float price;
} NODE;

NODE *head;

void add(char name[MAX_PRODUCT_NAME_LENGTH], int quantity, float price) {
    NODE *newNode = malloc(sizeof(NODE));
    memset(newNode, 0, sizeof(NODE));

    if(newNode == NULL) {
        perror("Could not allocate newNode");
        return;
    }

    strcpy(newNode->name, name);
    newNode->quanity = quantity;
    newNode->price = price;

    newNode->next = head;

    if(head != NULL) {
        head->previous = newNode;
    }

    head = newNode;
}

void print_list() {
    if(head != NULL) {
        NODE *cu = head;

        while(cu != NULL) {
            printf("CurrentProduct: %s\r\n", cu->name);
            cu = cu->next;
        }
    }
}