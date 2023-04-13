#include <stdio.h>

void insertionSort(char arr[], int n)
{
    int i, j;
    char key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    char arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]); // Use space before %c to avoid reading the previous newline character
    }
    insertionSort(arr, n);

    printf("Sorted Array is: \n");
    for (int i = 0; i < n; i++)
        printf("%c ", arr[i]);
    printf("\n");

    return 0;
}
