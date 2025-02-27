#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int main() {
    char cwd[PATH_MAX];
    #ifdef __ANDROID__
    if((chdir("/storage/emulated/0/Documents/")) != 0) {
        perror("Error: ");
    }else {
        getcwd(cwd, PATH_MAX);
    }
    
    #elif _WIN32
    char *profile = getenv("USERPROFILE");
    char *path = strcat(profile, "\\Desktop\\src\\c\\");
    if((chdir(path)) != 0) {
        perror("Error: ");
    }else {
        getcwd(cwd, PATH_MAX);
    }
    
    #elif __linux__
    char *profile = getenv("HOME");
    char *path = strcat(profile, "\Desktop");
    if((chdir(path)) != 0) {
        perror("Error: ");
    }else {
        getcwd(cwd, PATH_MAX);
    }
    #endif
    
    printf("PWD: %s\n", cwd);
    
    FILE *fptr;
    if((fptr = fopen("fileName.txt", "w+")) == NULL) {
        perror("Error: ");
    }else {
        char str[256];
        printf("Enter Content: ");
        fgets(str, sizeof(str), stdin);
        size_t flag = fwrite(str, sizeof(char), strlen(str), fptr);
        printf("Successfully wrote %zu characters\n", flag);
        
        fclose(fptr);
    }
    
    /*
        opening the file in `w+` truncates the file to 0 length.
        therefore, for using `fread`, open the file in `r` mode.
    */
    
    sleep(3);
    if((fptr = fopen("fileName.txt", "r")) == NULL) {
        perror("Error: ");
    }else {
        char content[256];
        fread(content, sizeof(char), sizeof(content), fptr);
        printf("Content: %s\n", content);
        
        fclose(fptr);
    }
    
}