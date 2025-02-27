#include <stdio.h> 

// Assume that the number is stored in 2's complement form

int main() {
   unsigned int x = -1; 
   int y = ~0; 

   if (x == y) 
      printf("same"); 
   else
      printf("not same"); 
   return 0; 
}
    
