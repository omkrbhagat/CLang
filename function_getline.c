#include <stdio.h>

int main() {
    char *buffer = NULL;
    size_t len = 0;
    printf("Enter Content: ");
    getline(&buffer, &len, stdin);
    
    printf("Content: %s\n", buffer);
}