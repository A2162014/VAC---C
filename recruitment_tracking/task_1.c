//VAC - C - Mini Project
/*Task 1: Write a program to read the details of the candidate -Name,
age, gender post applied, degree, marks. Calculate the CGPA. Display the same
in a proper format.*/
//Compiled by: Ashvath S.P
//Date: 07-11-2022

#include <stdio.h>

int main() {
    char candidate_name[50], candidate_gender[10], candidate_post_applied[50], candidate_degree[50];
    unsigned short candidate_age, grade_point = 4;//unsigned short - default to unsigned short int
    double candidate_mark, candidate_cgpa;//double is mostly used for calculations in programming to eliminate errors when decimal values are being rounded off.

    printf("|-------------------------------------------------------------------|\n");
    printf("|~~~~~~~~~~~~~~~~~~~~~~~RECRUITMENT TRACKING~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("|-------------------------------------------------------------------|\n");

    printf("\n\t-->Please enter the details of the Candidate<--\n");

    printf("\n\tEnter the Name of the Candidate: ");
    scanf("%s", &candidate_name);
    printf("\tEnter the Age of the Candidate: ");
    scanf("%hu", &candidate_age);
    printf("\tEnter the Gender of the Candidate: ");
    scanf("%s", &candidate_gender);
    printf("\tEnter the Post applied by the Candidate: ");
    scanf("%s", &candidate_post_applied);
    printf("\tEnter the Degree of the Candidate: ");
    scanf("%s", &candidate_degree);
    printf("\tEnter the Mark obtained by the Candidate: ");
    scanf("%lf", &candidate_mark);

    candidate_cgpa = grade_point * (candidate_mark / 100);

    printf("\n+-------------------------------------------------------------------+\n");

    printf("\n\t-->Details of the Candidate<--\n");

    printf("\n\tName: %s\n", candidate_name);
    printf("\tAge: %hu\n", candidate_age);
    printf("\tGender: %s\n", candidate_gender);
    printf("\tPost applied: %s\n", candidate_post_applied);
    printf("\tDegree: %s\n", candidate_degree);
    printf("\tMark: %0.2lf\n", candidate_mark);
    printf("\tCGPA (4 - grade point scale): %0.2lf\n", candidate_cgpa);

    printf("\n|------------------------------THE END------------------------------|\n");

    return 0;
}
