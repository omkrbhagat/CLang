#include <stdio.h>

void printArr(int *arr, int size) {
	printf("[%d, ", arr[0]);
	for(int i = 1; i < size; i++) {
		if(i == size-1) {
			printf("%d]", arr[i]);
			break;
		}
		printf("%d, ", arr[i]);
	}
}

void insertAtBeginning(int *arr, int *size, int element) {
	for(int i = *size; i > 0; i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = element;
	*(size)++;
}

int main(int argc, char *argv[]) {
	int arr[6] = {2, 4, 6, 8, 10};
	int element = 12;
	int size = sizeof(arr)/sizeof(arr[0]);
	
	insertAtBeginning(arr, &size, element);
	printArr(arr, size);
	
	return 0;
}