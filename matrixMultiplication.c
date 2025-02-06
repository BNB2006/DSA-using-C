// Write a program to perform additon of two Matrix
#include <stdio.h>

void main()
{
    int row, col;
    printf("Enter the rows and columns of the matrix : ");
    scanf("%d%d", &row, &col);

    int arr1[row][col];
    int arr2[row][col];
    int arr3[row][col];

    printf("Enter elements of the first Matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of the second Matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Additon of Matrix
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         for (int k = 0; k < j; k++)
    //         {
    //             arr3[i][j]=arr1[i][k]*arr2[k][j];
    //         }
            
    //     }
    // }

    printf("\nResult :-\n");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
}