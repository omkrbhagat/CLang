#include <stdio.h>
int main() {
  int n = 20;
  printf("\nThe address of n is %u", &n);
  printf("\nThe value of n is %d", n);
  printf("\nThe value of n is %d", *(&n));
}