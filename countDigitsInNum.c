#include <stdio.h>

int main() {
   int num, originalNum, n = 0;
   
   printf("Enter any number : ");
   scanf("%d", &num);
   
   /*
      // won't work
      scanf("%d\n", &num);
      
      newline character (\n) in your scanf
      statement. This causes the program to
      wait for another input after you enter
      a number. To fix this, you need to
      remove the \n from the scanf statement.
   */
   
   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }
   
   /*
      In the first iteration, originalNum is assigned
      to 153, and n is 0. The condition originalNum != 0
      is true, so the loop body is executed. The statement
      originalNum /= 10; divides 153 by 10, and assigns 15
      to originalNum. The value of n is incremented by 1,
      and becomes 1.
      
      In the second iteration, originalNum is 15,
      and n is 1. The condition originalNum != 0
      is true, so the loop body is executed. The statement
      originalNum /= 10; divides 15 by 10, and assigns 1
      to originalNum. The value of n is incremented by 1,
      and becomes 2.
      
      In the third iteration, originalNum is 1,
      and n is 2. The condition originalNum != 0
      is true, so the loop body is executed. The statement
      originalNum /= 10; divides 1 by 10, and assigns 0
      to originalNum. The value of n is incremented by 1,
      and becomes 3.
      
      In the fourth iteration, originalNum is 0,
      and n is 3. The condition originalNum != 0
      is false, so the loop terminates. The final value
      of n is 3, which is the number of digits in 153.
   */
   
   printf("%d\n", n);
}