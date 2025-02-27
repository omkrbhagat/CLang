#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <dirent.h>

int main() {
    char str[100], cwd[PATH_MAX];
    FILE *fptr;
    
    // #ifdef _POSIX_VERSION
    #ifdef __ANDROID__
    if((chdir("/storage/emulated/0/Documents/")) != 0) {
        perror("\x1b[1;31mError: \x1b[0;0m");
    }
    #elif _WIN32
    if((chdir("\\%USERPROFILE%\\src\\c\\")) != 0) {
        perror("\x1b[1;31mError: \x1b[0;0m");
    }
    #elif __linux__
    if((chdir("$HOME/src/c/")) != 0) {
        perror("\x1b[1;31mError: \x1b[0;0m");
    }
    #endif
    
    getcwd(cwd, PATH_MAX);
    printf("\x1b[1;32mPWD: \x1b[0;0m%s\n", cwd);
    printf("Enter Content: ");
    
    fgets(str, sizeof(str), stdin);
    printf("Creating a File...\n");
    
    sleep(8);
    if((fptr = fopen("fileName.txt", "w+")) == NULL) {
        perror("Error: ");
    }
    fclose(fptr);
    printf("Renaming a File...\n");
    
    sleep(5);
    rename("fileName.txt", "file.txt");
    printf("Appending the Content...\n");
    
    sleep(5);
    if((fptr = fopen("file.txt", "a")) == NULL) {
        perror("Error: ");
    }
    
    int flag = fwrite(str, 1, strlen(str), fptr);
    fclose(fptr);
    printf("Deleting a File...\n");
    
    sleep(5);
    remove("file.txt");
    printf("Wrote %d characters\n\n", flag);
    printf("\x1b[1;95mContent: \x1b[0;0m");
    
    struct dirent *entry;
    DIR *dir = opendir(".");
    if(dir == NULL) {
        perror("Error: ");
    }
    
    while((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }
    
    if((closedir(dir)) != 0) {
        perror("Error: ");
    }
}