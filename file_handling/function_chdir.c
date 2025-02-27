#include <stdio.h>
#include <unistd.h>

int main() {
   char cwd[100];
   
   chdir("/storage/emulated/0/Documents/");
   
   getcwd(cwd, sizeof(cwd));
   printf("%s\n", cwd);
}