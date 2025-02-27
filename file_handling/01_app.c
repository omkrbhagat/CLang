#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <windows.h>

int main() {

    char cwd[MAX_PATH], str[100];
    #ifdef __ANDROID__
    if((chdir("/storage/emulated/0/Documents")) != 0) {
        perror("Error: ");
    }
    #elif _WIN32
    char *profile = getenv("USERPROFILE");
    char *path = strcat(profile, "\\Desktop\\src\\c\\");
    if((chdir(path)) != 0) {
        perror("Error: ");
    }else {
        getcwd(cwd, MAX_PATH);
    }
    #elif __linux__
    char *profile = getenv("USER");
    char *path = strcat(profile, "/Desktop");
    if((chdir(path)) != 0) {
        perror("Error: ");
    }else {
        getcwd(cwd, PATH_MAX);
    }
    #endif

    printf("PWD: %s\n", cwd);
    printf("Enter content: ");
    fgets(str, sizeof(str), stdin);

    FILE *fptr;
    puts("Creating a file...");
    sleep(5);
    if((fptr = fopen("file.txt", "w+")) == NULL) {
        perror("Error: ");
    }
    fclose(fptr);

    puts("Appending the content...");
    sleep(5);
    if((fptr = fopen("file.txt", "w")) == NULL) {
        perror("Error: ");
    }else {
        size_t flag = fwrite(str, sizeof(char), strlen(str), fptr);
    }
    fclose(fptr);

    puts("Renaming a file...");
    sleep(5);
    rename("file.txt", "fileName.txt");

    puts("Reading the content...");
    sleep(5);
    if((fptr = fopen("fileName.txt", "r")) == NULL) {
        perror("Error: ");
    }else {
        char buffer[256];
        fread(buffer, sizeof(char), sizeof(buffer), fptr);
        printf("Content: %s\n", buffer);
    }
    fclose(fptr);

    puts("Deleting the content of a file...");
    sleep(5);
    #ifdef _WIN32
    if((fptr = fopen("fileName.txt", "w")) == NULL) {
        perror("Error: ");
    }else {
        SetEndOfFile(fptr);
    }
    fclose(fptr);
    #elif __linux__ | __ANDROID__ | __MACH__
    truncate("fileName.txt", 0);
    #endif

    puts("Deleting a file...");
    sleep(5);
    remove("fileName.txt");
}
