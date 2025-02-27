#include <stdio.h>

int linearSearch(int *arr, int size, int element) {
	for(int i = 0; i < size; i++)
		if(arr[i] == element)
			return i;
	return -1;
}

int main(int argc, char *argv[]) {
	int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
	int size = sizeof(arr)/sizeof(arr[0]);
	int element = 14;
	
	int searchIndex = linearSearch(arr, size, element);
	printf("Element %d was found at %d\n", element, searchIndex);
	
	return 0;
}