// Write a program to perform additon of two Matrix
#include <stdio.h>

void main()
{
    // int 3, col;
    // printf("Enter the 3s and columns of the matrix : ");
    // scanf("%d%d", &3, &col);

    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];

    printf("Enter elements of the first Matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of the second Matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Additon of Matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nAddition of arr1 and arr2 is :-\n");
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
}