#include<stdio.h>

int BinarySearch(int arr[],int *size,int target){
    int low, high, mid;
    low=0;
    high=*size-1;
    for (int i = 0; i < *size; i++)
    {
        mid=(low+high)/2;
        if (arr[mid]==target)
        {
            printf("Element found at position %d",mid+1);
            return 0;
        }else if(arr[mid] < target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }

    printf("Element not found in the array!");
    return 0;
    
}

int main(){
    int size, low, high, mid, target;
    printf("Searching using Binary search...\n");
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

    BinarySearch(arr,&size,target); 
    
}