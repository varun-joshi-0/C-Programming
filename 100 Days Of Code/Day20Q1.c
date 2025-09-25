// Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main()
{

    int a, i, prod = 1;
    printf("Enter the Number: ");
    scanf("%d", &a);

    while (a > 0)
    {
        i = a % 10;
        a = a / 10;
        if (i % 2 != 0)
        {
            prod = prod * i;
        }
    }
    printf("The Product of Odd Digits are %d", prod);

    return 0;
}