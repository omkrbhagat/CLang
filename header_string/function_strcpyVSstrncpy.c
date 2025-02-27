#include <stdio.h>
#include <string.h>
#define SIZE 40

int index = 5;

int main(int argc, char *argv[]) {
    char src_1[SIZE] = "source string";
    char des_1[SIZE] = "destination string";
    
    char src_2[SIZE] = "123456789";
    char des_2[SIZE] = "abcdefg";
    
    strcpy(src_1, des_1);
    printf("src_1 : %s\n", src_1);
    
    //strncpy(src_2, des_2, strlen(src_2));
    strncpy(src_2, des_2, index);
    printf("src_2 : %s\n", src_2);
}