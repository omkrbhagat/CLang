#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
 
// Allocates a new node with given data
struct Node *newNode(int data) {
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
// Function to insert a new node at the
// end of linked list using recursion.
struct Node* insertEnd(struct Node* head, int data) {
    // If linked list is empty, create a
    // new node (Assuming newNode() allocates
    // a new node with given data)
    if (head == NULL)
         return newNode(data);
 
    // If we have not reached end, keep traversing
    // recursively.
    else
        head->next = insertEnd(head->next, data);
    return head;
}
 
void traverse(struct Node* head) {
    if (head == NULL)
       return;
     
    // If head is not NULL, print current node
    // and recur for remaining list  
    printf("%d ", head->data);
 
    traverse(head->next);
}
 
// Driver code
int main() {
    struct Node* head = NULL;
    head = insertEnd(head, 6);
    head = insertEnd(head, 8);
    head = insertEnd(head, 10);
    head = insertEnd(head, 12);
    head = insertEnd(head, 14);
    traverse(head);
}
