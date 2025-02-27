#include <stdio.h>

int main() {
	/*
		If I explicitly mention the capacity of an
		array, then the capacity will be considered as
		what I have mentioned.
	*/
	int arr[6] = {10, 20, 30, 40};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Size: %d\n", size);
	
	/*
		If I didn't mention the capacity of an array,
		then the capacity will be considered based on
		how many elements I have initialized.
	*/
	int ar[] = {10, 20, 30, 0};
	int n = sizeof(ar)/sizeof(ar[0]);
	printf("Size: %d\n", n);
	return 0;
}