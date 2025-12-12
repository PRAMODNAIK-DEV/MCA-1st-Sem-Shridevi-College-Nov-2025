#include <stdio.h>
int main()
{

    char op;
    double a, b, result;

    printf("Simple Calculator\n");
    printf("Choose an operation:\n");
    printf(" + : Addition\n");
    printf(" - : Subtraction\n");
    printf(" * : Multiplication\n");
    printf(" / : Division\n");
    printf(" %% : Modulus (for integers only)\n");



    printf("Please Enter a Valid Operator: ");
    scanf("%c", &op);

    printf("Enter the 1st Number: ");
    scanf("%f", &a);

    printf("Enter the 2nd Number: ");
    scanf("%f", &b);



    if(op == '+'){
        result = a + b;
        printf("Output: Addition of %.2f + %.2f = %.2f",a, b, result);
    }

    else if(op == '-'){
        result = a - b;
        printf("Output: Substraction of %.2f - %.2f = %.2f",a, b, result);

    }


    return 0;
}
