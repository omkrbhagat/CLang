#include <stdio.h>

int main() {
   float c = 5.0;
   /*
     small issue with an expression,
     9/5 is an integer division, which
     will result in 1 not 1.8
   */
   printf ("Temperature in Fahrenheit is %.2f", (9/5)*c + 32);
   return 0;
}
