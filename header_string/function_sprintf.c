#include <stdio.h>

int main(int argc, char *argv[]) {
    char buffer[100];
    int x = 50, y = 30, z;
    z = x + y;
    sprintf(buffer, "Sum of %d & %d is %d", x, y, z);
    
    // The string "sum of 50 & 30 is 80" is stored
    // into buffer instead of printing on stdout.
    
    printf("%s\n", buffer);
}