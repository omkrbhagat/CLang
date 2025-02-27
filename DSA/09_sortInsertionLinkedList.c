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

void append(struct Node *head, int data) {
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->link = NULL;
	
	if(head == NULL) {
		head = newNode;
	}
	
	while(head->link != NULL) {
		head = head->link;
	}
	
	head->link = newNode;
}

void sortedInsert(struct Node **head, int data) {
	struct Node *ptr = *head;
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->link = NULL;
	/*
		In C, the -> (arrow) operator has higher precedence than the
		* (dereference) operator. This means that `head->data` is evaluated
		first, and then the result is dereferenced. Without parentheses,
		`*head->data` is interpreted as `*(head->data)`, which means
		"dereference the data member of the node that `head` points to".
		This is not what you want.
		
		By using, parentheses, `(*head)->data` ensures that `head` is first
		dereferenced to get the node it points to, and then the `data` member
		of that node is accessed.
		
		`*head->data` // Interpreted as `*(head->data)`
		(*head)->data // Interpreted as `(*head)->data`
		
		you're explicitly telling the compiler to first dereference `head` to
		access the node, and then access the data member of that node. 
	*/
	if(*head == NULL || (*head)->data >= newNode->data) {
		newNode->link = *head;
		*head = newNode;
	}else {
	/*
		The issue with your code is that the `while` loop doesn't correctly
		handle the insertion case when `ptr->link` is NULL (i.e., when you
		reach the end of the list).
		1) `while` loop condition: The loop `while(ptr->data < newNode->data)`
		doesn't check for the end of the list.
		2) Reaching the end of the list: when you reach the end of the list
		(ptr->link becomes NULL), the loop continues, and ptr moves to NULL.
		
		To fix the issue, you need to add a check for `ptr->link` in the `while`
		loop & handle the special case where the new node should be inserted at
		the `head` or in the middle of the list.
	*/
		while(ptr->link != NULL && ptr->link->data < newNode->data) {
			ptr = ptr->link;
		}
		
		newNode->link = ptr->link;
		ptr->link = newNode;
	}
}

int main() {
	struct Node *head =(struct Node*)malloc(sizeof(struct Node));
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
	
	append(head, 5);
	sortedInsert(&head, 4);
	
	printList(head);
	
	return 0;
}