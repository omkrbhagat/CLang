#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *link;
};

void printList(struct Node *head) {
	while(head != NULL) {
		printf("Data: %d\n", head->data);
		head = head->link;
	}
}

void begin(struct Node **head, int data) {
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->link = NULL;
	
	if(*head == NULL) {
		*head = newNode;
	}
	
	newNode->link = *head;
	*head = newNode;
}

void append(struct Node *head, int data) {
		struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
		newNode->data = data;
		newNode->link = NULL;
		
		struct Node *ptr = head;
		while(ptr->link != NULL) {
			ptr = ptr->link;
		}
		
		ptr->link = newNode;
}

void insertAt(struct Node **head, int data, int pos) {
		struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
		newNode->data = data;
		newNode->link = NULL;
		
		if(pos == 1) {
			newNode->link = *head;
			*head = newNode;
			// this return syntax is only for void function
			return;
		}
		
		struct Node *ptr = *head;
		for(int i = 1; i < pos-1; i++) {
			ptr = ptr->link;
		}
		
		newNode->link = ptr->link;
		ptr->link = newNode;
}	

int main() {
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	head->data = 10;
	head->link = NULL;
	
	begin(&head, 20);
	append(head, 30);
	insertAt(&head, 2, 1);
	
	printList(head);
	
	return 0;
}