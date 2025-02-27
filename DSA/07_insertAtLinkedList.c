#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *link;
};

void printList(struct Node *head) {
	struct Node *ptr = head;
	while(ptr != NULL) {
		printf("Data: %d\n", ptr->data);
		ptr = ptr->link;
	}
}

void insertAtEnd(struct Node *head, int data) {
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->link = NULL;
	
	struct Node *temp = head;
	while(temp->link != NULL) {
		temp = temp->link;
	}
	
	temp->link = ptr;
}

void insertAt(struct Node **head, int data, int pos) {
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->link = NULL;
	
	struct Node *ptr = *head;
	if(pos == 1) {
		newNode->link = *head;
		*head = newNode;
	}else if(pos > 1) {
		for(int i = 1; i < pos-1; i++) {
			ptr = ptr->link;
		}
		
		newNode->link = ptr->link;
		ptr->link = newNode;
	}
}

int main() {
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	head->data = 10;
	head->link = NULL;
	
	insertAtEnd(head, 20);
	insertAtEnd(head, 30);
	
	insertAt(&head, 2, 2);
	printList(head);
	
	return 0;
}