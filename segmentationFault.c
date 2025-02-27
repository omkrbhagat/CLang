#include <stdio.h>

int main(int argc, char *argv[]) {
    int *ptr;
    /* Random unknown memory location is been
    allocated. These should never be done.*/
    // Segmentation fault
    *ptr = 12;
}