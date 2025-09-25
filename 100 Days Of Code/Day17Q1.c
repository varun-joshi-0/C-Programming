// Program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, a, j, z;
    float p, sum;
    p = 0;
    printf("Enter the No.: ");
    scanf("%d", &n);
    a = n;
    i = n;
    sum = 0;

    while (a > 0)
    {
        a = a / 10;
        p = p + 1;
    }
    while (i > 0)
    {
        j = i % 10;

        sum = sum + pow(j, p);
        i = i / 10;
    }
    if (sum == n)
    {
        printf("%d is an Armstrong Number.\n", n);
    }
    else
    {
        printf("%d is NOT a Armstrong Number.\n", n);
    }

    return 0;
}