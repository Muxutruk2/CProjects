#include "stdio.h"

int main(int argc, char *argv[])
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator [+ - * /] > ");
    scanf("%c", &operator);
    
    printf("Enter number 1 > ");
    scanf("%lf", &num1);

    printf("Enter number 2 > ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            printf("%c is not valid", operator);
            return 1;
    }

    printf("Result: %lf", result);

    return 0;
}
