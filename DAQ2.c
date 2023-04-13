#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 5

char stack[MAX_SIZE][50];
int top = -1;

void push()
{
    char element[50];
    printf("Enter element to be pushed: ");
    scanf("%s", element);
    if (top == MAX_SIZE - 1)
    {
        printf("STACK IS FULL\n");
    }
    else
    {
        top++;
        strcpy(stack[top], element);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
        printf("Popped element is: %s\n", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
        printf("Elements of the stack are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%s\n", stack[i]);
        }
    }
}

int main()
{
    int x;
    while (1)
    {
        printf("\nEnter your choice: \n");
        printf("0:Exit \n1:Push \n2:Pop \n3:Display \n");
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
    return 0;
}
