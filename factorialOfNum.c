#include <stdio.h>

int main() {
    int n;
    printf("\x1b[3;36mEnter a number : \x1b[0;0m");
    scanf("%d", &n);
    
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }
    
    printf("%d\n", fact);
}