#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main() {
    #ifdef __ANDROID__
    if((chdir("/storage/emulated/0/Documents/")) != 0) {
        perror("Error: ");
    }
    #elif _WIN32
    if((chdir("/%USERPROFILE%/Documents/")) != 0) {
        perror("Error: ");
    }
    #elif __linux__
    if((chdir("$HOME/Documents/")) != 0) {
        perror("Error: ");
    }
    #endif
    
    char cwd[PATH_MAX];
    getcwd(cwd, PATH_MAX);
    printf("\x1b[1;97mPWD: \x1b[0;0m%s\n", cwd);
    
    char str[100];
    printf("Enter Content: ");
    fgets(str, sizeof(str), stdin);
    
    FILE *fptr;
    printf("Creating a file...\n");
    sleep(5);
    if((fptr = fopen("file.txt", "w+")) == NULL) {
        perror("Error: ");
    }
    fclose(fptr);
}