#include <stdio.h>

int main() {
	printf("How many elements you want to store?\n");
	int n, i, x;
	int num[n];
	scanf("%d", &n);
	
	printf("Enter %d elements:\n", n);
	for(i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	
	printf("Which element you want to search?\n");
	scanf("%d", &x);
	
	for(i = 0; i < n; i++) {
		if(num[i] == x) {
			printf("Element %d is at %d\n", x, i+1);
			break;
		}
	}
	
	if(i == n)
		printf("Element not found\n");
}