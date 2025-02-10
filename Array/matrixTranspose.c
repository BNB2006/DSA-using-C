// Write a program to Transpose a matrix
#include<stdio.h>
void main(){
    int rows, cols;
    printf("Enter rows and colunms of the matrix :");
    scanf("%d%d",&rows,&cols);

    int matrix[rows][cols], transpose[cols][rows];
    
    printf("Enter the elements of the matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //Transpose of matrix
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    

     printf("Transposed matrix:\n");
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
     }
     

    
}