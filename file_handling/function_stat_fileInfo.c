#include <stdio.h>
#include <unistd.h>
#include <time.h>
// UNIX file and access
#include <sys/stat.h>
#include <sys/types.h>

int main() {
    chdir("/storage/emulated/0/Documents/");
    
    struct stat info;
    
    if((stat("JSON.json", &info)) == 0) {
        printf("\x1b[1;97mInode: \x1b[0;0m%d\n", info.st_ino);
        printf("\x1b[1;97mDev ID: \x1b[0;0m%d\n", info.st_dev);
        printf("\x1b[1;97mMode: \x1b[0;0m%08x\n", info.st_mode);
        printf("\x1b[1;97mLink: \x1b[0;0m%d\n", info.st_nlink);
        printf("\x1b[1;97mUID: \x1b[0;0m%d\n", info.st_uid);
        printf("\x1b[1;97mGID: \x1b[0;0m%d\n", info.st_gid);
        printf("\x1b[1;97mFile Size: \x1b[0;0m%d\n", info.st_size);
        printf("\x1b[1;97mCreated: \x1b[0;0m%s\n", ctime(&info.st_ctime));
    }
}