#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student {
    char name[50];
    int age;
    char religion[10];
};

int main() {
    struct Student Kevin;
    
    printf("Enter Name: ");
    fgets(Kevin.name, sizeof(Kevin.name), stdin);
    //strcpy(Kevin.name, "Omkar Bhagat");
    //Kevin.age = 22;
    printf("Enter Age: ");
    scanf("%d", &Kevin.age);
    printf("Name: %s", Kevin.name);
    printf("Age: %d\n", Kevin.age);
}