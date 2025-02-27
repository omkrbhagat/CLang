#include <stdio.h>
#include <stdlib.h>

int main() {
    int upper_bound = 1000;
    int lower_bound = 100;
    
    for(int i = 0; i < 10; i++) {
        int randNum = rand() % (upper_bound - lower_bound + 1) + lower_bound;
        printf("Random Number: %d\n", randNum);
    }
}