#include <stdio.h>
#include <stdarg.h>

int fun(int count, ...) {
    int sum = 0;
    va_list args;
    va_start(args, count);
    
    for(int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    
    va_end(args);
    return sum;
}

int main() {
    printf("Sum is : %d\n", fun(2, 6, 4));
}