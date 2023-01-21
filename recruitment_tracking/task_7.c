/*

VAC - C - Mini Project - RECRUITMENT TRACKING

Task 7: Write a program to implement matrix multiplication

Created by: Ashvath S.P

Date:21-11-2022

*/

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10], i, j, k, r1, c1, r2, c2;

    printf("\nEnter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("\nEnter the elements of the first matrix: \n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("\nEnter the elements of the second matrix: \n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2) {
        printf("\nMatrix multiplication is not possible. \n");
    } else {
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                c[i][j] = 0;
                for (k = 0; k < c1; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("\nThe product of the two matrices is: \n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}