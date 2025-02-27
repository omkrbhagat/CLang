#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 5;
    /*
       a is less than b, so it returns
       1. Now 1 is stored in the integer
       context and 1<5 evaluate which gives
       1 for true
    */
    int d = (a<b<c);
    printf("%d\n", d);
}