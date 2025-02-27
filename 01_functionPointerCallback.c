#include <stdio.h>

/*
	The operate function accepts a function pointer
	operation that is used to perform a specific
	operation (like addition or subtraction) on the
	two integers a & b. By passing the add or subtract
	function to operate, the correct function is executed
	dynamically.
*/

// A simple addition function
int add(int a, int b) {
    return a + b;
}

// A simple subtraction function
int subtract(int a, int b) {
    return a - b;
}

void calc(int a, int b, int (*op)(int, int)) {
    printf("%d\n", op(a, b));
}

int main() {
  
    // Passing different functions to 'operate'
    calc(10, 5, add);
  
  	calc(10, 5, subtract);

    return 0;
}
