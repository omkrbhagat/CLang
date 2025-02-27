#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void traverseLinkedList(struct Node *head) {
	struct Node *ptr = head;
	while(ptr !=  NULL) {
		printf("Element: %d\n", ptr->data);
		ptr = ptr->next;
	}
}

/*
	Why `struct Node **head` (Pointer to a pointer)?
	In C, when you pass an argument to a function, it's passed
	by value. This means a copy of the variable is created & used within
	the function. If you modify this copy, the original variable outside the function
	remains unchanged.
	
	In the case of a linked list, the head pointer holds the address of the first node.
	If you pass `struct Node *head` to `begin` function, you're passing a copy of the
	head pointer. Inside the function, you might create a new node & change where the
	copy of head points, but the original head in your main function still point to the
	old location (or NULL if it was initially empty).
	
	To actually change the original head pointer in main, you need to pass its address.
	That's where the pointer to a pointer (struct Node **head) comes in.
	head is now a pointer that stores the address of the head pointer in main.
*/

/*
	method where you return the new head of the list from the `begin` function, and then
	update the head pointer in your main function. This is a common & correct way to handle
	insertions at the beginning of a linked list in C without double pointers.
	
	Explanation:
	1) begin returns the new `head`: instead of modifying the head pointer directly (which
	wouldn't work due to pass-by-value), this version of `begin` returns the address of the
	newly created node, which is now the new head of the list.
	2) main updates its head: In main, you assign the returned value of `begin` back to your
	head pointer. This is the crucial step.
	
	Comparison to double pointers:
	• Double pointers(**head): used when you want the function to directly modify the original
	head pointer in main (by passing its address).
	• Returning the new head: used when you want the function to return the new head, and main is
	responsible for updating its own head pointer with this returned value.
*/

struct Node *begin(struct Node *head, int data) {
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = head;
	head = ptr;
	return head;
}

void insertAtBegin(struct Node **head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = *head;
    *head = ptr;
}

int main() {
	struct Node *head = NULL;
	struct Node *first = (struct Node *)malloc(sizeof(struct Node));
	first->data = 1;
	
	struct Node *second = (struct Node *)malloc(sizeof(struct Node));
	second->data = 2;
	first->next = second;
	
	struct Node *third = (struct Node *)malloc(sizeof(struct Node));
	third->data = 3;
	second->next = third;
	third->next = NULL;
	
	head = first;
	
	traverseLinkedList(head);
	
	head = begin(head, 5);
	
	// insertAtBegin(&head, 4);
	printf("After Updation\n");
	
	traverseLinkedList(head);
	
	return 0;
}