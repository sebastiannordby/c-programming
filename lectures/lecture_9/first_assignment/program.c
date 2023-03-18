#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "database.h"

#define MAX_MENU_LINE_SIZE 20

enum MENU_CHOICE {
    ADD_ENTRY = '1',
    LIST_ALL_ENTRIES = '2',
    DELETE_AN_ENTRY = '3',
    EXIT_PROGRAM = '4',
};

void printMenu(char options[][MAX_MENU_LINE_SIZE], int rows);
bool isValid(int choice);
int readOption(void); 
char* readEntry(void);

int main(int argc, char *argv[]) {
    for(int i = 0; i < argc; i++) {
        printf("argv: %s\n", argv[i]);
    }

    char options[4][MAX_MENU_LINE_SIZE] = {
        "Add entry\0",
        "List all entries\0",
        "Delete an entry\0",
        "Exit the program\0"
    };

    createDatabase(2);
    printf("Welcome to the database\r\n");
    printf("Your choises:\r\n");
    int choice = 0;

    do {
        printMenu(options, sizeof(options) / sizeof(options[0]));
        printf("option> ");
        choice = readOption();
        printf("Choice: %d\n", choice);
        printf("Choice: %c\n", (char)choice);

        if(isValid(choice)) {
            if(choice == '1') {
                printf("Entry> ");
                char* entry = readEntry();
                addEntry(entry);
            } else if(choice == '2') {
                listEntries();
            } else if(choice == '3') {
                printf("Delete an entry not implemented");
            } else if(choice == '4') {
                printf("Existing the program");
            }
        } else {
            printf("Exiting program\r\n");
            break;
        }
    } while(true);

    return 0;
}

int readOption(void) {
  int option = getchar();

  if (option != '\n' && option != EOF) {
    int rcc; // remaining character cleaning
    while ((rcc = getchar()) != '\n' && rcc != EOF)
        ;
  }

  return option;
}

char* readEntry(void) {
    char *entry[] = malloc(sizeof(char) * MAX_ENTRY_LENGTH);
    memset(&entry, '\0', sizeof(char) * MAX_ENTRY_LENGTH);
    int currChar;
    int counter = 0;

    while((currChar = getchar()) != EOF &&
        currChar != '\0' && currChar != '\n') {
        entry[counter++] = currChar;
    }

    printf("This is the entry: %s\n", entry);
}


void printMenu(char options[][MAX_MENU_LINE_SIZE], int rows) {
    for(int i = 0; i < rows; i++) {
        int columns = sizeof(options[0]) / sizeof(options[i][0]);
        int j = 0;
        int currentChar;

        printf("%d: ", i + 1);

        while((j < columns) && (currentChar = options[i][j++]) != '\0') {
            printf("%c", currentChar);
        }

        printf("\r\n");
    }
}

bool isValid(int choice) {
    return choice != EOF && 
        choice >= ADD_ENTRY && choice <= EXIT_PROGRAM;
}
