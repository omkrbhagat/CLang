#include <stdio.h>
#pragma startup init

void __attribute__((constructor)) init() {
	printf("Inside init() function\n");
}

int main(int argc, char *argv[]) {
	printf("Inside main() function\n");
	init();
	return 0;
}


//void init() {
//	printf("Inside init() function\n");
//}