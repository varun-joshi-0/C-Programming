// Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{

    int a, b;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    printf("Enter the Second Number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d\n", a);
    printf("%d", b);

    return 0;
}