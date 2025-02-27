#include <stdio.h>

// Assume that the size of an integer is 4

int fun() {
    puts(" Hello ");
    return 10;
}

/*
   The output of the given C program is
   4. This is because the sizeof operator
   returns the size of the data type or
   expression that is passed to it. In
   this case, the expression is fun(),
   which is a function call that returns
   an integer value. Therefore, the
   sizeof operator evaluates to the size
   of an integer, which is assumed to be
   4 bytes. Note that the sizeof operator
   does not execute the function call, so
   the statement puts(" Hello ") inside
   the fun() function has no effect on the
   output.
*/

int main() {
    printf("%d", sizeof(fun()));
    return 0;
}
    