#include <stdio.h>

void BubbleSort(int arr[], int *size)
{
    int temp, i, j;
    for (i = 0; i < *size - 1; i++)
    {
        for (j = 0; j < *size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element No. %d :", i);
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, &size);

    printf("After array sorting using Bubble sort : { ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("}");
}