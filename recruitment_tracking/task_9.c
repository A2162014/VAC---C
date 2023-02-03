/*

VAC - C - Mini Project - RECRUITMENT TRACKING

Task 9: Write a C program to implement Factorial and Fibonacci series using recursion.

Created by: Ashvath S.P

Date: 28-01-2023

*/

#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));

    printf("Enter a number to find its Fibonacci series: ");
    scanf("%d", &num);
    printf("Fibonacci series of %d is: \n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
