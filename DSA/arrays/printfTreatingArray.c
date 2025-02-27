#include <stdio.h>

/*
	Error: Segmentation fault
	
int main() {
	char arr[] = "omkar";
	printf("Char: %s\n", arr[1] + 2);
*/

int main() {
	char arr[] = "omkar";
	/*
		• arr[1] is 'm'.
		• 'm' has an ASCII value of 109.
		• arr[1] + 2 results in 111, which
		corresponds to 'o' in ASCII.
		• So, it prints 'o'.
	*/
	printf("Char: %c\n", arr[1] + 2);
	/*
		• %s expects a pointer to the
		beginning of a null-terminated string.
		• arr[1] + 2 is equivalent to pointing
		to a memory address offset from the
		location of arr[1].
		• Since arr[1] is 'm', arr[1] + 2 points
		to some memory address not intended for
		your string.
	*/
}