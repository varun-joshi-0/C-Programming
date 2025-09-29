// Write a program to check if a number is a strong number.

#include <stdio.h>
int main()
{

    int n, b, sum = 0, a;
    printf("Enter the Number: ");
    scanf("%d", &n);
    a = n;

    while (a > 0)
    {
        b = a % 10;
        int fact = 1;
        while (b > 0)
        {
            fact = fact * b;
            b = b - 1;
        }
        sum = sum + fact;
        a = a / 10;
    }

    if (sum == n)
    {
        printf("Its a Strong Number.");
    }
    else
    {
        printf("Its NOT a Strong Number.");
    }

    return 0;
}