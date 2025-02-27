#include <stdio.h>
#include <stdlib.h>
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
    }else {
        getcwd(cwd, PATH_MAX);
    }
    
    #elif _WIN32
    char *profile = getenv("USERPROFILE");
    char *path = strcat(profile, "\\Desktop\\src\\c\\");
    if((chdir(path)) != 0) {
        perror("\x1b[1;31mError: \x1b[0;0m");
    }else {
        getcwd(cwd, PATH_MAX);
    }
        
    #elif __linux__
    char *profile = getenv("HOME");
    char *path = strcat(profile, "/Desktop");
    if((chdir(path)) != 0) {
        perror("\x1b[1;31mError: \x1b[0;0m");
    }else {
        getcwd(cwd, PATH_MAX);
    }
    #endif
    
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
    
    // Appending char type of array, that's why
    // passing sizeof(char)
    size_t flag = fwrite(str, sizeof(char), strlen(str), fptr);
    fclose(fptr);
    
    printf("Deleting the content of a file...\n");
    sleep(5);
    if((fptr = fopen("file.txt", "w")) == NULL) {
        perror("Error: ");
    }else {
        truncate("file.txt", 0);
    }
    
    fclose(fptr);
    
    printf("Deleting a File...\n");
    
    sleep(5);
    remove("file.txt");
    printf("Wrote %zu characters\n\n", flag);
    
    struct dirent *entry;
    DIR *dir = opendir(".");
    if(dir == NULL) {
        perror("Error: ");
    }
    
    while((entry = readdir(dir)) != NULL) {
        if(entry->d_type == DT_REG) {
            printf("FILE: %s\n", entry->d_name);
        }
    }
    
    if((closedir(dir)) != 0) {
        perror("Error: ");
    }
}