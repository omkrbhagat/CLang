#include <stdio.h>

int main() {
   // explicit type conversion
   int x = 15, y = 2;
   //double z = x/y; // 7
   double z = (double) x/y; // 7.5
   printf("%g\n", z);
   return 0; 
}