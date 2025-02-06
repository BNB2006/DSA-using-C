// Find the most repeated element in the Array
#include <stdio.h>
#include <conio.h>
int main(void)
{

    int size, element, occur = 0;
    printf("Enter the size of the array\n");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element %d : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (occur < count)
        {
            element = arr[i];
            occur = count;
        }
    }

    printf("Most repeated element in the array is %d occured %d", element, occur);
}