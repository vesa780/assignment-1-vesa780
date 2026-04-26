#include <stdio.h>

/*
TASK 6: Magic Numbers
Goal: Remove "random numbers" from code and replace them with named constants.

PROBLEM:
This program calculates a final course score.
But it uses lots of "magic numbers" (like 0.4, 0.6, 50, 100).

TODOs:
1) Create named constants for:
   - QUIZ_WEIGHT (example: 0.40)
   - EXAM_WEIGHT (example: 0.60)
   - PASS_SCORE (example: 50)
   - MIN_SCORE (0)
   - MAX_SCORE (100)
2) Use those constants instead of raw numbers.
3) Validate inputs (0..100).
4) Print:
   - Final score (as a double with 2 decimals)
   - PASS/FAIL based on PASS_SCORE

Extra (optional):
- If final score >= 90, print "Excellent"
- If final score < 50, print "Needs improvement"
*/

int main(void) {
    // TODO 1: define constants here (use const double / const int)

    double quiz = 0.0;
    double exam = 0.0;

    printf("Enter quiz score (0-100): ");
    // TODO: scanf quiz
    printf("Enter exam score (0-100): ");
    // TODO: scanf exam

    // TODO 3: validate inputs using MIN_SCORE and MAX_SCORE

    // Old logic (replace numbers with constants):
    // double finalScore = quiz * 0.4 + exam * 0.6;

    // TODO 2: compute finalScore using QUIZ_WEIGHT and EXAM_WEIGHT
    double finalScore = 0.0;

    printf("\nFinal score: %.2f\n", finalScore);

    // TODO 4: PASS/FAIL using PASS_SCORE

    return 0;
}

#include <stdio.h>

/*
TASK 6: Magic Numbers
Goal: Remove "random numbers" from code and replace them with named constants.
*/

int main(void) {
    // TODO 1: define constants here
    const double QUIZ_WEIGHT = 0.40;
    const double EXAM_WEIGHT = 0.60;
    const int PASS_SCORE = 50;
    const int MIN_SCORE = 0;
    const int MAX_SCORE = 100;

    double quiz = 0.0;
    double exam = 0.0;

    printf("Enter quiz score (0-100): ");
    scanf("%lf", &quiz);
    printf("Enter exam score (0-100): ");
    scanf("%lf", &exam);

    // TODO 3: validate inputs using MIN_SCORE and MAX_SCORE
    if (quiz < MIN_SCORE || quiz > MAX_SCORE || exam < MIN_SCORE || exam > MAX_SCORE) {
        printf("Error: Scores must be between %d and %d.\n", MIN_SCORE, MAX_SCORE);
        return 1;
    }

    // TODO 2: compute finalScore using QUIZ_WEIGHT and EXAM_WEIGHT
    double finalScore = (quiz * QUIZ_WEIGHT) + (exam * EXAM_WEIGHT);

    printf("\nFinal score: %.2f\n", finalScore);

    // TODO 4: PASS/FAIL using PASS_SCORE
    if (finalScore >= PASS_SCORE) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    // Extra logic
    if (finalScore >= 90) {
        printf("Excellent!\n");
    } else if (finalScore < 50) {
        printf("Needs improvement.\n");
    }

    return 0;
}
