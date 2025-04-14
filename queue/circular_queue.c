#include <stdio.h>
#define N 5

int queue[N];
int front = -1, rear = -1;

// Check if the queue is full
int isFull() {
    return (front == (rear + 1) % N);
}

// Check if the queue is empty
int isEmpty() {
    return (front == -1);
}

// Get current size of the queue
int size() {
    if (isEmpty())
        return 0;
    if (rear >= front)
        return rear - front + 1;
    else
        return (N - front + rear + 1);
}

void enqueue(int x) {
    if (isFull()) {
        printf("Queue is Full!\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % N;
    }
    queue[rear] = x;
    printf("%d inserted.\n", x);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
        return;
    }

    printf("%d removed.\n", queue[front]);

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % N;
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % N;
    }
    printf("\n");
}

int main() {
    int ch, val;

    while (1) {
        printf("\n*** Circular Queue Menu ***");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Is Empty");
        printf("\n5. Is Full");
        printf("\n6. Size");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &val);
            enqueue(val);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Queue is %sempty.\n", isEmpty() ? "" : "not ");
            break;
        case 5:
            printf("Queue is %sfull.\n", isFull() ? "" : "not ");
            break;
        case 6:
            printf("Current size: %d\n", size());
            break;
        case 7:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
