#include <stdio.h>

int function_1() {
   static int counter_1 = 0;
   counter_1++;
   return counter_1;
}

int function_2() {
   int counter_2 = 0;
   counter_2++;
   return counter_2;
}

int main() {
   printf("Using static keyword : ");
   printf("%d ", function_1());
   printf("%d\n", function_1());
   
   printf("Using int keyword : ");
   printf("%d ", function_2());
   printf("%d\n", function_2());
   return 0;
}