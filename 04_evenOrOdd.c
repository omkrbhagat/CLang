#include <stdio.h>

void checkEvenOdd(int N) {
    int var = 1;
    for(int i = 1; i <= N; i++) {
    /*
       in every iteration, value of var is updated
       when var is 1, it becomes 0
       when var is 0, it becomes 1
    
       essentially, the loop toggles the value of
       var between 0 and 1 for each iteration
    */
    
        var = 1 - var;
    }

    if(var == 1) {
        printf("Even");
    }else {
        printf("Odd");
    }
}

int main() {
    int N = 101;
    checkEvenOdd(N);
    return 0;
}