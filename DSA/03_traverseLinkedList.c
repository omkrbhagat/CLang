#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void traverseLinkedList(struct Node *head) {
	struct Node *ptr = head;
	while(ptr != NULL) {
		printf("Data: %d\n", ptr->data);
		ptr = ptr->next;
	}
}

int main() {
	// create the first node
	struct Node *head = NULL;
	struct Node *first = (struct Node*)malloc(sizeof(struct Node));
	first->data = 1;
	
	// create the second node
	struct Node *second = (struct Node*)malloc(sizeof(struct Node));
	second->data = 2;
	first->next = second;
	
	// create the third node
	struct Node *third = (struct Node*)malloc(sizeof(struct Node));
	third->data = 3;
	second->next = third;
	
	// set the next of the third node to NULL
	third->next = NULL;
	
	// make head point to the first node
	head = first;
	
	// print the linked list (optional)
	//struct Node *current = head;
//	while(current != NULL) {
//		printf("Data: %d\n", current->data);
//		current = current->next;
//	}
	
	traverseLinkedList(head);
	
	return 0;
}