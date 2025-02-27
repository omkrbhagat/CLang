#include <stdio.h>

int main() {
    int x = 1, y = 2, z = 3, a;
    /*
       assignment operator has more
       precedence than comma operator
    */
    a = x,y,z;
    
    /*
       comma operator has associativity
       from left to right
       a = (x,y,z); // 3
    */
    printf("%d\n", a);
}