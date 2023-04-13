#include <stdio.h>
#include <stdlib.h>

int size = 5;
int s[5];
int top = -1;

void push()
{
    int y;
    printf("Element to be pushed is:");
    scanf("%d", &y);
    if (top == size - 1)
    {
        printf("STACK IS FULL");
    }
    else
    {
        top++;
        s[top] = y;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("STACK IS EMPTY");
    }
    else
    {
        printf("Popped element is %d", s[top]);
        top--;
    }
    printf("\n");
}

void display()
{
    printf("Elements of the stack are:\n");
    for (int i = top; i >= 0; i--)
    {
        if (i == top)
        {
            printf("%d<-Top\n", s[i]);
        }
        else
        {
            printf("%d\n", s[i]);
        }
    }

    printf("\n");
}

void main()
{
    int x;
    while (1)
    {
        printf("Enter Option for Operation to perform on stack: \n");
        printf("0:Exit \n 1:push \n 2:pop \n 3:display \n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        default:
            exit(0);
            break;
        }
    }
}
