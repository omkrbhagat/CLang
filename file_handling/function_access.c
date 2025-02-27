#include <stdio.h>
#include <unistd.h>

int main() {
    if((chdir("/storage/emulated/0/Documents/")) != 0) {
        perror("Error: ");
    }
    
    char cwd[PATH_MAX];
    getcwd(cwd, PATH_MAX);
    printf("PWD: %s\n", cwd);
    
    /*
        if file exists, access returns 0,
        else return -1.
    */
    
    int res = access("JSON.json", F_OK);
    printf("Result: %d\n", res);
}