// Include the necessary header files
#include <stdio.h>
#include <stdlib.h>

// Define the node structure and the functions outside the main function
struct node {
    int data; // The data stored in the node
    struct node *next; // The pointer to the next node
};

// Create a new node with the given data and return its pointer
struct node *create_node(int data) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the new node
    new_node->data = data; // Set the data
    new_node->next = NULL; // Set the next pointer to NULL
    return new_node; // Return the new node pointer
}

// Add a new node with the given data at the end of the linked list and return the head pointer
struct node *add_node(struct node *head, int data) {
    struct node *new_node = create_node(data); // Create a new node with the data
    if (head == NULL) { // If the list is empty
        head = new_node; // Set the head to the new node
    } else { // If the list is not empty
        struct node *current = head; // Create a pointer to traverse the list
        while (current->next != NULL) { // Loop until the last node
            current = current->next; // Move to the next node
        }
        current->next = new_node; // Set the next pointer of the last node to the new node
    }
    return head; // Return the head pointer
}

// Delete the first node with the given data from the linked list and return the head pointer
struct node *delete_node(struct node *head, int data) {
    if (head == NULL) { // If the list is empty
        return NULL; // Return NULL
    } else if (head->data == data) { // If the head node has the data
        struct node *temp = head; // Create a temporary pointer to the head node
        head = head->next; // Set the head to the next node
        free(temp); // Free the memory of the deleted node
        return head; // Return the head pointer
    } else { // If the head node does not have the data
        struct node *current = head; // Create a pointer to traverse the list
        struct node *previous = NULL; // Create a pointer to store the previous node
        while (current != NULL && current->data != data) { // Loop until the node with the data or the end of the list
            previous = current; // Update the previous node
            current = current->next; // Move to the next node
        }
        if (current != NULL) { // If the node with the data is found
            previous->next = current->next; // Set the next pointer of the previous node to the next node
            free(current); // Free the memory of the deleted node
        }
        return head; // Return the head pointer
    }
}

// Find the first node with the given data from the linked list and return its pointer
struct node *find_node(struct node *head, int data) {
    struct node *current = head; // Create a pointer to traverse the list
    while (current != NULL) { // Loop until the end of the list
        if (current->data == data) { // If the current node has the data
            return current; // Return the current node pointer
        }
        current = current->next; // Move to the next node
    }
    return NULL; // Return NULL if the data is not found
}

// The main function
int main() {
    struct node *head = NULL; // Create a pointer to the head of the list
    head = add_node(head, 10); // Add a node with data 10
    head = add_node(head, 20); // Add a node with data 20
    head = add_node(head, 30); // Add a node with data 30
    head = delete_node(head, 20); // Delete the node with data 20
    struct node *found = find_node(head, 30); // Find the node with data 30
    if (found != NULL) { // If the node is found
        printf("The node with data 30 is found.\n"); // Print a message
    } else { // If the node is not found
        printf("The node with data 30 is not found.\n"); // Print a message
    }
    struct node *current = head; // Create a pointer to traverse the list
    while (current != NULL) { // Loop until the end of the list
        printf("%d ", current->data); // Print the data of the current node
        current = current->next; // Move to the next node
    }
    printf("\n"); // Print a new line
    return 0; // Return 0 to indicate a successful execution
}
