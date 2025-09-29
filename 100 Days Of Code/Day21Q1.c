// Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main()
{

    int n, p = 0, temp1, b, c, pow = 1, new = 0, mid;
    printf("Enter the Number: ");
    scanf("%d", &n);
    temp1 = n;

    while (temp1 > 0)
    {
        temp1 = temp1 / 10;
        p = p + 1;
    }

    for (int i = 0; i < p - 1; i++)
    {
        pow = pow * 10;
    }

    b = n % 10;
    c = n / pow;
    mid = (n % pow) / 10;

    if (n < 10)
    {
        new = n;
    }
    else
    {
        new = b * pow + mid * 10 + c;
    }

    printf("The New Number is %d", new);

    return 0;
}