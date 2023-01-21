//VAC - C - Mini Project
/*Task 2: Write a program to display the scores of the candidate in each
chosen round. For each category of CGPA, give bonusmarks during the
interview.*/
//Compiled by: Ashvath S.P
//Date: 13-11-2022

#include <stdio.h>
#include <string.h>

int main() {
    char candidate_name[50], candidate_gender[10], candidate_post_applied[50], candidate_degree[50], grade;
    unsigned short candidate_age, mark_grade_point = 4, round1_score, round2_score, round3_score;
    double candidate_mark, candidate_cgpa;

    printf("|------------------------------------------------------------------------------|\n");
    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~RECRUITMENT TRACKING~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("|------------------------------------------------------------------------------|\n");

    printf("\n\t-->Please enter the details of the Candidate<--\n");

    printf("\n\tEnter the Name of the Candidate: ");
    scanf("%s", &candidate_name);
//	printf("\n\tEnter the Age of the Candidate: ");
//	scanf("%hu", &candidate_age);
//	printf("\n\tEnter the Gender of the Candidate: ");
//	scanf("%s", &candidate_gender);
//	printf("\n\tEnter the Post applied by the Candidate: ");
//	scanf("%s", &candidate_post_applied);
//	printf("\n\tEnter the Degree of the Candidate: ");
//	scanf("%s", &candidate_degree);
    printf("\n\tEnter the Mark obtained by the Candidate: ");
    scanf("%lf", &candidate_mark);

    candidate_cgpa = mark_grade_point * (candidate_mark / 100);

    printf("\n+------------------------------------------------------------------------------+\n");

    printf("\n\t-->Please enter the scores of the Candidate for each round<--\n");

    printf("\n\tEnter the score for the first round: ");
    scanf("%hu", &round1_score);
    printf("\n\tEnter the score for the second round: ");
    scanf("%hu", &round2_score);
    printf("\n\tEnter the score for the third round: ");
    scanf("%hu", &round3_score);

    if (candidate_cgpa > 3.5) {
        round1_score += 5;
        round2_score += 5;
        round3_score += 5;
    } else if (2.5 < candidate_cgpa < 3.5) {
        round1_score += 4;
        round2_score += 4;
        round3_score += 4;
    } else if (1.5 < candidate_cgpa < 2.5) {
        round1_score += 3;
        round2_score += 3;
        round3_score += 3;
    } else if (0.5 < candidate_cgpa < 1.5) {
        round1_score += 2;
        round2_score += 2;
        round3_score += 2;
    } else {
        round1_score += 1;
        round2_score += 1;
        round3_score += 1;
    }

    printf("\n+------------------------------------------------------------------------------+\n");

    printf("\n\t-->Candidate Details<--\n");

    printf("\n\tName: %s\n", candidate_name);
//	printf("\n\tAge: %hu\n", candidate_age);
//	printf("\n\tGender: %s\n", candidate_gender);
//	printf("\n\tPost applied: %s\n", candidate_post_applied);
//	printf("\n\tDegree: %s\n", candidate_degree);
    printf("\n\tMark: %0.2lf\n", candidate_mark);
    printf("\n\tCGPA (4 - Grade Point Scale): %0.2lf\n", candidate_cgpa);

    if (candidate_cgpa > 3.5) {
        grade = 'A';
        printf("\n\tGrade: %c\n", grade);
    } else if (2.5 < candidate_cgpa < 3.5) {
        grade = 'B';
        printf("\n\tGrade: %c\n", grade);
    } else if (1.5 < candidate_cgpa < 2.5) {
        grade = 'C';
        printf("\n\tGrade: %c\n", grade);
    } else if (0.5 < candidate_cgpa < 1.5) {
        grade = 'D';
        printf("\n\tGrade: %c\n", grade);
    } else {
        grade = 'E';
        printf("\n\tGrade: %c\n", grade);
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
    }

    printf("\n\tRound 1: %hu\n", round1_score);
    printf("\n\tRound 2: %hu\n", round2_score);
    printf("\n\tRound 3: %hu\n", round3_score);
    printf("\n\tTotal score: %hu\n", round1_score + round2_score + round3_score);
    printf("\n\tAverage score: %hu\n", (round1_score + round2_score + round3_score) / 40);

    printf("\n|-----------------------------------THE END------------------------------------|\n");

    return 0;
}
