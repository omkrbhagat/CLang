#include <stdio.h>

int main() {
    char str[20];
    printf("Enter something: ");
    /*
        scanf leaves the newline character
        in the input buffer after reading some
        data. This cause problems when you use
        scanf() again to read another input. To avoid
        this, you can either use a space before the
        %c or %s conversion specified, or use
        scanf("%*[^\n]"); to clear the input buffer.
    */
    scanf("%[^\n]s", str);
    printf("You type : %s", str);
    return 0;
}