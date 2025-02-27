#include <stdio.h>
 
 /*
    If first character of scanset is ‘^’,
    then the specifier will stop reading
    after first occurrence of that character.
 */
 
int main(void) {
    char str[128];
    printf("Enter a string: ");
    scanf("%[^o]s", str);
    printf("You entered: %s\n", str);
    return 0;
}