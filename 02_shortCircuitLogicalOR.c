#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 10, b = 4;
    bool res = ((a!=b) || printf("GfG"));
    return 0;
}

/*
   In the case of Logical AND, the second
   operand is not evaluated if the first
   operand is true.
   Output : No Output
*/