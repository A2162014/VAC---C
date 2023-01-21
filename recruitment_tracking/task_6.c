/*VAC - C - Mini Project
Task 6: Write a program to implement arrays to store the details
of several candidate score. Find the largest and the least
score among all.
Compiled by: Ashvath S.P
Date:21-11-2022
 */

#include <stdio.h>

int main() {
    char companyName[20], companyLocation[20], candidateName[10][20], candidateGender[10], candidatePostApplied[10][20], candidateDegree[10][20], grade[20];
    unsigned short op, i, companyClass, numCandidates, candidateAge[10],
            topMarkCand = 0, lowMarkCand = 0, topScoreCand = 0, lowScoreCand = 0, markGradePoint = 4,
            round1Score[10], round2Score[10], round3Score[10], totalScore[10];
    double candidateMark[10], candidateCgpa[10], highestMark = candidateMark[0], leastMark = candidateMark[0], highestScore = totalScore[0], leastScore = totalScore[0];

    //Home Screen of the program
    printf("|------------------------------------------------------------------------------|\n");
    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~RECRUITMENT TRACKING~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("|------------------------------------------------------------------------------|\n");

    do /* Operations of the program */{
        printf("\n\t(-(-MENU-)-) \n\n\t1. Company Details \n\t2. Candidate Details \n\t3. Score Details \n\t4. Exit\n");

        printf("\n\tEnter option: ");
        scanf("%hu", &op);

        switch (op) {
            case 1: /*Company details*/ {
                printf("\n+------------------------------------------------------------------------------+\n");

                printf("\n\t-->Enter details for the company<--\n"); /* gets company details from user */

                printf("\tName: ");
                scanf(" %s", companyName);
                printf("\tClass: \n\t1. Public\n\t2. Private\n");
                printf("\tChoose class: ");
                scanf(" %hu", &companyClass);
                printf("\tLocation: ");
                scanf(" %s", companyLocation);

                printf("\n+------------------------------------------------------------------------------+\n");

                printf("\n\t-->Company Details<--\n"); /* displays the details of the company */

                printf("\tName: %s\n", companyName);
                switch (companyClass) {
                    case 1:
                        printf("\tClass: Public\n");
                        break;
                    case 2:
                        printf("\tClass: Private\n");
                        break;
                    default:
                        break;
                }
                printf("\tLocation: %s\n", companyLocation);

                printf("\n|------------------------------------------------------------------------------|\n");
                break;
            }
            case 2: /* Candidate details */ {
                printf("\n+------------------------------------------------------------------------------+\n");

                printf("\n\tEnter the number of candidates: ");
                scanf("%hu", &numCandidates);

                for (i = 0; i < numCandidates; i++) {
                    printf("\n\t-->Enter details for candidate %d<--\n", i + 1); /* gets candidate details from user */

                    printf("\tName: ");
                    scanf("%s", candidateName[i]);
                    printf("\tAge: ");
                    scanf("%hu", &candidateAge[i]);
                    printf("\tGender: ");
                    scanf(" %c", &candidateGender[i]);
                    printf("\tPost applied for: ");
                    scanf("%s", candidatePostApplied[i]);
                    printf("\tDegree: ");
                    scanf("%s", candidateDegree[i]);
                    printf("\tMark: ");
                    scanf("%lf", &candidateMark[i]);
                    candidateCgpa[i] = markGradePoint * (candidateMark[i] / 100); /* calculates CGPA of the candidate */
                    //finds the highest and lowest mark
                    if (candidateMark[i] > highestMark)
                        topMarkCand += i, highestMark = candidateMark[i];
                    else if (candidateMark[i] < leastMark)
                        lowMarkCand += i, leastMark = candidateMark[i];
                }

                printf("\n+------------------------------------------------------------------------------+\n");

                printf("\n\t-->Candidate Details<--\n"); /* displays the details of candidates */

                for (i = 0; i < numCandidates; i++) {
                    printf("\n\tCandidate %d:\n", i + 1);
                    printf("\tName: %s\n", candidateName[i]);
                    printf("\tAge: %d\n", candidateAge[i]);
                    printf("\tGender: %c\n", candidateGender[i]);
                    printf("\tPost applied for: %s\n", candidatePostApplied[i]);
                    printf("\tDegree: %s\n", candidateDegree[i]);
                    printf("\tMark: %lf\n", candidateMark[i]);
                    printf("\tCGPA: %lf\n", candidateCgpa[i]);
                    //calculates the grade with respect to the CGPA of the candidate
                    if (candidateCgpa[i] > 3.5) {
                        grade[i] = 'A';
                        printf("\tGrade: %c\n", grade[i]);
                    } else if (2.5 < candidateCgpa[i] < 3.5) {
                        grade[i] = 'B';
                        printf("\tGrade: %c\n", grade[i]);
                    } else if (1.5 < candidateCgpa[i] < 2.5) {
                        grade[i] = 'C';
                        printf("\tGrade: %c\n", grade[i]);
                    } else if (0.5 < candidateCgpa[i] < 1.5) {
                        grade[i] = 'D';
                        printf("\tGrade: %c\n", grade[i]);
                    } else {
                        grade[i] = 'E';
                        printf("\tGrade: %c\n", grade[i]);
                    }
                }
                printf("\n\tHighest Mark among all candidates: %.2lf by %s\n", highestMark, candidateName[topMarkCand]);
                printf("\tLeast Mark among all candidates: %.2lf by %s\n", leastMark, candidateName[lowMarkCand]);

                printf("\n|------------------------------------------------------------------------------|\n");

                break;
            }
            case 3: /* Score details */{
                printf("\n+------------------------------------------------------------------------------+\n");

                for (i = 0; i < numCandidates; i++) {
                    printf("\nEnter scores of candidate %d for each round:\n", i + 1);/* gets score details from user*/
                    printf("\n\tfirst round: ");
                    scanf("%hu", &round1Score[i]);
                    printf("\n\tsecond round: ");
                    scanf("%hu", &round2Score[i]);
                    printf("\n\tthird round: ");
                    scanf("%hu", &round3Score[i]);
                    //increments scores of each round with respect to grade of the candidate
                    if (grade[i] == 'A') {
                        round1Score[i] += 5, round2Score[i] += 5, round3Score[i] += 5;
                    } else if (grade[i] == 'B') {
                        round1Score[i] += 4, round2Score[i] += 4, round3Score[i] += 4;
                    } else if (grade[i] == 'C') {
                        round1Score[i] += 3, round2Score[i] += 3, round3Score[i] += 3;
                    } else if (grade[i] == 'D') {
                        round1Score[i] += 2, round2Score[i] += 2, round3Score[i] += 2;
                    } else {
                        round1Score[i] += 1, round2Score[i] += 1, round3Score[i] += 1;
                    }
                    totalScore[i] = round1Score[i] + round2Score[i] +
                                    round3Score[i]; /* calculates total score of the candidate */
                    //finds the highest and least score
                    if (totalScore[i] > highestScore)
                        topScoreCand += i, highestScore = totalScore[i];
                    else if (totalScore[i] < leastScore)
                        lowScoreCand += i, leastScore = totalScore[i];
                }

                printf("\n+------------------------------------------------------------------------------+\n");

                printf("\n\t-->Scores Details<--\n"); /* displays the scores of candidates */

                for (i = 0; i < numCandidates; i++) {
                    printf("\n\tCandidate %d\n", i + 1);
                    printf("\tName: %s\n", candidateName[i]);
                    switch (grade[i]) {
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
                    printf("\n\tRound 1: %hu\n", round1Score[i]);
                    printf("\n\tRound 2: %hu\n", round2Score[i]);
                    printf("\n\tRound 3: %hu\n", round3Score[i]);
                    printf("\n\tTotal score: %hu\n", totalScore[i]);
                }
                printf("\n\tHighest score among all candidates: %.2lf by %s\n", highestScore,
                       candidateName[topScoreCand]);
                printf("\tLeast score among all candidates: %.2lf by %s\n", leastScore, candidateName[lowScoreCand]);

                printf("\n|------------------------------------------------------------------------------|\n");
                break;
            }
            case 4: {
                printf("\n|-----------------------------------THE END------------------------------------|\n");

                printf("\n\t*PROGRAM IS TERMINATED*");

                printf("\n|-----------------------------------THE END------------------------------------|\n");
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
