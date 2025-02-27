#include <env.h> // No such file or directory
#include <stdio.h>

extern char **environ;

int count_env() {
    int num;
    for (num = 0; environ[num] != NULL; num++);
    return num;
}

int main() {
    printf("There are %d environment variables", count_env());
}