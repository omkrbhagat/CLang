#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Omkar Bhagat";
    char str2[] = {'O', 'm', 'k', 'a', 'r', ' ', 'B', 'h', 'a', 'g', 'a', 't'};
    char str3[] = {'O', 'm', 'k', 'a', 'r', ' ', 'B', 'h', 'a', 'g', 'a', 't', '\0'};
    
    // using the %zu format specifier to print size_t
    printf("strlen of \"%s\" is : %zu\n", str1, strlen(str1));
    printf("strlen of \"%s\" without terminator is : %zu\n", str2, strlen(str2));
    printf("strlen of \"%s\" with terminator is : %zu\n\n", str3, strlen(str3));
    
    printf("sizeof \"%s\" is : %d\n", str1, sizeof(str1));
    printf("sizeof \"%s\" without terminator is : %d\n", str2, sizeof(str2));
    printf("sizeof \"%s\" with terminator is : %d\n", str3, sizeof(str3));
    return 0;
}