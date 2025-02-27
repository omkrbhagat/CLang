#include <stdio.h>
#include <unistd.h>

int main() {
   char cwd[100];
   getcwd(cwd, sizeof(cwd));
   printf("%s\n", cwd);
}