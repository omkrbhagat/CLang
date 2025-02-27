#include <stdio.h>
// Function to check if a number is even or odd
void checkEvenOdd(int N) {
    // If N & 1 is true
    if (N & 1) {
        printf("\x1b[1;31mOdd\x1b[0;0m");
    }
     // Otherwise
    else {
        printf("\x1b[1;32mEven\x1b[0;0m");
    }
}

// Driver Code
int main() {
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    // Function Call
    checkEvenOdd(N);
    return 0;
}