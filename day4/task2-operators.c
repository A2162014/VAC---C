//Task 2: Write a C program to display the different types of Operators in C
//Compiled by: Ashvath S.P
//Date: 06-11-2022

#include <stdio.h>

void main() {
    int a, b, c, x, y;
    float d, e, arthmetic;
    int logical, largest;
    printf("|----------------------------------------------------------------------|\n");
    printf("|******************************OPERATIONS******************************|");
    printf("\n|----------------------------------------------------------------------|\n");
    printf("\n\tEnter value for a: ");
    scanf("%d", &a);
    printf("\tEnter value for b: ");
    scanf("%d", &b);
    printf("\tEnter value for c: ");
    scanf("%d", &c);
    printf("\tEnter value for x: ");
    scanf("%d", &x);
    printf("\tEnter value for y: ");
    scanf("%d", &y);
    printf("\tEnter value for d: ");
    scanf("%f", &d);
    printf("\tEnter value for e: ");
    scanf("%f", &e);
    printf("\n|----------------------------------------------------------------------|\n");
    printf("|++++++++++++++++++++++++++++UNARY OPERATION+++++++++++++++++++++++++++|");
    printf("\n|----------------------------------------------------------------------|\n");
    //Increment-Decrement Operation
    printf("\n\t->Increment-Decrement Operations<-\n");
    printf("\n\tPre-increment: ++a = %d", a, ++a);
    printf("\n\tPost-increment: c++ = %d", c, c++);
    printf("\n\tPre-decrement: --y = %d", y, --y);
    printf("\n\tPost-decrement: e-- = %0.2f\n", e, e--);
    printf("\n|----------------------------------------------------------------------|\n");
    printf("|++++++++++++++++++++++++++BINARY OPERATIONS+++++++++++++++++++++++++++|");
    printf("\n|----------------------------------------------------------------------|\n");
    //Arithmetic Operations
    printf("\n\t->Arthemtic Operations<-\n");
    arthmetic = a + b;
    printf("\n\ta + b = %d + %d = %0.2f", a, b, arthmetic);
    arthmetic = c - x;
    printf("\n\tc - x = %d - %d = %0.2f", c, x, arthmetic);
    arthmetic = y * c;
    printf("\n\ty * c = %d * %d = %0.2f", y, c, arthmetic);
    arthmetic = a / b;
    printf("\n\ta / b = %d / %d = %0.2f", a, b, arthmetic);
    arthmetic = c % x;
    printf("\n\tWhen c = %d is divided by x = %d, Remainder is %0.2f\n", c, x, arthmetic);
    //Relational Operations
    printf("\n\t->Relational Operations<-\n");
    printf("\n\tTrue - 1, False - 0\n");
    printf("\n\tx > y = %d > %d is %d", x, y, x > y);
    printf("\n\tx < y = %d < %d is %d", x, y, x < y);
    printf("\n\tx == y = %d == %d is %d", x, y, x == y);
    printf("\n\tx != y = %d != %d is %d", x, y, x != y);
    printf("\n\tx >= y = %d >= %d is %d", x, y, x >= y);
    printf("\n\tx <= y = %d <= %d is %d\n", x, y, x <= y);
    //Logical Operations
    printf("\n\t->Logical Operations<-\n");
    logical = (a != b) && (c > d);
    printf("\n\t(a != b) && (c > d) = (%d != %d) && (%d > %0.2f) is %d", a, b, c, d, logical);
    logical = (x == y) && (d < e);
    printf("\n\t(x == y) && (d < e) = (%d == %d) && (%0.2f < %0.2f) is %d", x, y, d, e, logical);
    logical = (a == b) || (c < d);
    printf("\n\t(a == b) || (c < d) = (%d == %d) || (%d < %0.2f) is %d", a, b, c, d, logical);
    logical = (x != y) || (d > e);
    printf("\n\t(x != y) || (d > e) = (%d != %d) || (%0.2f > %0.2f) is %d", x, y, d, e, logical);
    logical = !(a != b);
    printf("\n\t!(a != b) = !(%d != %d) is %d", a, b, logical);
    logical = !(c == d);
    printf("\n\t!(c == d) = !(%d == %d) is %d\n", c, d, logical);
    //Bitwise Operations
    printf("\n\t->Bitwise Operations<-\n");
    printf("\n\tAND: a & b = %d & %d = %d", a, b, a & b);
    printf("\n\tOR: c | x = %d | %d = %d", c, x, c | x);
    printf("\n\tXOR: y ^ a = %d ^ %d = %d", y, a, y ^ a);
    printf("\n\tCompliment: ~b = ~%d = %d ", b, ~b);
    printf("\n\tRight Shift: c >> 3 = %d >> 3 = %d", c, c >> 3);
    printf("\n\tLeft Shift: x << 2 = %d << 2 = %d\n", x, x << 2);
    //Assignment Operations
    printf("\n\t->Assignment Operations<-\n");
    printf("\n\ta = %d and b = %d", a, b);
    b = a;
    printf("\n\tb = a => b = %d", b);
    printf("\n\tc = %d and x = %d", c, x);
    c += x;
    printf("\n\tc += x => c = c + x => c = %d", c);
    printf("\n\tx = %d and y = %d", x, y);
    x -= y;
    printf("\n\tx -= y => x = x - y => x = %d", x);
    printf("\n\td = %0.2f and e = %0.2f", d, e);
    d *= e;
    printf("\n\td *= e => d = d * e => d = %0.2f", d);
    printf("\n\ta = %d and b = %d", a, b);
    b /= a;
    printf("\n\tb /= a => b = b / a => b = %d", b);
    printf("\n\tc = %d and x = %d", c, x);
    c %= x;
    printf("\n\tc %%= x => c = c %% x => c = %d\n", c);
    printf("\n|----------------------------------------------------------------------|\n");
    printf("|++++++++++++++++++++++++++TERNARY OPERATION+++++++++++++++++++++++++++|");
    printf("\n|----------------------------------------------------------------------|\n");
    //Conditional Operation
    printf("\n\t->Conditional Operation<-\n");
    printf("\n\tWhich is the largest number? \n\ta = %d, b = %d, or c = %d\n", a, b, c);
    largest = (a > b && a > c) ? a : (b > c) ? b : c;
    printf("\n\tCondition = ( a > b && a > c ) ? a : ( b > c ) ? b : c\n");
    printf("\n\tLargest = %d\n", largest);
    printf("\n|--------------------------------THE END-------------------------------|");
}

