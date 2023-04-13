#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

void enqueue();
void dequeue();
void display();

char queue_array[MAX][20];
int rear = -1;
int front = -1;

void main()
{
    int choice;

    while (1)
    {
        printf("1. Enqueue element to queue \n");
        printf("2. Dequeue element from queue \n");
        printf("3. Display all elements of queue \n");
        printf("4. Quit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
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
            exit(0);

        default:
            printf("Wrong choice \n");
            break;
        }
    }
}

void enqueue()
{
    char add_item[20];

    if (rear == MAX - 1)
    {
        printf("Queue Overflow \n");
    }
    else
    {
        if (front == -1)
        {
            /* If queue is initially empty */
            front = 0;
        }

        printf("Insert the element in queue : ");
        scanf("%s", add_item);

        rear = rear + 1;
        strcpy(queue_array[rear], add_item);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow \n");
    }
    else
    {
        printf("Element deleted from queue is : %s\n", queue_array[front]);
        front = front + 1;
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("Queue is : \n");

        for (i = front; i <= rear; i++)
        {
            printf("%s ", queue_array[i]);
        }

        printf("\n");
    }
}
