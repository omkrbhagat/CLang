#include <stdio.h>
#include <stdlib.h>

int main() {
    int N = 100;
    for(int i = 0; i < 10; i++) {
        int randNum = rand() % N;
        printf("Random Number: %d\n", randNum);
    }
}