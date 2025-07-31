#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Input
    printf("Enter an expression (e.g., 5 + 3): ");
    if (scanf("%f %c %f", &num1, &operator, &num2) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }

    // Operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Error: Invalid operator '%c'\n", operator);
    }

    return 0;
}
