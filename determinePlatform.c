#include <stdio.h>

int main() {
    #ifdef __FreeBSD__
    printf("Welcome to FreeBSD");
    #elif __APPLE__
    printf("Welcome to iOS");
    #elif __MACH__
    printf("Welcome to MacOS");
    #elif _WIN32
    printf("Welcome to Windows");
    #elif __ANDROID__
    printf("Welcome to ANDROID");
    #elif _POSIX_VERSION
    printf("Welcome to POSIX");
    #elif __linux__
    printf("Welcome to Linux");
    #endif
    return 0;
}