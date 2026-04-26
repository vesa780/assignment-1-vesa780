#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
TASK 5: Command Line
Goal: Use argc/argv.

Program usage:
  ./cmd <operation> <num1> <num2>

Where <operation> is one of:
  add, sub, mul, div

Examples:
  ./cmd add 10 5   -> 15
  ./cmd div 10 2   -> 5

TODOs:
1) If arguments are missing, print usage instructions and exit.
2) Read operation string (argv[1]) and two integers (argv[2], argv[3]).
   - Use strtol instead of atoi (better).
3) Do the operation and print result.
4) For division: handle division by zero.
5) If operation is unknown: print "Unknown operation".

Hint:
- Use strcmp(op, "add") == 0
*/

int main(int argc, char *argv[]) {
    // TODO 1: check argc
    // argc should be 4

    // TODO 2: parse operation and numbers
    // char *op = argv[1];
    // long a = strtol(argv[2], NULL, 10);
    // long b = strtol(argv[3], NULL, 10);

    // TODO 3-5: implement operations

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
TASK 5: Command Line
Goal: Use argc/argv.
*/

int main(int argc, char *argv[]) {
    // TODO 1: check argc (Program name + op + num1 + num2 = 4)
    if (argc != 4) {
        printf("Usage: %s <operation> <num1> <num2>\n", argv[0]);
        printf("Operations: add, sub, mul, div\n");
        return 1; // Exit with error code
    }

    // TODO 2: parse operation and numbers
    char *op = argv[1];
    long a = strtol(argv[2], NULL, 10);
    long b = strtol(argv[3], NULL, 10);

    // TODO 3-5: implement operations
    if (strcmp(op, "add") == 0) {
        printf("Result: %ld\n", a + b);
    }
    else if (strcmp(op, "sub") == 0) {
        printf("Result: %ld\n", a - b);
    }
    else if (strcmp(op, "mul") == 0) {
        printf("Result: %ld\n", a * b);
    }
    else if (strcmp(op, "div") == 0) {
        // Handle division by zero
        if (b == 0) {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        printf("Result: %ld\n", a / b);
    }
    else {
        // TODO 5: Unknown operation
        printf("Unknown operation: %s\n", op);
        return 1;
    }

    return 0;
}
