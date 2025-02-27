#include <stdio.h>

int main() {
    int A, B, C, largest;
    printf("\x1b[1;32mEnter three numbers : \x1b[0;0m");
    scanf("%d %d %d", &A, &B, &C);
    
    /*
       Check if A is greater than B:
       if true:
         Check if A is greater than C:
         if true:
           Store A in variable
         else:
           Check B is greater than C:
           if true:
             Store B in variable
           else:
             Store C in variable   
    */
    
    largest = A > B ? (A > C ? A : C) : (B > C ? B : C);
    printf("\x1b[1;32m\nlargest number is : \x1b[0;0m%d\n", largest);
}