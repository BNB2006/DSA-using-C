#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Insert at end
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL) return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

// Display list
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("List: ");
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Search for element
void search(struct Node* head, int key) {
    int pos = 0;
    while (head != NULL) {
        if (head->data == key) {
            printf("Found %d at position %d.\n", key, pos);
            return;
        }
        head = head->next;
        pos++;
    }
    printf("%d not found in list.\n", key);
}

// Delete by value
struct Node* deleteValue(struct Node* head, int value) {
    struct Node* temp = head;

    while (temp != NULL && temp->data != value)
        temp = temp->next;

    if (temp == NULL) {
        printf("%d not found.\n", value);
        return head;
    }

    if (temp->prev) temp->prev->next = temp->next;
    if (temp->next) temp->next->prev = temp->prev;

    if (temp == head) head = temp->next;

    free(temp);
    printf("%d deleted.\n", value);
    return head;
}

// Count nodes
int count(struct Node* head) {
    int cnt = 0;
    while (head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}

// Reverse list
struct Node* reverse(struct Node* head) {
    struct Node* temp = NULL;
    struct Node* current = head;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL)
        head = temp->prev;

    return head;
}

// Main
int main() {
    struct Node* head = NULL;
    int value;

    // Predefined: 10 <-> 20 <-> 30
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    display(head);

    printf("\nEnter value to insert: ");
    scanf("%d", &value);
    head = insertEnd(head, value);
    display(head);

    printf("\nEnter value to search: ");
    scanf("%d", &value);
    search(head, value);

    printf("\nEnter value to delete: ");
    scanf("%d", &value);
    head = deleteValue(head, value);
    display(head);

    printf("\nTotal nodes: %d\n", count(head));

    printf("\nReversing list...\n");
    head = reverse(head);
    display(head);

    return 0;
}
