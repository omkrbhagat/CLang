#include <stdio.h>

int main() {
    int n, i, count = 0;
    printf("\x1b[1;32mEnter any number: \x1b[0;0m");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;
        }
    }

    if(count == 2) {
        printf("Entered number is Prime");
    }else {
        printf("Entered number is not Prime");
    }
}