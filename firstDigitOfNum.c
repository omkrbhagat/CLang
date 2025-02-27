#include <stdio.h>

/*
   Keep dividing the number by 10 till
   it is greater than 10, the first digit
   will always in between 0-9.
*/
int firstDigit(int n){
    while(n>10){
        n/=10;
    }
    return n;
}

int main() {
   int n;
   printf("\x1b[1;32mEnter a Number : \x1b[0;0m");
   scanf("%d", &n);
   int dig = firstDigit(n);
   printf("\x1b[1;32mFirst Digit : \x1b[0;0m%d\n", dig);
}