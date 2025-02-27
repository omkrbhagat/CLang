#include <stdio.h>
#include <unistd.h>

// call by reference
void swap(int *var_1, int *var_2) {
	int temp = *var_1;
	*var_1 = *var_2;
	*var_2 = temp;
}

// Driver code
int main() {
    int var_1, var_2;
    printf("\x1b[1;32mEnter var_1 : \x1b[0;0m");
    scanf("%d", &var_1);
    printf("\x1b[1;32mEnter var_2 : \x1b[0;0m");
    scanf("%d", &var_2);
    
    printf("\x1b[1;31m\nBefore Swap :\x1b[0;0m\n");
    printf("var_1 : %d and var_2 : %d\n", var_1, var_2);
    
    swap(&var_1, &var_2);
    sleep(2);
    
    printf("\x1b[1;31m\nAfter Swap :\x1b[0;0m\n");
    printf("var_1 : %d and var_2 : %d", var_1, var_2);
    return 0;
}