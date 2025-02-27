#include <stdio.h>

/*
  Sum of series when we know
  first and last term and no of terms:
  
  Sn = n / 2 * (first term + last term)
  i.e. 51 / 2 * (100 + 0).
  = 51 * 50
  = 2550
*/

int ap(int n) {
    if (n == 0)
       return n;
    else 
       return n + ap(n-2);
}

int main() {	
    int n = 100;
    printf("Value is: %d\n", ap(n));
}
