#include <stdio.h>

int main() {
    /*
      The compiler adds 5 to the base
      address of the string through the
      expression 5 + "GeeksQuiz".
      Then the string "Quiz" gets passed
      to the standard library function as
      an argument
    */
    printf(5 + "GeeksQuiz");
    return 0;
}