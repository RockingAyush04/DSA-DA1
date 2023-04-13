#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int CQ[SIZE];
int f = -1, r = -1;

int isfull()
{
    if (f == (r + 1) % SIZE)
    {
        printf("Queue is Full\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty()
{
    if (f == -1)
        return 1;
    else
        return 0;
}

void enqueue()
{
    int y;
    printf("Enter element: ");
    scanf("%d", &y);
    if (isfull())
    {
        return;
    }
    else
    {
        if (f == -1)
            f = 0;
        r = (r + 1) % SIZE;
        CQ[r] = y;
    }
}

void dequeue()
{
    int x;
    if (isempty())
    {
        printf("Queue is Empty\n");
        return;
    }
    else
    {
        x = CQ[f];
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = (f + 1) % SIZE;
        }
        printf("Dequeued element is %d\n", x);
    }
}

void display()
{
    if (isempty())
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Elements of Circular Queue are: ");
        int i = f;
        do
        {
            printf("%d ", CQ[i]);
            i = (i + 1) % SIZE;
        } while (i != (r + 1) % SIZE);
        printf("\n");
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n");
        printf("1. Insert element to queue \n");
        printf("2. Delete element from queue \n");
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
        } /* End of switch */
    }     /* End of while */
    return 0;
} /* End of main() */
