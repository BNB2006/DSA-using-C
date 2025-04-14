#include <stdio.h>

#define N 50
int queue[N];
int front = -1;
int rear = -1;

// Check if the queue is empty
int isEmpty()
{
    return (front == -1 || front > rear);
}

// Check if the queue is full
int isFull()
{
    return (rear == N - 1);
}

// Return the current size of the queue
int size()
{
    if (isEmpty())
        return 0;
    return rear - front + 1;
}

void enqueue()
{
    int x;
    printf("Enter the Element to be inserted:\n");
    scanf("%d", &x);
    if (isFull())
    {
        printf("Queue is Full!\n");
    }
    else
    {
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        queue[rear] = x;
        printf("%d inserted successfully.\n", x);
    }
}

void dequeue()
{
    if (isEmpty())
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        printf("%d removed from queue.\n", queue[front]);
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void printIsEmpty()
{
    printf("Queue is %sempty.\n", isEmpty() ? "" : "not ");
}

void printIsFull()
{
    printf("Queue is %sfull.\n", isFull() ? "" : "not ");
}

void printSize()
{
    printf("Queue size: %d\n", size());
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n*** Queue Menu ***");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Is Empty");
        printf("\n5. Is Full");
        printf("\n6. Size");
        printf("\n7. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printIsEmpty();
            break;
        case 5:
            printIsFull();
            break;
        case 6:
            printSize();
            break;
        case 7:
            return 0;
        default:
            printf("Wrong Choice!!\n");
        }
    }

    return 0;
}
