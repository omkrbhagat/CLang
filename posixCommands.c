#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char cwd[PATH_MAX];
    chdir("C:\\Users\\onkar\\Downloads\\");
    getcwd(cwd, PATH_MAX);
    printf("pwd: %s\n", cwd);

    int rc;
    rc = system("date | tee result.log");

    //system("ls");
    //system("logname");
    //system("whoami");
    //system("uname");
    //system("dirname /storage/emulated/0/Documents/");
    //system("basename /storage/emulated/0/Documents/a.out");
    //system("mkdir Omkar");
    //system("touch file.txt");
    //system("echo \"Omkar Bhagat\" > file.txt");
    //system("echo $PWD");
    //system("rmdir Omkar");
    //system("ps");
    //system("alias");
    //system("cd /storage/emulated/0/Documents/");
    //system("/mnt/installer/0/Android/data/");
    //system("df");
    //system("du");
    //system("env");
    //system("sed");

    exit(0);

}