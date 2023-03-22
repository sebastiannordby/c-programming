#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int size, int* array);


int main(void) {
    int array[] = { 9, 7, 5, 3, 8, 11, 0, -2, 18};
    bubble_sort(sizeof(array) / sizeof(int), array);

    return 0;
}

void bubble_sort(int size, int* array) {
    bool sorted = false;
    
    if(size == 1)
        return;

    for(int times = 0; times < size - 1; times++) {
        for(int i = size - 1; i > 0; i--) {
            int a = array[i];
            int b = array[i - 1];

            if(a < b) {
                array[i] = b;
                array[i - 1] = a;
            }
        }
    }

    printf("Sorted: ");

    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\r\n");
}
