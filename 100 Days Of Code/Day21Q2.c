// Write a program to check if a number is a perfect number.

#include <stdio.h>
int main()
{

    int n, count, i = 1, new = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            new = new + i;
        }
        i++;
    }

    if (new == n)
    {
        printf("Its a Perfect Number.");
    }
    else
    {
        printf("Its NOT a Perfect Number.");
    }

    return 0;
}