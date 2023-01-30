/*

VAC - C - Mini Project - RECRUITMENT TRACKING

Task 8: Write a program to implement user defined functions to
implement the following functionality 1. Company details
2. Candidate details 3. Score calculation

Created by: Ashvath S.P

Date: 27-11-2022

*/

#include <stdio.h>

void printCompanyDetails(char *companyName, int companyClass, char *companyLocation) {
    printf("\n\t-->Company Details<--\n");
    printf("\tName: %s\n", companyName);
    printf("\tClass: %s\n", companyClass == 1 ? "Public" : "Private");
    printf("\tLocation: %s\n", companyLocation);
}

void enterCompanyDetails(char *companyName, int *companyClass, char *companyLocation) {
    printf("\n\t-->Enter details for the company<--\n");
    printf("\tName: ");
    scanf(" %s", companyName);
    printf("\t\tClass: \n\t1. Public\n\t2. Private\n");
    printf("\tChoose class: ");
    scanf(" %d", companyClass);
    printf("\tLocation: ");
    scanf(" %s", companyLocation);
}

void printCandidateDetails(int numCandidates, char candidateName[][20], int candidateAge[], char candidateGender[], char candidatePostApplied[][20], char candidateDegree[][20], double candidateMark[], double candidateCgpa[], int topMarkCand, int lowMarkCand) {
    int i;
    printf("\n\t-->Candidate Details<--\n");
    for (i = 0; i < numCandidates; i++) {
        printf("\n\t-->Details for candidate %d<--\n", i + 1);
        printf("\tName: %s\n", candidateName[i]);
        printf("\tAge: %d\n", candidateAge[i]);
        printf("\tGender: %c\n", candidateGender[i]);
        printf("\tPost applied for: %s\n", candidatePostApplied[i]);
        printf("\tDegree: %s\n", candidateDegree[i]);
        printf("\tMark: %lf\n", candidateMark[i]);
        printf("\tCGPA: %lf\n", candidateCgpa[i]);
    }
    printf("\n\t-->Marks Details<--\n");
    printf("\tHighest Mark: %lf\n", candidateMark[topMarkCand]);
    printf("\tLowest Mark: %lf\n", candidateMark[lowMarkCand]);
}

void enterCandidateDetails(int numCandidates, char candidateName[][20], int candidateAge[], char candidateGender[], char candidatePostApplied[][20], char candidateDegree[][20], double candidateMark[], double candidateCgpa[], int *topMarkCand, int *lowMarkCand) {
    int i;
    printf("\n\tEnter the number of candidates: ");
    scanf("%d", &numCandidates);
    for (i = 0; i < numCandidates; i++) {
        printf("\n\t-->Enter details for candidate %d<--\n", i + 1);
        printf("\tName: ");
        scanf("%s", candidateName[i]);
        printf("\tAge: ");
        scanf("%d", &candidateAge[i]);
        printf("\tGender: ");
        scanf(" %c", &candidateGender[i]);
        printf("\tPost applied for: ");
        scanf(" %s", candidatePostApplied[i]);
        printf("\tDegree: ");
        scanf(" %s", candidateDegree[i]);
        printf("\tMark: ");
        scanf("%lf", &candidateMark[i]);
        printf("\tCGPA: ");
        scanf("%lf", &candidateCgpa[i]);
    }
    *topMarkCand = 0;
    *lowMarkCand = 0;
    for (i = 1; i < numCandidates; i++) {
        if (candidateMark[i] > candidateMark[*topMarkCand]) {
            *topMarkCand = i;
        }
        if (candidateMark[i] < candidateMark[*lowMarkCand]) {
            *lowMarkCand = i;
        }
    }
}

void enter&DisplayScoreDetails(){
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
}

int main(void) {
    char companyName[20];
    int companyClass;
    char companyLocation[20];
    int numCandidates;
    char candidateName[100][20];
    int candidateAge[100];
    char candidateGender[100];
    char candidatePostApplied[100][20];
    char candidateDegree[100][20];
    double candidateMark[100];
    double candidateCgpa[100];
    int topMarkCand, lowMarkCand;
    enterCompanyDetails(companyName, &companyClass, companyLocation);
    enterCandidateDetails(numCandidates, candidateName, candidateAge, candidateGender, candidatePostApplied, candidateDegree, candidateMark, candidateCgpa, &topMarkCand, &lowMarkCand);
    printCompanyDetails(companyName, companyClass, companyLocation);
    printCandidateDetails(numCandidates, candidateName, candidateAge, candidateGender, candidatePostApplied, candidateDegree, candidateMark, candidateCgpa, topMarkCand, lowMarkCand);
    return 0;
}
