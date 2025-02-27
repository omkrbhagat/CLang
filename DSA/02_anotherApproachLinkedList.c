#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *link;
};

int main() {
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	head->data = 1;
	head->link = NULL;
	
	struct Node *current = (struct Node*)malloc(sizeof(struct Node));
	current->data = 2;
	current->link = NULL;
	head->link = current;
	
	current = (struct Node*)malloc(sizeof(struct Node));
	current->data = 3;
	current->link = NULL;
	
	head->link->link = current;
	
	return 0;
}