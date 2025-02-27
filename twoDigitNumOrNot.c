#include <stdio.h>

int main() {
    int x;
    printf("\x1b[1;36mEnter Number : \x1b[0;0m");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);
}    