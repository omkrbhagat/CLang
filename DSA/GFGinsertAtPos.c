#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int size = 0;

struct Node* getNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertPos(struct Node** current, int pos, int data) {
    if (pos < 1 || pos > size + 1) {
        printf("Invalid position!\n");
    }
    else {
        while (pos--) {
            if (pos == 0) {
                struct Node* temp = getNode(data);
                temp->next = *current;
                *current = temp;
            }
            else {
                current = &(*current)->next;
            }
        }
        size++;
    }
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    head = getNode(3);
    head->next = getNode(5);
    head->next->next = getNode(8);
    head->next->next->next = getNode(10);
    
    size = 4;
    printf("Linked list before insertion: ");
    printList(head);
    
    int data = 12, pos = 3;
    insertPos(&head, pos, data);
    printf("Linked list after insertion of 12 at position 3: ");
    printList(head);
    
    data = 1, pos = 1;
    insertPos(&head, pos, data);
    printf("Linked list after insertion of 1 at position 1: ");
    printList(head);
    
    data = 15, pos = 7;
    insertPos(&head, pos, data);
    printf("Linked list after insertion of 15 at position 7: ");
    printList(head);
    
    return 0;
}
