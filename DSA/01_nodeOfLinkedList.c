#include <stdio.h>
#include <stdlib.h>

/*
	There are different approaches to
	initializing Linked List in C.
	
	Method 1 is simpler for a single-node
	list but less flexible for larger lists.
	Method 2 is generally preferred as it provides
	a more structured & scalable approach to building
	linked lists.
*/

struct Node {
	int data;
	struct Node *next;
};

/*
	// Method 1: Initialize data directly in head
	struct Node *head = NULL;
	head = (struct Node*)malloc(sizeof(struct Node));
	head->data = 1;
	head->next = NULL;
	
	printf("Data: %d\n", head->data);
	
	return 0;
	
		Adv: Simple & straightforward for a single-node list.
		Disadv: Less flexible for creating larger lists. You'd
		need to manually allocate & link each subsequent node.
*/

int main() {
	// Method 2: Initialize head to point to the first actual head
	struct Node *head = NULL;
	struct Node *first = (struct Node*)malloc(sizeof(struct Node));
	first->data = 1;
	first->next = NULL;
	
	head = first;
	
	printf("Data: %d\n", first->data);
	
	return 0;
	
	/*
		Adv: More flexible for building larger lists. You can easily
		create new nodes & link them to the existing list by manipulating
		`head` & `next` pointers.
		Aligns better with the common pattern of `head` representing the
		starting point of the list, not necessarily a data-holding
		node itself.
	*/
	
}
