/*
Author: Omkar Bhagat
Date: 02 Feb 2025 3:03 pm
*/

#include <stdio.h>

/*
	In C, arrays are always passed to function as
	pointers. They cannot be passed by value because
	of the array decay due to which, whenever array
	is passed to a function, it decays into a pointer
	to its first element. However, there can be
	different syntax of passing the arrays as pointers.
*/

/*
	The easiest way to pass array to a function is by
	defining the parameter as the undefined sized array.
	It is recommended to pass the size of the array to
	the function as another parameter.
*/

void printArr(int arr[], int n) {
	printf("Size: %d\n", n);
	for(int i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
}

/*
	We can also define the size of the array while
	passing it to the function. But it still will be
	treated as pointer in the function.
	
	void printArr(int arr[i], int n);
*/

/*
	Instead of using array notation in the function
	parameter, we can directly use pointer notation.
	This method is more flexible when working with
	dynamically allocated arrays.
	
	void printArr(int *arr, int n);
*/

// Driver program
int main() {
	int array[] = {1, 2, 3, 4, 5};
	printArr(array, 5);
}