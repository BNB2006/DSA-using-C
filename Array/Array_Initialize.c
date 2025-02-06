//Declare and Initialize an array
#include<stdio.h>
#include<conio.h>
void main(){

    // int arr[5] = {1,4,5,3,7};
    
    int size;
    printf("Enter the size of the arry : ");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element No. %d :", i);
        scanf("%d", &arr[i]);
    }

    int i = arr[0];
    printf("Array elements are : {");
    for ( i ; i <= size; i++)
    {
        printf("%d ", i);
    }
    printf("}");

}