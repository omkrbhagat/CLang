#include <stdio.h>

int main(int argc, char *argv[]) {
	int age;
	printf("Enter Age: ");
	scanf("%d", &age);
	
	char name[6];
/*
	If the user inputs a string longer than 5
	characters for the `name`, the additional
	characters will overflow the `name` buffer
	& overwrite adjacent memory. This adjacent
	memory can include the memory allocated for
	the `age` variable.
*/
	printf("Enter Name: ");
	scanf("%s", name);
	//scanf("%5s", name);
	
	printf("Age: %d\n", age);
	printf("Name: %s", name);
}