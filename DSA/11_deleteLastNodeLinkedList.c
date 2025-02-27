#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void printList(struct Node *head) {
	if(head == NULL) {
		printf("[]");
	}
	while(head != NULL) {
		printf("Data: %d\n", head->data);
		head = head->next;
	}
}

void popEnd(struct Node **head) {
	struct Node *temp = *head;
	struct Node *last = *head;
	
	if(*head == NULL) {
		return;
	}else if((*head)->next == NULL) {
		free(*head);
		*head = NULL;
	}
	
	while(temp->next != NULL) {
		last = temp;
		temp = temp->next;
	}
	last->next = NULL;
	free(temp);
	temp = NULL;
}
	

int main() {
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	head->data = 10;
	head->next = NULL;
	
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 20;
	newNode->next = NULL;
	head->next = newNode;
	
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 30;
	newNode->next = NULL;
	head->next->next = newNode;
	
	popEnd(&head);
	popEnd(&head);
	popEnd(&head);
	printList(head);
	
	return 0;
}