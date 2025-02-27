#include <stdio.h>

// print 1 to 3 using recursion
void reverse(int x) {
	if(x == 0) {
		return;
	}else {
		printf("Data: %d\n", x);
		reverse(x-1);
	}
}

// print 3 to 1 using recursion
void sequential(int x) {
	if(x == 0) {
		return;
	}else {
		sequential(x-1);
		printf("Data: %d\n", x);
	}
}

int main() {
	reverse(3);
	sequential(3);
	return 0;
}