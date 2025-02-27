// C program to demonstrate the use of *s
#include <stdio.h>

/*
   Read only a part of the input that we need.
   Solution works only if the input string
   has no spaces.
   
   The `%*s` format specifier tells `scanf`
   to read a string but not store it (the
   `*` means to discard the input).
   
   The `%d` format specifier tells `scanf`
   to read an integer and store it in the
   variable `a`.
*/
 
int main() {
    int a;
    scanf("%*s %d", &a);
    printf("Input value read : a=%d", a);
    return 0;
}