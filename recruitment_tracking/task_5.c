//VAC - C - Mini Project
/*Task 5: Write a program in C to display the following pattern
1
1 2
1 2 3
1 2 3 4*/
//Compiled by: Ashvath S.P
//Date: 19-11-2022

#include <stdio.h>

int main() {
    for (unsigned short i = 1; i <= 4; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%hu", j);
        }
        printf("\n");
    }
    return 0;
}