#include <stdio.h>
#include <stdlib.h>

int main() {
    int N = 1000;
    for(int i = 0; i < 10; i++) {
        int randNum = rand() % (N + 1);
        printf("Random Number: %d\n", randNum);
    }
    
    return 0;
}