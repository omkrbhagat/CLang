#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    chdir("/storage/emulated/0/Documents/");
    
    struct stat info;
    if((stat("TP", &info)) == 0) {
        if(S_ISREG(info.st_mode)) {
            printf("Content is a file\n");
        }else if(S_ISDIR(info.st_mode)) {
            printf("Content is a folder\n");
        }
    }
}