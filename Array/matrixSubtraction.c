//write program to subtract two matrix
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

    
    // Subtraction of Matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    printf("\nResult :-\n");
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
}