#include <stdio.h>

/*
TASK 2: Operators
Goal: Use arithmetic + comparison + logical operators.

TODOs:
1) Ask the user for two integers a and b.
2) Print:
   - a + b, a - b, a * b
   - a / b (integer division) AND a % b (remainder)
     - If b == 0, do not divide (print a warning).
3) Compare a and b and print:
   - "a is greater", "b is greater", or "they are equal"
4) Logical checks:
   - Print if BOTH numbers are positive
   - Print if AT LEAST ONE number is negative

Hints:
- Comparisons: > < == !=
- Logical: && || !
*/

int main(void) {
    int a = 0, b = 0;

    printf("Enter integer a: ");
    // TODO: scanf a
    printf("Enter integer b: ");
    // TODO: scanf b

    printf("\n=== Arithmetic ===\n");
    // TODO: print +, -, *

    // TODO: division + modulo only if b != 0
    // else print "Cannot divide by zero."

    printf("\n=== Comparison ===\n");
    // TODO: compare and print

    printf("\n=== Logical checks ===\n");
    // TODO: both positive?
    // TODO: at least one negative?

    return 0;
}

#include <stdio.h>

/*
TASK 2: Operators
Goal: Use arithmetic + comparison + logical operators.
*/

int main(void) {
    int a = 0, b = 0;

    printf("Enter integer a: ");
    scanf("%d", &a);
    printf("Enter integer b: ");
    scanf("%d", &b);

    printf("\n=== Arithmetic ===\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    // TODO: division + modulo only if b != 0
    if (b != 0) {
        printf("%d / %d = %d (integer division)\n", a, b, a / b);
        printf("%d %% %d = %d (remainder)\n", a, b, a % b);
    } else {
        printf("Cannot divide by zero.\n");
    }

    printf("\n=== Comparison ===\n");
    if (a > b) {
        printf("a is greater\n");
    } else if (b > a) {
        printf("b is greater\n");
    } else {
        printf("they are equal\n");
    }

    printf("\n=== Logical checks ===\n");
    // Both positive? (Assuming 0 is not positive)
    if (a > 0 && b > 0) {
        printf("BOTH numbers are positive.\n");
    } else {
        printf("They are NOT both positive.\n");
    }

    // At least one negative?
    if (a < 0 || b < 0) {
        printf("AT LEAST ONE number is negative.\n");
    } else {
        printf("Neither number is negative.\n");
    }

    return 0;
}
