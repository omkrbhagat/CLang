#include <stdio.h>
// Function to check a number is even or odd
void checkEvenOdd(int N) {
    // Initialise a variable var
    int var = 1;
     // Iterate till N
    for (int i = 1; i <= N; i++) {
         // Subtract var from 1
        var = 1 - var;
    }
     // Condition for even
    if (var == 1) {
        printf("\x1b[1;32mEven\x1b[0;0m");
    }
     // Otherwise
    else {
        printf("\x1b[1;31mOdd\x1b[0;0m");
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