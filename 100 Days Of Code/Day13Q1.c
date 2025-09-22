// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main()
{

    int a, b;
    float out;
    char o;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    printf("Enter the Second Number: ");
    scanf("%d", &b);
    printf("Enter the Operator(+, -, *, /, %%) : ");
    scanf(" %c", &o);

    switch (o)
    {
    case '+':
        out = a + b;
        printf("The Sum: %.2f", out);
        break;
    case '-':
        out = a - b;
        printf("The Difference: %.2f", out);
        break;
    case '*':
        out = a * b;
        printf("The Product: %.2f", out);
        break;
    case '/':
        out = a / b;
        printf("The Quotient: %.2f", out);
        break;
    case '%':
        out = (int)a % (int)b;
        printf("The Remainder: %.2f", out);
        break;
    default:
        printf("Use the Specified Operators");
    }

    return 0;
}