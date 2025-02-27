#include <stdio.h>
#include <string.h>

typedef struct Person {
	char name[50];
	int age;
}man_t;

int main(int argc, char *argv[]) {
	man_t omkr, *ptr;
	ptr = &omkr;
	omkr.age = 22;
	strcpy(omkr.name, "Omkar Bhagat");
	
	printf("Name: %s\n", omkr.name);
	printf("Age: %d\n", omkr.age);
	
	//man_t *ptr = &omkr;
	printf("Name: %s\n", ptr->name);
}