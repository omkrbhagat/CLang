#include <stdio.h>

int main() {
    char fullName[30];
    printf("Enter your fullname : ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Name : %s\n", fullName);
    return 0;
}
    