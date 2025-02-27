#include <stdio.h>

int binarySearch(int *arr, int size, int element) {
	int start, mid, end;
	start = 0;
	end = size-1;
	
	while(start <= end) {
		mid = (start+end)/2;
		if(arr[mid] == element) {
			return mid;
		}
		
		if(arr[mid] < element) {
			start = mid + 1;
		}else {
			end = mid - 1;
		}
	}
	
	return -1;
}

int main() {
	int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
	int size = sizeof(arr)/sizeof(arr[0]);
	int element = 12;
	
	int result = binarySearch(arr, size, element);
	printf("Element %d was found at %d", element, result);
	return 0;
}