#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
    time_t now = time(NULL);
    printf("Time : %s\n", ctime(&now));
}