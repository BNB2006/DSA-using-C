// Write a program to reverse an array
#include <stdio.h>
void main()
{
    int size;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    printf("Reversed array elements are : { ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}");
}