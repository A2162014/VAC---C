/*

VAC - C - Mini Project - RECRUITMENT TRACKING

Task 10: Write a program to find the average scores of several rounds using functions and pointers.

Created by: Ashvath S.P

Date: 03-02-2023

*/

#include <stdio.h>

int maxCandidates = 10;

void displayCompanyDetails() {
    printf("Company Details\n");
    printf("Tata Ltd.\n");
}

void
getCandidateDetails(char (*name)[50], int *age, char *gender, char (*post)[50], char (*degree)[50], int candidateNum) {
    printf("Enter Name: ");
    scanf("%s", name[candidateNum]);
    printf("Enter Age: ");
    scanf("%d", &age[candidateNum]);
    printf("Enter Gender(M/F): ");
    scanf(" %c", &gender[candidateNum]);
    printf("Enter Post Applied: ");
    scanf("%s", post[candidateNum]);
    printf("Enter Degree: ");
    scanf("%s", degree[candidateNum]);
}


void displayCandidateDetails(char (*name)[50], int *age, char *gender, char (*post)[50], char (*degree)[50],
                             int candidateNum) {
    printf("\n\nCandidate Details\n");
    printf("Name: %s\n", name[candidateNum]);
    printf("Age: %d\n", age[candidateNum]);
    printf("Gender: %c\n", gender[candidateNum]);
    printf("Post Applied: %s\n", post[candidateNum]);
    printf("Degree: %s\n", degree[candidateNum]);
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

void displayScoreDetails(float *marks, float *bonus, int candidateNum) {
    printf("\n\nScore Details\n");
    printf("Marks: %.2f\n", marks[candidateNum]);
    printf("CGPA: %.2f\n", marks[candidateNum] / 10);
    printf("Bonus: %.2f\n", bonus[candidateNum]);
    printf("Total Score: %.2f\n", marks[candidateNum] + bonus[candidateNum]);
}


int main() {
    char name[maxCandidates][50], gender[maxCandidates];
    char post[maxCandidates][50], degree[maxCandidates][50];
    int age[maxCandidates], option, candidateNum = 0;
    float marks[maxCandidates], bonus[maxCandidates];

    do {
        candidateNum++;
    }
    break;
    case 3:
        if (candidateNum > 0) {
            printf("Enter Marks: ");
            scanf("%f", &marks[candidateNum - 1]);
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
                if (candidateNum < maxCandidates) {
                    getCandidateDetails(name, age, gender, post, degree, candidateNum);
                    displayCandidateDetails(name, age, gender, post, degree, candidateNum);
                    bonus[candidateNum - 1] = calculateBonus(marks[candidateNum - 1]);
                    displayScoreDetails(marks, bonus, candidateNum - 1);
                } else {
                    printf("Enter Candidate Details first\n");
                }
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