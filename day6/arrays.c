#include <stdio.h>

void main() {
    int array[10], i, j, size, sum1, sum2, choice;

    //get user-defined size for array
    printf("Enter number of elements to be added to the array:\n");
    scanf("%d", &size);

    //get inputs for the array
    printf("Enter elements:\n");
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);

    //display inputs from the array
    printf("Elements in array:\n");
    for (i = 0; i < size; i++)
        printf("\n%d\n", array[i]);

    //menu program
    printf("\nMenu\n1. Odd or Even \n2. Prime or not\n3. Exit\n");
    do {
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEven and Odd elements in array:\n");
                for (i = 0; i < size - 1; i++)
                    if (array[i] % 2 == 0) {
                        printf("\n%d -> ODD\n", array[i]);
                        sum1 += array[i];
                    } else {
                        printf("\n%d -> EVEN\n", array[i]);
                        sum2 += array[i];
                    }
                printf("\nSum of odd numbers = %d\n", &sum1);
                printf("\nSum of even numbers = %d\n", &sum2);
                break;
            case 2:
                printf("\nPrime and not elements in array:\n");
                for (i = 0; i < size - 1; i++) {
                    for (j = 0; j < ((size - 1) / 2); j++)
                        if (array[i] % j == 0) {
                            printf("\n%d -> PRIME\n", array[i]);
                            sum1 += array[i];
                        } else {
                            printf("\n%d -> NON-PRIME\n", array[i]);
                            sum2 += array[i];
                        }
                }
                printf("\nSum of prime numbers = %d\n", &sum1);
                printf("\nSum of non-prime numbers = %d\n", &sum2);
            case 3:
                break;
            default:
                printf(("\nEnter (1/2)!\n"));
                break;
        }
    } while (choice < 3);
}