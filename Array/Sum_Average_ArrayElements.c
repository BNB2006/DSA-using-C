//Find the sum and Average of the array elements
#include<stdio.h>
#include<conio.h>
void main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int sum=0, Avg=0;

    for(int i=0; i<5; i++){
        
        sum += arr[i];
    }

    Avg = sum/5;

    printf("\nThe sum of array elements is : %d\n", sum);
    printf("The Average of array elements is : %d", Avg);
    
    
}