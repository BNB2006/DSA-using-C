// Find the Maximum and Minimum element of the array

#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[10] = {78, 4, 35, 57, 68, 35, 77, 46, 43, 50};

    int max = arr[0];
    int min = arr[0];

    // Find maximum
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Find Minimum
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("\nLargest element in the array is : %d \n", max);
    printf("Smallest element in the array is : %d", min);
}