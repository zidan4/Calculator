#include <stdio.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;
    char op;
    
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &op); // Space before %c to consume any newline character
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            printf("Result: %.2lf\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %.2lf\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %.2lf\n", multiply(num1, num2));
            break;
        case '/':
            printf("Result: %.2lf\n", divide(num1, num2));
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
