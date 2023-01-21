#include <stdio.h>

void main() {
    char name = 'A', Jobtitle[10];
    char address[] = "Bengaluru";
    int Rollno; //datatype variablename
    int marks = 75; //variable dec. and init.
    printf("Enter the value of Rollno:");
    scanf("%d", &Rollno); //scanf("format_specifier",&variable_name)
    printf("\nRollno = %d\n", Rollno); //printf("format_specifier",variable_name)
    printf("\nMarks = %d\n", marks);
    printf("\nname = %c\n", name);
    printf("\naddress = %s\n", address);
    printf("Enter Jobtitle: ");
    scanf("%s", &Jobtitle);
    printf("\nJobtitle = %s\n", Jobtitle);
}