#include <stdio.h>

int main() {
    for(char ch='A'; ch<='Z'; ch++) {
        printf("\x1b[3;37m%c\n\x1b[0;0m", ch);
    }
}