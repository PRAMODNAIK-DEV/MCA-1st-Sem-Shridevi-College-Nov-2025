#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    // Ask the user for an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Ask the user for two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform the calculation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %d + %d = %d\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %d - %d = %d\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %d * %d = %d\n", num1, num2, result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %d / %d = %d\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
