#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *pathvar;
    pathvar = getenv("HOME");
    
    printf("%s\n", pathvar);
}