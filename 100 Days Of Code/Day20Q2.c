// Program to find the 1's complement of a binary number and print it.

#include <stdio.h>

int main()
{
    long long n;
    int r, complement = 0, place = 1;
    long long temp;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    temp = n;

    while (temp != 0)
    {
        r = temp % 10;
        if (r != 0 && r != 1)
        {
            printf("Invalid binary number!\n");
            return 0;
        }
        temp /= 10;
    }

    temp = n;

    while (temp != 0)
    {
        r = temp % 10;
        r = (r == 0) ? 1 : 0;
        complement += r * place;
        place *= 10;
        temp /= 10;
    }

    printf("1's complement of %lld is %d\n", n, complement);

    return 0;
}