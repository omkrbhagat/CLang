#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    char cwd[PATH_MAX];
    if((chdir("/storage/emulated/0/Documents/")) != 0) {
        perror("Error: ");
    }
    
    getcwd(cwd, PATH_MAX);
    printf("PWD: %s\n", cwd);
    
    sleep(5);
    // modes for mkdir() is defined in
    // sys/stat.h
    mkdir("SAMPLE", S_IRUSR | S_IWUSR | S_IXUSR);
}