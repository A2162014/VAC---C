#include <stdio.h>

void main() {
    int array[10], size, temp, i, j;
    printf("Enter number of elements to be inserted to array:");
    scanf("%d", &size);
    printf("\nEnter elements:\n");
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("\nSorted array:\n");
    for (i = 0; i < size; i++)
        printf(" %d ", array[i]);
}