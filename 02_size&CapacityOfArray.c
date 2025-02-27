#include <stdio.h>

int main() {
    int array[6] = {10, 20, 30, 40};
    
    // Calculate the size of the array
    int size = sizeof(array) / sizeof(array[0]);

    // Calculate the number of initialized elements
    int initialized_elements = sizeof(array) / sizeof(array[0]);
    while(initialized_elements > 0 && array[initialized_elements - 1] == 0) {
        initialized_elements--;
    }

    printf("Capacity of the array: %d\n", size);
    printf("Number of initialized elements: %d\n", initialized_elements);

    return 0;
}