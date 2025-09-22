// Write a program to reverse a given number.
#include <stdio.h>

int main()
{
    int n, r = 0, d;

    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
    {

        d = n % 10;

        r = r * 10 + d;

        n = n / 10;
    }

    printf("Reversed number: %d\n", r);

    return 0;
}
