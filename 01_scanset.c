#include <stdio.h>

/*
   scanf family functions support scanset
   specifiers which are represented by %[].
   Inside scanset, we can specify single
   character or range of characters. While
   processing scanset, scanf will process
   only those characters which are part of
   scanset. We can define scanset by putting
   characters inside square brackets. Please
   note that the scansets are case-sensitive.
   
   We can also use scanset by providing comma
   in between the character you want to add.
*/

int main(void) {
    char str[128];
    printf("Enter a string: ");
    //scanf("%[A-Z]s", str);
    scanf("%[O,m]s", str);
    printf("You entered: %s\n", str);
    return 0;
}