// Delete an element from an specific position

#include <stdio.h>
#include <conio.h>

void DeleteElement(int arr[], int *size)
{
    int position;
    printf("Enter the position of the element you want to delete :");
    scanf("%d", &position);

    for (int i = position - 1; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

void main()
{
    int size;
    printf("Enter the size of the Array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    DeleteElement(arr, &size);

    printf("array elements are : { ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}");
}