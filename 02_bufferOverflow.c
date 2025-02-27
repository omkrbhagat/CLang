#include <stdio.h>

int main(int argc, char *argv[]) {
	char name[5], gender;
	int age;
/*
	So, when we do a `printf`, the characters in the string literal are first
	written to a buffer called the `stdout`. We only see it on the console
	when it's flushed (i.e., clear from the buffer & written to the console)
	when `scanf` is called the program is blocked. Until we press enter,
	everything we type in the console will be written to `stdin` (after
	hitting return including the newline) after which `scanf` starts consuming
	data & as we're using a %s, all characters will be consumed by `scanf` into
	the variable name. But instead of copying a newline into the array, a \0 is
	appended to name for terminating the string. This is internal to `scanf`.
	
	Another problem you could face here would be a buffer overrun if a user
	presses enter after supplying more characters than the variable was
	expecting. Let's say that this didn't happen & the program goes ahead.
*/
	printf("Enter Name: ");
	scanf("%s", name);
/*
	It prints & wait for a number to be put in & again it won't be unblocked
	until we hit return. Doing so, we'll also add a \n into the buffer, but in
	`scanf` call, we say %d, so call the characters in `stdin` will be consumed
	until a character that's not a digit is encountered after which an attempt
	is made to convert the red digits into an integer & store it inside age but
	notice that this time the newline wasn't consumed because of %d.
*/
	printf("Enter Age: ");
	scanf("%d", &age);
/*
	Then we print gender onto the screen & hit the problematic `scanf` statement.
	`scanf` does not always wait. It does when the `stdin` is empty. But as it's
	directly going to read one character from `stdin` and store that inside gender.
*/
	printf("Enter Gender: ");
	scanf("%c", &gender);
	
	printf("%u\n", gender);
	
	printf("%s is a %d year old %s.", name, age, (gender == 'm' || gender == 'M') ? "Male" : "Female");
	
	return 0;
}