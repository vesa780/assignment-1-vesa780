#include <stdio.h>

/*
TASK 4: Loops
Goal: for + while + simple algorithms.

TODOs:
1) Ask the user for a positive integer n.
   - Keep asking until user enters n > 0 (use a loop).
2) Print numbers from 1 to n (for loop).
3) Compute and print:
   - sum from 1..n
4) Compute and print:
   - factorial of n (n!)
   Note: factorial grows fast; use unsigned long long.

Hints:
- Input loop can be while(n <= 0)
- Factorial:
  fact = 1;
  for(i=1; i<=n; i++) fact *= i;
*/

int main(void) {
    int n = 0;

    // TODO 1: keep asking until n > 0
    while (n <= 0) {
        printf("Enter a positive integer n (> 0): ");
        // TODO: scanf n
        // If scanf fails, clear input safely (optional for beginners)
    }

    printf("\n=== Counting ===\n");
    // TODO 2: print 1..n

    printf("\n=== Sum 1..n ===\n");
    // TODO 3: compute sum

    printf("\n=== Factorial n! ===\n");
    // TODO 4: compute factorial

    return 0;
}

#include <stdio.h>

/*
TASK 4: Loops
Goal: for + while + simple algorithms.
*/

int main(void) {
    int n = 0;

    // TODO 1: keep asking until n > 0
    while (n <= 0) {
        printf("Enter a positive integer n (> 0): ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Invalid input. Please try again.\n");
        }
    }

    printf("\n=== Counting ===\n");
    // TODO 2: print 1..n
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n=== Sum 1..n ===\n");
    // TODO 3: compute sum
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i; // This is the same as sum = sum + i
    }
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    printf("\n=== Factorial n! ===\n");
    // TODO 4: compute factorial
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i; // This is the same as factorial = factorial * i
    }
    // Use %llu to print unsigned long long
    printf("%d! = %llu\n", n, factorial);

    return 0;
}
