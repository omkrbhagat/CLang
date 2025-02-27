#include <stdio.h>
#include <ctype.h>

int main() {
    
    /*
      Syntax: int tolower(int ch);
    */
    
    int ch_1 = 97; // a
    int res_1 = toupper(ch_1); // 65
    printf("Char: %c\n", res_1);
    // returns the corresponding character
    printf("Result: %d\n\n", res_1);
    
    int ch_2 = 90; // Z
    int res_2 = tolower(ch_2); // 122
    printf("Char: %c\n", res_2);
    printf("Result: %d\n", res_2);
    printf("Char: %c\n", 122);
}