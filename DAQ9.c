#include <stdio.h>

void bubbleSort(char arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap arr[j] and arr[j+1]
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    char arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted array in ascending order: ");
    for (i = 0; i < n; i++)
    {
        printf("%c ", arr[i]);
    }
    return 0;
}
