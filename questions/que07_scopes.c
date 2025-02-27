#include <stdio.h>

/*
   First var is declared, then value is
   assigned to it. As soon as var is
   declared as a local variable, it hides
   the global variable var.
   
   the variable i declared inside the for
   loop shadows the variable i declared
   outside the loop. So, every iteration of
   the loop assigns the value 10 to the inner
   i and prints it. The outer i is incremented
   by the loop condition, but it is not used
   inside the loop body. Therefore, the loop
   runs five times and prints 10 each time.
*/

int main() {
    int i;

    for ( i=0; i<5; i++ ) {
        int i = 10;
        printf ( "%d ", i );
        i++;
    }
    return 0;
}
