#include <stdio.h>
#include <stdlib.h>

// Node structure for circular linked list
struct Node {
    int data;
    struct Node* next;
};

// Insert at end
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
    return head;
}

// Display circular list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

// Search for element
void search(struct Node* head, int key) {
    if (head == NULL) return;

    struct Node* temp = head;
    int pos = 0;
    do {
        if (temp->data == key) {
            printf("Element %d found at position %d\n", key, pos);
            return;
        }
        temp = temp->next;
        pos++;
    } while (temp != head);

    printf("Element %d not found\n", key);
}

// Delete node by value
struct Node* deleteByValue(struct Node* head, int value) {
    if (head == NULL) return NULL;

    struct Node *curr = head, *prev = NULL;

    do {
        if (curr->data == value)
            break;
        prev = curr;
        curr = curr->next;
    } while (curr != head);

    if (curr->data != value) {
        printf("Value %d not found.\n", value);
        return head;
    }

    // Deleting only node
    if (curr == head && curr->next == head) {
        free(curr);
        return NULL;
    }

    // Deleting head node
    if (curr == head) {
        struct Node* last = head;
        while (last->next != head)
            last = last->next;

        head = head->next;
        last->next = head;
        free(curr);
        return head;
    }

    // Deleting non-head
    prev->next = curr->next;
    free(curr);
    return head;
}

// Count nodes
int countNodes(struct Node* head) {
    if (head == NULL) return 0;

    int count = 0;
    struct Node* temp = head;
    do {
        count++;
        temp = temp->next;
    } while (temp != head);
    return count;
}

// Reverse circular list
struct Node* reverseList(struct Node* head) {
    if (head == NULL || head->next == head)
        return head;

    struct Node *prev = NULL, *current = head, *next = NULL;
    struct Node* last = head;

    do {
        last = last->next;
    } while (last->next != head);

    do {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != head);

    head->next = prev;
    last->next = prev;
    head = prev;
    return head;
}

// Main
int main() {
    struct Node* head = NULL;
    int value, choice;

    // Pre-filled list
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    do {
        printf("\n\n*** Circular Linked List Menu ***\n");
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
            printf("After Insertion:\n");
            displayList(head);
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
            printf("After Deletion:\n");
            displayList(head);
            break;
        case 5:
            printf("Total nodes in the list: %d\n", countNodes(head));
            break;
        case 6:
            head = reverseList(head);
            printf("List reversed.\n");
            displayList(head);
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
