#include <stdio.h>

int main() {
    #if defined(__STDC_VERSION__)
        long version = __STDC_VERSION__;
        if (version == 199901L) {
            printf("Compiler supports C99\n");
        } else if (version == 201112L) {
            printf("Compiler supports C11\n");
        } else if (version == 201710L) {
            printf("Compiler supports C18\n");
        }
    #else
        printf("Compiler supports C90\n");
    #endif
    return 0;
}
