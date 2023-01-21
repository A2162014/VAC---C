#include <stdio.h>

int main() {
    int num, percent;
    int a, b, add, sub, mul, div, op;

    printf("\nEnter number: ");
    scanf("%d", num);

    //if-else statment
    if (num % 2 == 0) {
        printf("\nEven\n");
    } else {
        printf("\nOdd\n");
    }

    printf("\nEnter percent: ");
    scanf("%d", percent);

    //if-else if-else statment
    if (percent >= 90)
        printf("\nGrade A\n");
    else if (percent >= 80)
        printf("\nGrade B\n");
    else if (percent >= 70)
        printf("\nGrade C\n");
    else if (percent >= 60)
        printf("\nGrade D\n");
    else if (percent >= 50)
        printf("\nGrade E\n");
    else
        printf("\nGrade F\n");

    //nested - if statement
    if (num > 0) {
        if (num % 2 == 0)
            printf("\nEven\n");
        else
            printf("\nOdd\n");
    } else
        printf("\nNegative\n");

    printf("\nEnter a & b: ");
    scanf("%d %d", &a, &b);

    printf("\nEnter option: ");
    scanf("%d", &op);

    //switch-case
    switch (op) {
        case 1:
            add = a + b;
            printf("\nsum is %d\n", add);
            break;
        case 2:
            sub = a - b;
            printf("\ndifference is %d\n", sub);
            break;
        case 3:
            mul = a * b;
            printf("\nmultiplication is %d\n", sub);
            break;
        case 4:
            sub = a / b;
            printf("\ndivison is %d\n", sub);
            break;
        default:
            printf("\nInvalid option!\n");
            break;
    }
}
