#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *link;
};

void insertAtEnd(struct Node *head, int data) {
	struct Node *ptr = head;
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->link = NULL;
	while(ptr->link != NULL) {
		ptr = ptr->link;
	}
	ptr->link = node;
}

void printLinkedList(struct Node *head) {
	struct Node *ptr = head;
	while(ptr != NULL) {
		printf("Data: %d\n", ptr->data);
		ptr = ptr->link;
	}
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
	
	insertAtEnd(head, 40);
	printLinkedList(head);
	
	return 0;
}