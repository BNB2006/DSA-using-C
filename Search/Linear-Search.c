#include<stdio.h>
int main(){
    int size, target;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array in sorted form :-\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element No. %d :", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to find :");
    scanf("%d",&target);

    //searching element uisng Linear Search
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            printf("Element found at index %d",i);
            return 0;
        }
    }

    printf("Element not found in the array.");
    return 0;
    
}