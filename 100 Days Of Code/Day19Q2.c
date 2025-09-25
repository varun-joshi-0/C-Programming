// Write a program to find the sum of digits of a number.

#include <stdio.h>
int main()
{

    int a, i, sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &a);

    while (a > 0)
    {
        i = a % 10;
        sum = sum + i;
        a = a / 10;
    }
    printf("The Sum of its Digits are %d", sum);

    return 0;
}
