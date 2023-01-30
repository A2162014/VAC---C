/*

VAC - C - Mini Project - RECRUITMENT TRACKING

Task 8: Write a program to implement user defined functions to
implement the following functionality 1. Company details
2. Candidate details 3. Score calculation

Created by: Ashvath S.P

Date: 27-11-2022

*/

#include <stdio.h>

void displayCompanyDetails() {
    printf("Company Details\n");
    printf("XYZ Ltd.\n");
}

void getCandidateDetails(char *name, int *age, char *gender, char *post, char *degree) {
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", age);
    printf("Enter Gender(M/F): ");
    scanf(" %c", gender);
    printf("Enter Post Applied: ");
    scanf("%s", post);
    printf("Enter Degree: ");
    scanf("%s", degree);
}

void displayCandidateDetails(char *name, int age, char gender, char *post, char *degree) {
    printf("\n\nCandidate Details\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Post Applied: %s\n", post);
    printf("Degree: %s\n", degree);
}

float calculateBonus(float marks) {
    float cgpa = marks / 10;

    if (cgpa >= 9.0) {
        return 10;
    } else if (cgpa >= 8.0) {
        return 5;
    } else {
        return 0;
    }
}

void displayScoreDetails(float marks, float bonus) {
    printf("\n\nScore Details\n");
    printf("Marks: %.2f\n", marks);
    printf("CGPA: %.2f\n", marks / 10);
    printf("Bonus: %.2f\n", bonus);
    printf("Total Score: %.2f\n", marks + bonus);
}

int main() {
    char name[50];
    int age;
    char gender;
    char post[50];
    char degree[50];
    float marks, bonus;
    int option;

    do {
        printf("Enter 1 for Company details\n");
        printf("Enter 2 for Candidate details\n");
        printf("Enter 3 for Score details\n");
        printf("Enter 4 to Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                displayCompanyDetails();
                break;

            case 2:
                getCandidateDetails(name, &age, &gender, post, degree);
                displayCandidateDetails(name, age, gender, post, degree);
                break;

            case 3:
                printf("Enter Marks: ");
                scanf("%f", &marks);
                bonus = calculateBonus(marks);
                displayScoreDetails(marks, bonus);
                break;

            case 4:
                break;

            default:
                printf("Invalid option. Please enter a valid option\n");
                break;
        }
    } while (option != 4);

    return 0;
}