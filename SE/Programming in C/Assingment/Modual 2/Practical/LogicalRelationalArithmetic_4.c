#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    if (b != 0)
        printf("Division: %d\n", a / b);
    else
        printf("Division: Cannot divide by zero\n");

    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(a && b): %d\n", a && b);
    printf("(a || b): %d\n", a || b);
    printf("!(a): %d\n", !a);
    printf("!(b): %d\n", !b);

    return 0;
}
