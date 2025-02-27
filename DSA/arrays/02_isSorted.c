#include <stdio.h>

int isSorted(int arr[], int n) {
	if(n == 0 || n == 1) {
		return 1;
	}
	
	for(int i = 1; arr[i-1] > arr[i]; i++) {
		return 0;
	}
	
	return 1;
}

int main() {
	int num[5] = {10, 2, 3, 4, 5};
	int n = sizeof(num)/sizeof(num[0]);
	printf("Ans: %d\n", isSorted(num, n));
	return 0;
}