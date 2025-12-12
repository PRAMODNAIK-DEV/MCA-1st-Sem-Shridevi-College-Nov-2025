#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Display available operations
    printf("----------------------------------");
    printf("Simple Calculator\n");
    printf("Choose an operation:\n");
    printf(" + : Addition\n");
    printf(" - : Subtraction\n");
    printf(" * : Multiplication\n");
    printf(" / : Division\n");
    printf(" %% : Modulus (for integers only)\n");
    printf("----------------------------------");

    // Input the operator
    printf("Enter the operator: ");
    scanf(" %c", &operator);

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform the chosen operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                int mod_result = (int)num1 % (int)num2;
                printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, mod_result);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
