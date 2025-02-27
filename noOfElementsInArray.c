#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Size of arr : %lu\n", sizeof(arr)/sizeof(arr[0]));
    return 0;
}
    