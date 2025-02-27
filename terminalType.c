#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *type = getenv("TERM");
    printf("Terminal type: %s\n", type);
}