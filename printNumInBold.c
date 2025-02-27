#include <stdio.h>

int main() {
    for(int i=1; i<=100; i++) {
        printf("\x1b[1;37m%d\n\x1b[0;0m", i);
    }
}
