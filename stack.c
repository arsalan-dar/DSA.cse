#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

// Push operation
void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->next = top;
    top = newnode;

    printf("%d pushed\n", x);
}

// Pop operation
void pop()
{
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    struct node *temp = top;
    printf("%d popped\n", top->data);
    top = top->next;
    free(temp);
}

// Peek operation
void peek()
{
    if (top == NULL)
        printf("Stack is empty\n");
    else
        printf("Top element: %d\n", top->data);
}

// Display stack
void display()
{
    struct node *temp = top;
    if (temp == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    peek();
    display();
    return 0;
}
