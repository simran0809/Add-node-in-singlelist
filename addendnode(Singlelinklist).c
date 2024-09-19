#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Function prototype declaration
void add_at_end(struct node *head, int data);


int main() {
    // First, create the head of the linked list
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;  // Initial data for the head node
    head->link = NULL;

    // Add a new node with data 67 at the end
    add_at_end(head, 67);

    // Add another node to test the functionality
    add_at_end(head, 100);

    // Print the linked list to verify the results
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}

// Function to add a node at the end of the linked list
void add_at_end(struct node *head, int data) {
    struct node *ptr, *temp;
    ptr = head;

    // Create a new node at end need to be insetered .
    
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    // Traverse to the end of the list
    
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }

    // Link the new node at the end of the list
     
    ptr->link = temp;
}
