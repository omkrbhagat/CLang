#include <stdio.h>
#include <unistd.h>
// strerror() in string.h
#include <string.h>
#include <errno.h>
// mkdir() in sys/stat.h
#include <sys/stat.h>

int main() {
    extern int errno;
    
    chdir("/storage/emulated/0/Documents/");
    fprintf(stderr, "errno before: %d\n", errno);
    fprintf(stderr, "Error: %s\n", strerror(errno));
    
    mkdir("ONE", 777);
    if(errno == EEXIST) {
        mkdir("TWO", 777);
    }
    
    fprintf(stderr, "errno after: %d\n", errno);
    fprintf(stderr, "Error: %s\n", strerror(errno));
}