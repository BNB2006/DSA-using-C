//Write a program to merge two arrys
#include<stdio.h>
#include<conio.h>
#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i, j;
    
    // Copy elements from arr1 to merged array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements from arr2 to merged array
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }
}

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergeArrays(arr1, n1, arr2, n2, merged);

    printf("Merged array: { ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("}\n");

    return 0;
}

