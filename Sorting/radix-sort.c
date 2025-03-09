#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void countingSort(int array[], int size, int place) {
    int output[size + 1];
    int max = (array[0] / place) % 10;

    for (int i = 1; i < size; i++) {
        if (((array[i] / place) % 10) > max)
            max = array[i];
    }
    int count[max + 1];

    for (int i = 0; i < max; ++i)
        count[i] = 0;

    for (int i = 0; i < size; i++)
        count[(array[i] / place) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = size - 1; i >= 0; i--) {
        output[count[(array[i] / place) % 10] - 1] = array[i];
        count[(array[i] / place) % 10]--;
    }

    for (int i = 0; i < size; i++)
        array[i] = output[i];
}

void radixsort(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max)
            max = array[i];
    }

    for (int place = 1; max / place > 0; place *= 10)
        countingSort(array, size, place);
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int array[MAX];
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    radixsort(array, n);
    printf("Sorted array: ");
    printArray(array, n);

    return 0;
}