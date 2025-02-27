#include <stdio.h>

int main() {
    int num = 42;
    float pi = 3.14159;

    // Width specifier example
    printf("The number is: %5d\n", num);

    // Zero-padding example
    printf("The number with zero-padding is: %05d\n", num);

    // Precision specifier example
    printf("The value of pi is: %.2f\n", pi);

    return 0;
}