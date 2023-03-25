// Consider the following - You have a multidimensional array of size [r][c] -
// r rows and c cols. (r,c) are provided at run-time. Example: (r=10,c=5)(r=5,c=5)
// Take input from user and store each integer into a random row. Store it
// in another row if the row is already full. Then print the whole array in a nice formatting.
// Then write a function that takes a pointer to a row and sorts the integers in place.

// Hints: See ex0a.c and ex0b.c for how to create a multi-dimensional array dynamically.
//        Use the BubbleSort() from previous exercises.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef struct {
    int row;
    int column;
} ArrayPos;

ArrayPos *getRandom(bool **takenSpaces, int rows, int cols);
void printMultiArray(int** multi, int rows, int cols);

int main(void) {
    srand(time(NULL));   

    int **multi;
    bool **takenSpaces;

    int rows;
    int cols;

    printf("Rows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &cols);

    multi = (int**) malloc(rows * sizeof(int*));
    takenSpaces = (bool**) malloc(rows * sizeof(bool*));

    for(int i = 0; i < rows; i++) {
        multi[i] = malloc(cols * sizeof(int));
        takenSpaces[i] = malloc(cols * sizeof(bool));
    }

    printMultiArray(multi, rows, cols);

    bool hasMoreSpaces = true;
    int totalAvailableSpaces = rows * cols;
    int availableSpaces = totalAvailableSpaces;
    int input = 0;
    
    while(availableSpaces > 0) {
        printf("Number: ");
        scanf("%d", &input);

        if(input == EOF)
            break;

        ArrayPos *pos = getRandom(takenSpaces, rows, cols);

        multi[pos->row][pos->column] = input;
        takenSpaces[pos->row][pos->column] = true;

        free(pos);
        availableSpaces--;
    }

    printMultiArray(multi, rows, cols);
}

void printMultiArray(int** multi, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", multi[i][j]);
        }

        printf("\n");
    }
}

ArrayPos *getRandom(bool **takenSpaces, 
    int rows, int cols) {

    ArrayPos *res = (ArrayPos*) malloc(sizeof(ArrayPos));

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(!takenSpaces[i][j]) {
                res->row = i;
                res->column = j;

                return res;
            }
        }
    }

    return NULL;
}

