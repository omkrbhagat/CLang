#include <stdio.h>
#include <stdlib.h>

// Node structure to represent a node of the linked list.
struct Node {
    int data;
    struct Node* next;
};

// Linked list structure to implement a linked list.
struct LinkedList {
    struct Node* head;
};

// Function to delete the node at a given position.
void deleteNode(struct LinkedList* list, int nodeOffset) {
    struct Node *temp1 = list->head, *temp2 = NULL;
    int ListLen = 0;

    if (list->head == NULL) {
        printf("List empty.\n");
        return;
    }

    // Find the length of the linked list.
    while (temp1 != NULL) {
        temp1 = temp1->next;
        ListLen++;
    }

    // Check if the position to be deleted is greater than the length of the linked list.
    if (ListLen < nodeOffset) {
        printf("Index out of range\n");
        return;
    }

    temp1 = list->head;

    // Deleting the head.
    if (nodeOffset == 1) {
        // Update the head
        list->head = list->head->next;
        free(temp1);
        return;
    }

    // Traverse the list to find the node to be deleted.
    while (nodeOffset-- > 1) {
        // Update temp2
        temp2 = temp1;

        // Update temp1
        temp1 = temp1->next;
    }

    // Change the next pointer of the previous node.
    temp2->next = temp1->next;

    // Delete the node
    free(temp1);
}

// Function to insert a new node.
void insertNode(struct LinkedList* list, int data) {
    // Create the new Node.
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // Assign to head
    if (list->head == NULL) {
        list->head = newNode;
        return;
    }

    // Traverse till end of list
    struct Node* temp = list->head;
    while (temp->next != NULL) {
        // Update temp
        temp = temp->next;
    }

    // Insert at the last.
    temp->next = newNode;
}

// Function to print the nodes of the linked list.
void printList(struct LinkedList* list) {
    struct Node* temp = list->head;

    // Check for empty list.
    if (list->head == NULL) {
        printf("List empty\n");
        return;
    }

    // Traverse the list.
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct LinkedList list;
    list.head = NULL;

    // Inserting nodes
    insertNode(&list, 1);
    insertNode(&list, 2);
    insertNode(&list, 3);
    insertNode(&list, 4);

    printf("Elements of the list are: ");
  	
    printList(&list);
    printf("\n");
  
    deleteNode(&list, 2);
  	
    printf("Elements of the list are: ");
    printList(&list);
	return 0;
}
