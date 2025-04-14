#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at end
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Function to display the list
void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to search for an element
void search(struct Node* head, int key) {
    struct Node* temp = head;
    int pos = 0;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element %d found at position %d\n", key, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element %d not found in the list\n", key);
}

// Function to delete a node by value
struct Node* deleteByValue(struct Node* head, int value) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        printf("Deleted %d from the list.\n", value);
        return head;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in the list.\n", value);
        return head;
    }

    prev->next = temp->next;
    free(temp);
    printf("Deleted %d from the list.\n", value);
    return head;
}

// Count nodes in the list
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Reverse the list
struct Node* reverseList(struct Node* head) {
    struct Node *prev = NULL, *current = head, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

// Main function with menu
int main() {
    struct Node* head = NULL;
    int choice, value;

    // Predefined list: 10 -> 20 -> 30
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    do {
        printf("\n\n*** Linked List Menu ***\n");
        printf("1. Display List\n");
        printf("2. Insert at End\n");
        printf("3. Search an Element\n");
        printf("4. Delete an Element\n");
        printf("5. Count Nodes\n");
        printf("6. Reverse List\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            displayList(head);
            break;
        case 2:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            head = insertEnd(head, value);
            break;
        case 3:
            printf("Enter value to search: ");
            scanf("%d", &value);
            search(head, value);
            break;
        case 4:
            printf("Enter value to delete: ");
            scanf("%d", &value);
            head = deleteByValue(head, value);
            break;
        case 5:
            printf("Total nodes in the list: %d\n", countNodes(head));
            break;
        case 6:
            head = reverseList(head);
            printf("List reversed.\n");
            break;
        case 7:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 7);

    return 0;
}
