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

/*
struct Node *popStart(struct Node *head) {	
	if(head == NULL) {
		return NULL;
	}else {
		struct Node *del = head;
		head = head->link;
		free(del);
		return head;
	}
}
*/

void popStart(struct Node **head) {	
	if(*head == NULL) {
		return;
	}else {
		struct Node *del = *head;
		*head = (*head)->link;
		free(del);
	}
}

int main() {
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	head->data = 10;
	head->link = NULL;
	
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 20;
	newNode->link = NULL;
	head->link = newNode;
	
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 30;
	newNode->link = NULL;
	
	head->link->link = newNode;
	
	// head = pop(head);
	popStart(&head);
	printList(head);
	
	return 0;
}