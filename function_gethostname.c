#include <stdio.h>
#include <unistd.h>

int main() {
    int hostname;
    char name[256];
    hostname = gethostname(name, sizeof(name));
    printf("HostName : %s\n", name);
    printf("Return Value : %d", hostname);
}