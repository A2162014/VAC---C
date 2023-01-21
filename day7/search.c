#include <stdio.h>

void main() {
    int array[10], size, key, found = 0, i;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    printf("\nEnter elements:\n");
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    printf("\nelements in array:\n");
    for (i = 0; i < size; i++)
        printf(" %d ", array[i]);
    printf("\n\nEnter element to be searched: ");
    scanf("%d", &key);
    for (i = 0; i < size; i++) {
        if (array[i] == key) {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("\n%d is found at index %d\n", key, i);
    else
        printf("\n%d is not found in the array\n", key);
}