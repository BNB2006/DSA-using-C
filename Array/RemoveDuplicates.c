// Program to remove duplicates from an array

#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int temp[n];
    int j = 0;

   
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                isDuplicate = 1; 
                break;
            }
        }

        
        if (!isDuplicate) {
            temp[j++] = arr[i];
        }
    }

    
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }


    printf("Array after removing duplicates:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    removeDuplicates(arr, n);

    return 0;
}
