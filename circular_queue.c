#include <stdio.h>
#define MAX 5

int cq[MAX];
int front = -1, rear = -1;

// Insert element
void enqueue(int x)
{
    if ((rear + 1) % MAX == front)
    {
        printf("Circular Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear = (rear + 1) % MAX;
    cq[rear] = x;
    printf("%d enqueued\n", x);
}

// Delete element
void dequeue()
{
    if (front == -1)
    {
        printf("Circular Queue Underflow\n");
        return;
    }

    printf("%d dequeued\n", cq[front]);

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}

// Display circular queue
void display()
{
    if (front == -1)
    {
        printf("Circular Queue is empty\n");
        return;
    }

    int i = front;
    while (1)
    {
        printf("%d ", cq[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    enqueue(40);
    display();
    return 0;
}
