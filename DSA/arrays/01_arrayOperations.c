#include <stdio.h>

void insertAtBeginning(int arr[], int *size, int element) {
    for (int i = *size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
    (*size)++;
}

void insertAtEnd(int arr[], int *size, int element) {
    arr[*size] = element;
    (*size)++;
}

void insertAtPosition(int arr[], int *size, int element, int position) {
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {0};
    int size = 0;
    int element, position;

    // Insert at the beginning
    printf("Enter an element to insert at the beginning: ");
    scanf("%d", &element);
    insertAtBeginning(arr, &size, element);
    displayArray(arr, size);

    // Insert at the end
    printf("Enter an element to insert at the end: ");
    scanf("%d", &element);
    insertAtEnd(arr, &size, element);
    displayArray(arr, size);

    // Insert at a specific position
    printf("Enter an element to insert at a specific position: ");
    scanf("%d", &element);
    printf("Enter the position: ");
    scanf("%d", &position);
    insertAtPosition(arr, &size, element, position);
    displayArray(arr, size);

    return 0;
}