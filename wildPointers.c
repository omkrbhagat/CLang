#include <stdio.h>

int main(int argc, char *argv[]) {
    int *ptr;
    /* ptr is a wild pointer in C */
    int a = 20;
    /* ptr is no longer a wild pointer */
    ptr = &a;
    /* The value of a is modified */
    *ptr = 12;
    printf("Value of a: %d", a);
}