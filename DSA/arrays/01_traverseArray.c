#include <stdio.h>

void printArr(int *arr, int size) {
	printf("[");
	for(int i = 0; i < size; i++) {
		if(i == size-1) {
			printf("%d]", arr[i]);
			break;
		}
		printf("%d, ", arr[i]);
	}
}

int main(int argc, char *argv[]) {
	int n;
	printf("No. of Elements: ");
	scanf("%d", &n);
	
	int arr[n];
	for(int i = 0; i < n; i++) {
		printf("Enter %d element: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printArr(arr, n);
}