#include <stdio.h>
#include <unistd.h>

void faint(int code) {
    printf("\033[0;%dmHello, World !\033[0;0m\n", code);
}

void dark(int code) {
    printf("\033[0;%dmHello, World !\033[0;0m\n", code);
}

int main() {
    for(int i=31; i<=36; i++) {
        faint(i);
    }
    
    for(int i=91; i<=96; i++) {
        dark(i);
    }
}
