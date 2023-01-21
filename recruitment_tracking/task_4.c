//VAC - C - Mini Project
/*Task 4: Write a program to include an Exit Option by the user. The menu
should be displayed, only if the user selects the option on 4. Exit should the
loop run. Use do while to implement the same. Extend the previous program to implement the program.*/
//Compiled by: Ashvath S.P
//Date: 18-11-2022

#include <stdio.h>

int main() {
    char companyCin[20], companyName[20], companyRoc[20], companyCategory[20], companySubcategory[20], companyClass[20], companyDoi[20], companyAddress[20], companyStatus[20];
    char candidateName[20], candidateGender[20], candidatePostApplied[20], candidateDegree[20], grade;
    unsigned short op, candidateAge, markGradePoint = 4, round1Score, round2Score, round3Score;
    double candidateMark, candidateCgpa;

    printf("|------------------------------------------------------------------------------|\n");
    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~RECRUITMENT TRACKING~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("|------------------------------------------------------------------------------|\n");

    printf("\n\tMenu: \n\n\t1. Company Details \n\t2. Candidate details \n\t3. Score details \n\t4. Exit\n");

    do {
        printf("\n\tChoose option: ");
        scanf("%hu", &op);

        switch (op) {
            case 1: {
                printf("\n+------------------------------------------------------------------------------+\n");

                printf("\n\t-->Please enter the details of the Company<--\n");

                printf("\n\tEnter the CIN of the Company: ");
                scanf(" %s", companyCin);
                printf("\n\tEnter the Name of the Company: ");
                scanf(" %s", companyName);
                printf("\n\tEnter the ROC Code of the Company: ");
                scanf(" %s", companyRoc);
                printf("\n\tEnter the Company Category: ");
                scanf(" %s", companyCategory);
                printf("\n\tEnter the Company SubCategory: ");
                scanf(" %s", companySubcategory);
                printf("\n\tEnter the Class of Company: ");
                scanf(" %s", companyClass);
                printf("\n\tEnter the Date of Incorporation : ");
                scanf(" %s", companyDoi);
                printf("\n\tEnter the Address of the Company : ");
                scanf(" %s", companyAddress);
                printf("\n\tEnter the Company Status : ");
                scanf(" %s", companyStatus);

                printf("\n+------------------------------------------------------------------------------+\n");

                printf("\n\t-->Company Details<--\n");

                printf("\n\tCIN: %s\n", companyCin);
                printf("\n\tName: %s\n", companyName);
                printf("\n\tROC Code: %s\n", companyRoc);
                printf("\n\tCompany Category: %s\n", companyCategory);
                printf("\n\tCompany SubCategory: %s\n", companySubcategory);
                printf("\n\tClass of Company: %s\n", companyClass);
                printf("\n\tDate of Incorporation : %s\n", companyDoi);
                printf("\n\tAddress: %s\n", companyAddress);
                printf("\n\tCompany Status : %s\n", companyStatus);

                printf("\n|------------------------------------------------------------------------------|\n");
                break;
            }
            case 2: {
                printf("\n+------------------------------------------------------------------------------+\n");

                printf("\n\t-->Please enter the details of the Candidate<--\n");

                printf("\n\tEnter the Name of the Candidate: ");
                scanf(" %s", candidateName);
                printf("\n\tEnter the Age of the Candidate: ");
                scanf("%hu", &candidateAge);
                printf("\n\tEnter the Gender of the Candidate: ");
                scanf(" %s", candidateGender);
                printf("\n\tEnter the Post applied by the Candidate: ");
                scanf(" %s", candidatePostApplied);
                printf("\n\tEnter the Degree of the Candidate: ");
                scanf(" %s", candidateDegree);
                printf("\n\tEnter the Mark obtained by the Candidate: ");
                scanf("%lf", &candidateMark);

                candidateCgpa = markGradePoint * (candidateMark / 100);

                printf("\n+------------------------------------------------------------------------------+\n");

                printf("\n\t-->Candidate Details<--\n");

                printf("\n\tName: %s\n", candidateName);
                printf("\n\tAge: %hu\n", candidateAge);
                printf("\n\tGender: %s\n", candidateGender);
                printf("\n\tPost applied: %s\n", candidatePostApplied);
                printf("\n\tDegree: %s\n", candidateDegree);
                printf("\n\tMark: %0.2lf\n", candidateMark);
                printf("\n\tCGPA (4 - Grade Point Scale): %0.2lf\n", candidateCgpa);

                if (candidateCgpa > 3.5) {
                    grade = 'A';
                    printf("\n\tGrade: %c\n", grade);
                } else if (2.5 < candidateCgpa < 3.5) {
                    grade = 'B';
                    printf("\n\tGrade: %c\n", grade);
                } else if (1.5 < candidateCgpa < 2.5) {
                    grade = 'C';
                    printf("\n\tGrade: %c\n", grade);
                } else if (0.5 < candidateCgpa < 1.5) {
                    grade = 'D';
                    printf("\n\tGrade: %c\n", grade);
                } else {
                    grade = 'E';
                    printf("\n\tGrade: %c\n", grade);
                }

                printf("\n|------------------------------------------------------------------------------|\n");

                break;
            }
            case 3: {
                if (grade == '\0') {
                    break;
                } else {
                    printf("\n+------------------------------------------------------------------------------+\n");

                    printf("\n\t-->Please enter the scores of the Candidate for each round<--\n");

                    printf("\n\tEnter the score for the first round: ");
                    scanf("%hu", &round1Score);
                    printf("\n\tEnter the score for the second round: ");
                    scanf("%hu", &round2Score);
                    printf("\n\tEnter the score for the third round: ");
                    scanf("%hu", &round3Score);

                    if (candidateCgpa > 3.5) {
                        round1Score += 5;
                        round2Score += 5;
                        round3Score += 5;
                    } else if (2.5 < candidateCgpa < 3.5) {
                        round1Score += 4;
                        round2Score += 4;
                        round3Score += 4;
                    } else if (1.5 < candidateCgpa < 2.5) {
                        round1Score += 3;
                        round2Score += 3;
                        round3Score += 3;
                    } else if (0.5 < candidateCgpa < 1.5) {
                        round1Score += 2;
                        round2Score += 2;
                        round3Score += 2;
                    } else {
                        round1Score += 1;
                        round2Score += 1;
                        round3Score += 1;
                    }

                    printf("\n+------------------------------------------------------------------------------+\n");

                    printf("\n\t-->Score Details<--\n");

                    switch (grade) {
                        case 'A':
                            printf("\n\tNote: Bonus for grade %c is +5\n", grade);
                            break;
                        case 'B':
                            printf("\n\tNote: Bonus for grade %c is +4\n", grade);
                            break;
                        case 'C':
                            printf("\n\tNote: Bonus for grade %c is +3\n", grade);
                            break;
                        case 'D':
                            printf("\n\tNote: Bonus for grade %c is +2\n", grade);
                            break;
                        case 'E':
                            printf("\n\tNote: Bonus for grade %c is +1\n", grade);
                            break;
                        default:
                            printf("\n\tNote: Bonus for grade %c is 0\n", grade);
                            break;
                    }

                    printf("\n\tRound 1: %hu\n", round1Score);
                    printf("\n\tRound 2: %hu\n", round2Score);
                    printf("\n\tRound 3: %hu\n", round3Score);
                    printf("\n\tTotal score: %hu\n", round1Score + round2Score + round3Score);
                    printf("\n\tAverage score: %hu\n", (round1Score + round2Score + round3Score) / 40);

                    printf("\n|------------------------------------------------------------------------------|\n");

                }
                break;
            }
            case 4: {
                break;
            }
            default: {
                printf("\n|-----------------------------------THE END------------------------------------|\n");

                printf("\n\tInvalid Input!");

                printf("\n|-----------------------------------THE END------------------------------------|\n");
                break;
            }
        }
    } while (op <= 4);

    return 0;
}
