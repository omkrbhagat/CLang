#include <stdio.h>
#include <unistd.h>
#include <dirent.h>

int main() {
    chdir("/storage/emulated/0/Documents/");
    
    struct dirent *entry;
    
    DIR *dir;
    if((dir = opendir(".")) == NULL) {
        perror("Error: ");
    }
    
    while((entry = readdir(dir)) != NULL) {
        if(entry->d_type == DT_REG) {
            printf("\x1b[1;93mFile: \x1b[0;0m%s\n", entry->d_name);
        }
    }
    
    printf("\n");
    // don't forget to close the dir
    closedir(dir);
    
    if((dir = opendir(".")) == NULL) {
        perror("Error: ");
    }
    
    while((entry = readdir(dir)) != NULL) {
        if(entry->d_type == DT_DIR) {
            printf("\x1b[1;94mDIR: \x1b[0;0m%s\n", entry->d_name);
        }
    }
    // again don't forget to close
    closedir(dir);
}