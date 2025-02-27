#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Omkar Bhagat";
    char str2[] = {'O', 'm', 'k', 'a', 'r', ' ', 'B', 'h', 'a', 'g', 'a', 't'};
    // using the %zu format specifier to print size_t
    printf("length of \"%s\" is : %zu\n", str1, strlen(str1));
    printf("length of \"%s\" is : %zu\n", str2, strlen(str2));
    return 0;
}