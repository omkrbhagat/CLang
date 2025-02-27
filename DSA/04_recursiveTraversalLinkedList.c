#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *link;
};

void printLinkedList(struct Node *head) {
	if(head == NULL) {
		return;
	}
	printf("Data: %d\n", head->data);
	head = head->link;
	// traversing using recursion
	printLinkedList(head);
}

int main() {
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	head->data = 10;
	head->link = NULL;
	
	struct Node *current = (struct Node*)malloc(sizeof(struct Node));
	current->data = 20;
	current->link = NULL;
	head->link = current;
	
	current = (struct Node*)malloc(sizeof(struct Node));
	current->data = 30;
	current->link = NULL;
	
	head->link->link = current;
	
	printLinkedList(head);
	
	return 0;
}