//Insert an element at a specific position 

#include<stdio.h>
#include<conio.h>

void InsertElement(int arr[],int *size){
    int position,element;
     printf("Enter new element you want to add :");
    scanf("%d",&element);

    printf("Enter the poistion for that element :");
    scanf("%d",&position);
     for (int i = *size; i >= position; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position-1]=element;
    (*size)++;
}

void main(){
    int size;
    printf("Enter the size of the Array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Calling the Fuction to insert the element
    InsertElement(arr, &size);

    printf("array elements after Insertation are : { ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}");
    
}
