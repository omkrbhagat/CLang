#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char name[30], res;
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Name: %s\n", name);
    printf("Do you want to clear screen ? (Y/n): ");
    scanf("%c", &res);
    if((res == 'Y' || res =='y')) {
        sleep(5);
        //system("clear");
        //clear screen using ASCII Escape Sequence
        printf("\x1b[2J");
        printf("\x1b[H");
    }else if((res == 'N' || res == 'n')) {
        exit(1);
    }
    return 0;
}