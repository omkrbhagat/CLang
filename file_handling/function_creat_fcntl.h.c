#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    chdir("/storage/emulated/0/Documents/");
    
    int fd = creat("fileName.txt", S_IWUSR);
    
    close(fd);
}