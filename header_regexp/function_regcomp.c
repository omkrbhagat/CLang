#include <stdio.h>
#include <regex.h>

int main() {
    regex_t regexp;
    int value = regcomp(&regexp, "[:lower:]", 0);
    if(value == 0) {
        printf("Compiled successfully");
    }else {
        perror("Error: ");
    }
}