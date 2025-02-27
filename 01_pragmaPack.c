#include <stdio.h>
#pragma pack(1)

/*
	We can avoid the wastage of memory
	by simply writing #pragma pack(1).
	#pragma is a special purpose directive
	used go turn on or off certain features.
*/

struct abc {
	char a;
	int b;
	char c;
}var;

int main() {
	printf("Print: %d\n", sizeof(var));
	return 0;
}