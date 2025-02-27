#include <stdio.h>

int main() {
    int character;
    printf("Enter any character [A-Z] : ");
    character = getchar();
 
    printf("The entered character is : ");
    putchar(character);
    return 0;
}