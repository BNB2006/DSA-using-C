// Write a program to Transpose a matrix
#include<stdio.h>
void main(){
    int matrix[3][3], transpose[3][3];
    
    printf("Enter the elements of the matrix (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transpose of matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    
    printf("Transposed matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}